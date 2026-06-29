#include <iostream>
using namespace std;

int main() {
    string questions[] = {
        "1. What is the capital of India?\n"
        "a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n",

        "2. Which language is primarily used for Android development?\n"
        "a) Java\nb) Python\nc) C++\nd) PHP\n",

        "3. How many bits are there in a byte?\n"
        "a) 4\nb) 8\nc) 16\nd) 32\n"
    };

    char answers[] = {'b', 'a', 'b'};
    char userAnswer;
    int score = 0;

    int totalQuestions = sizeof(questions) / sizeof(questions[0]);

    cout << "===== QUIZ APPLICATION =====\n";

    for (int i = 0; i < totalQuestions; i++) {
        cout << "\n" << questions[i];
        cout << "Enter your answer (a/b/c/d): ";
        cin >> userAnswer;

        if (tolower(userAnswer) == answers[i]) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! Correct answer is " << answers[i] << ".\n";
        }
    }

    cout << "\n===== QUIZ RESULT =====\n";
    cout << "Total Questions: " << totalQuestions << endl;
    cout << "Correct Answers: " << score << endl;
    cout << "Wrong Answers: " << totalQuestions - score << endl;
    cout << "Score: " << (score * 100.0 / totalQuestions) << "%\n";

    return 0;
}