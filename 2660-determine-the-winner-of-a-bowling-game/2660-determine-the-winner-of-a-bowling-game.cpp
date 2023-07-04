class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        
        int score1 = 0;
        int score2 = 0;
        
        short count1 = 0;
        short count2 = 0;
        
        for (short i=0; i< player1.size(); i++){
            
            if (count1 == 0)
                score1 += player1.at(i);

            else{
                score1 += (player1.at(i) * 2);
                count1--;
            }

            
            if (count2 == 0)
                score2 += player2.at(i);
            
            else{
                score2 += (player2.at(i) * 2);
                count2--;
            }

            
            if (player1.at(i) == 10)
                count1 = 2;

            if (player2.at(i) == 10)
                count2 = 2;

        }
        
        if (score1 > score2){
            return 1;
        }

        else if (score1 < score2){
            return 2;
        }
        
        else{
            return 0;
        }

    }
};