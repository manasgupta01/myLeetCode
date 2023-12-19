class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& inputImage) {
        int rows = inputImage.size();
        int cols = inputImage[0].size();
        vector<int> temp(cols);
        int prevVal = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int sum = 0;
                int count = 0;

                if (i + 1 < rows) {
                    if (j - 1 >= 0) {
                        sum += inputImage[i + 1][j - 1];
                        count += 1;
                    }
                    sum += inputImage[i + 1][j];
                    count += 1;
                    if (j + 1 < cols) {
                        sum += inputImage[i + 1][j + 1];
                        count += 1;
                    }
                }

                if (j + 1 < cols) {
                    sum += inputImage[i][j + 1];
                    count += 1;
                }
 
                sum += inputImage[i][j];
                count += 1;

                if (j - 1 >= 0) {
                    sum += temp[j - 1];
                    count += 1;
                }

                if (i - 1 >= 0) {
               
                    if (j - 1 >=  0) {
                        sum += prevVal;
                        count += 1;
                    }
                    
               
                    sum += temp[j];
                    count += 1;

                    if (j + 1 < cols) {
                        sum += temp[j + 1];
                        count += 1;
                    }
                }


                if (i - 1 >= 0) {
                    prevVal = temp[j];
                }

                temp[j] = inputImage[i][j];


                inputImage[i][j] = sum / count;
            }
        }

        return inputImage;
    }
};