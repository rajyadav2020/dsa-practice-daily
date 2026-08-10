class Solution {
  public:
      // This function acts as our "Simulation". 
      // It answers the question: "Can we successfully place 'm' balls with at least 'mid' distance between them?"
      bool isvalid(vector<int>& position, int mid, int m) {
          
          // GREEDY STEP 1: Always place the first ball in the very first basket.
          // This is always optimal because it leaves the maximum possible track for the remaining balls.
          int ball_placed = 1;
          int last_pos = position[0]; // Track where we placed the most recent ball
  
          // Loop through the remaining baskets starting from index 1
          for(int i = 1; i < position.size(); i++) {
              
              // GREEDY STEP 2: Check the distance between the current basket and our last placed ball.
              // If the gap is greater than or equal to our candidate distance ('mid'), it's a valid spot!
              if(position[i] - last_pos >= mid) {
                  ball_placed++;           // Place a ball here
                  last_pos = position[i];  // Update our last known placement
              }
  
              // EARLY EXIT: If we successfully placed all 'm' balls, this candidate distance works.
              if(ball_placed == m) {
                  return true;
              }
          }
          
          // If the loop finishes and we ran out of baskets before placing all 'm' balls,
          // it means our candidate distance ('mid') was too large/greedy.
          return false;
      }
  
      int maxDistance(vector<int>& position, int m) {
          
          // STEP 1: Sort the array. 
          // We MUST do this exactly once here. Sorting inside isvalid() would cause a Time Limit Exceeded (TLE) error.
          // Sorting also allows us to calculate the 'high' boundary correctly.
          sort(position.begin(), position.end());
          
          // STEP 2: Define the Binary Search space (The range of possible answers)
          // The absolute minimum possible distance between two balls is 1.
          int low = 1;
          
          // The absolute maximum possible distance is putting one ball at the start and one at the very end.
          int high = position.back() - position.front(); 
          
          int ans = -1; // Variable to store our best valid answer
  
          // STEP 3: The Binary Search Loop
          while(low <= high) {
              
              // Find the middle distance to test (prevents integer overflow)
              int mid = low + (high - low) / 2;
  
              // Run the simulation with this 'mid' distance
              if(isvalid(position, mid, m)) {
                  
                  // If it works, record it! This is a valid answer.
                  ans = mid;
                  
                  // THE PARADIGM SHIFT: "Maximize the Minimum"
                  // Because we want the LARGEST possible distance, we don't stop here.
                  // We discard the left half and search the right half for an even bigger number.
                  low = mid + 1; 
              } else {
                  
                  // If it doesn't work, our 'mid' was too big. The balls couldn't fit.
                  // We must discard the right half and search the left half for a smaller, easier distance.
                  high = mid - 1; 
              }
          }
          
          // Return the best recorded answer
          return ans;
      }
  };