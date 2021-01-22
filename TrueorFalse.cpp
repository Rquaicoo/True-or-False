#include <iostream>
#include <string>
using namespace std;
int main()
{
    int r;
    int f;
    int c;
    int a;
    int b;
    char correct_answers_array[30], x;
    int student_id_array[6];
    char student_answers_array[6][30];
    int encoded_answers_array[6][31];
 
    cout << "Input the correct answers. After entering each answer, press spacebar. Hit enter at the end" << endl;
    for(r=1;r<=4;r++)
    {
    cin >> correct_answers_array[r];
    }
    cout << "Input student id and press spacebar. Then proceed to input the students' answers. Press spacebar after each input. Press Enter to repeat process for next student." << endl;
    for(f=1;f<=6;f++)
    {
    for(c=1;c<=30;c++)
        {
            cin >> student_answers_array[f][c];
            
        }
    }
    
    for(f=1;f<=6;f++)
    {
     for(c=1;c<=30;c++)
        {
          if(student_answers_array[f][c] == correct_answers_array[c])
            {
                encoded_answers_array[f][c] = 1;
            }
          else if(student_answers_array[f][c] == x)
            {
               encoded_answers_array[f][c] = 0; 
            }
          else if(student_answers_array[f][c] != correct_answers_array[c])
            {
                encoded_answers_array[f][c] = -1;
            }
           else 
            {
            encoded_answers_array[f][c] = 0;
            }
        }
        encoded_answers_array[f][31] = 0;
        encoded_answers_array[f][31] = encoded_answers_array[f][31] + encoded_answers_array[f][c];
        
    }
    
    for(f=1;f<=6;f++)
     {
    cout<< encoded_answers_array[f][1] << "  " << encoded_answers_array[f][2] << "  " << encoded_answers_array[f][3] << "  " << encoded_answers_array[f][4] << "  " <<  encoded_answers_array[f][5] << " " << "marks" << endl;
    }
}