#include <iostream>

const std::string octave[] { "E", "F", "F#", "G", "G#", "A", "A#", "B", "C", "C#", "D", "D#" };
const int NOTES_IN_OCTAVE = sizeof(octave)/sizeof(std::string);

void printFrets(std::string note){
    for(int i {0}; i < NOTES_IN_OCTAVE; ++i){
        if(octave[i] == note){
            for(int j {i}; j < NOTES_IN_OCTAVE; ++j){
                std::cout << octave[j] << ' ';
                if(j == NOTES_IN_OCTAVE-1){
                    for(int k {0}; k < i; ++k){
                        std::cout << octave[k] << ' ';
                    }
                }
            }
        }
    }
    std::cout << '\n';
}

int main(){
    const std::string standard[] { "E", "A", "D", "G", "B", "E" };
    const std::string openD[] { "D", "A", "D", "F#", "A", "D" };
    const std::string openE[] { "E", "B", "E", "G#", "B", "E" };
    const std::string bass[] { "E", "A", "D", "G" };

    std::cout << "STANDARD\n";
    for(std::string note : standard){
        printFrets(note);
    }
    std::cout << '\n';

    std::cout << "OPEN D\n";
    for(std::string note : openD){
        printFrets(note);
    }
    std::cout << '\n';

    std::cout << "OPEN E\n";
    for(std::string note : openE){
        printFrets(note);
    }
    std::cout << '\n';

    std::cout << "BASS\n";
    for(std::string note : bass){
        printFrets(note);
    }
    std::cout << '\n';

    return 0;
}
