#include <stdio.h>
#include <stdlib.h>

// (a) Length of the sentence
int iStrLength(char strSentence[100]) {
	int count = 0;
	for (int i=0; i<100; i++) {
		printf("%c\n", strSentence[i]);
		if (strSentence[i] == '\0') {
			printf("%d\n", i);
			break;
		}
		count += 1;
	}
	return count;
}
// (b) Number of words in the sentence
int iNumOfWords(char strSentence[], int iStrLength) {
	char temp = strSentence[0];
	int count = 0;
	for (int i=0; i<iStrLength; i++) {
		if (strSentence[i] == ' ') {
			count += 1;
		}
		else if (temp == ' ') {
			count += 1;
		}
		temp = strSentence[i];
	}
	if (strSentence[iStrLength] != ' ') {
		count += 1;
	}

	return count;
}
// (c) Number of vowels
int iNumOfVowels(char strSentence[], int iStrLength) {
	int iVowels = 0;
	for (int i=0; i<100; i++) {
		if (strSentence[i] == ('A' | 'E' | 'I' | 'O' | 'U' | 'a' | 'e' | 'i' | 'o' | 'u')) {
			iVowels += 1;
		}
	}
	return iVowels;
}
// (d) Frequency of the vowels
int iVowelFreq(char strSentence[]) {
	// {a, e, i, o, u}
	char vowel[5] = {0, 0, 0, 0, 0};
	for (int i=0; i<100; i++) {
		if (strSentence[i] == ('A' | 'a')) {
				vowel[0] += 1;
		}
		else if (strSentence[i] == ('E' | 'e')) {
                                vowel[1] += 1;
                }
		else if (strSentence[i] == ('I' | 'i')) {
                                vowel[2] += 1;
                }
		else if (strSentence[i] == ('O' | 'o')) {
                                vowel[3] += 1;
                }
		else if (strSentence[i] == ('U' | 'u')) {
                                vowel[4] += 1;
                }
	}
	return vowel[5];
}

int main() {
	char strSentence[100];
	int sentence_length;
	int iNumWords;
	int iVowels;
	int iVowelFrequency;

	printf("Enter a sentence:\n");
	scanf("%s", strSentence);
	
	// (a) Length of the sentence
	sentence_length = iStrLength(strSentence);
	printf("The sentence length is %d characters\n", sentence_length);
	// (b) Number of words in the sentence
	iNumWords = iNumOfWords(strSentence, sentence_length);
	printf("The number of words is %d\n", iNumWords);
	// (c) Number of vowels
	iVowels = iNumOfVowels(strSentence, sentence_length);
	printf("The number of vowels is %d\n", iVowels);
	// (d) Frequency of the vowels
	iVowelFrequency = iVowelFreq(strSentence);
	printf("The frequencies of the vowels are as follow: %d\n", iVowelFrequency);


	return 0;
}
