#include <iostream>
#include "answer.cpp"
#include "answer.h"
using namespace std;

string q1(answer* answers);
string q2(answer* answers);
string q3(answer* answers);
string q4(answer* answers);
string q5(answer* answers);
string q6(answer* answers);
string q7(answer* answers);
string q8(answer* answers);
string q9(answer* answers);
string q10(answer* answers);
string q11(answer* answers);
string q12(answer* answers);
string q13(answer* answers);
string q14(answer* answers);
string q15(answer* answers);
string q16(answer* answers);
string q17(answer* answers);
string q18(answer* answers);
string q19(answer* answers);
string q20(answer* answers);
string q21(answer* answers);
string q22(answer* answers);
string q23(answer* answers);
string q24(answer* answers);
string q25(answer* answers);
string q26(answer* answers);




int main()
{
	setlocale(LC_ALL, "RU");
	answer *answers = new answer[27];
	for (int i = 0; i < 27; i++) {
		answers[i].count = 0;
	}
	answers[0].name = "Локомотив";
	answers[1].name = "Динамо Москва";
	answers[2].name = "ЦСКА";
	answers[3].name = "Спартак";
	answers[4].name = "Химки";
	answers[5].name = "Зенит";
	answers[6].name = "Сочи";
	answers[7].name = "Краснодар";
	answers[8].name = "Ростов";
	answers[9].name = "Крылья Советов";
	answers[10].name = "Ахмат";
	answers[11].name = "Рубин";
	answers[12].name = "Алания";
	answers[13].name = "Манчестер Юнайтед";
	answers[14].name = "Манчестер Сити";
	answers[15].name = "Ливерпуль";
	answers[16].name = "Эвертон";
	answers[17].name = "Ньюкасл";
	answers[18].name = "Челси";
	answers[19].name = "Арсенал";
	answers[20].name = "Тоттенхэм";
	answers[21].name = "Реал Мадрид";
	answers[22].name = "Атлетико Мадрид";
	answers[23].name = "Севилья";
	answers[24].name = "Барселона";
	answers[25].name = "ПСЖ";
	answers[26].name = "Бавария";

	cout << "0 = НЕТ --- 1 = ДА" << endl;
	
	string finalAnswer = q1(answers);

	cout << "Ваша команда:" << finalAnswer << endl << endl << endl;
	cout << "Вероятности:" << endl;
	for (int i = 0; i < 27; i++) {
		cout.precision(3);
		cout << answers[i].name << ": " << answers[i].count / 26 << endl;
	}
}

string q1(answer* answers) {
	cout << "Это отечественная команда?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 0; i < 13; i++) {
			answers[i].count++;
		}
		return q2(answers);
	}
	else {
		for (int i = 13; i < 27; i++) {
			answers[i].count++;
		}
		return q14(answers);
	}
}

string q2(answer* answers) {
	cout << "Это команда из столицы?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 0; i < 5; i++) {
			answers[i].count++;
		}
		return q3(answers);
	}
	else {
		for (int i = 5; i < 13; i++) {
			answers[i].count++;
		}
		return q7(answers);
	}
}

string q3(answer* answers) {
	cout << "Официальный спонсор этой команды - государственная компания?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 0; i < 3; i++) {
			answers[i].count++;
		}
		return q4(answers);
	}
	else {
		for (int i = 3; i < 5; i++) {
			answers[i].count++;
		}
		return q6(answers);
	}
}

string q4(answer* answers) {
	cout << "Эта команда связана с РЖД?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[0].count++;
		return answers[0].name;
	}
	else {
		for (int i = 1; i < 3; i++) {
			answers[i].count++;
		}
		return q5(answers);
	}
}

string q5(answer* answers) {
	cout << "Эта команда связана с ВТБ?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[1].count++;
		return answers[1].name;
	}
	else {
		answers[2].count++;
		return answers[2].name;
	}
}


string q6(answer* answers) {
	cout << "Эта команда имеет один из самых больших бюджетов в лиге?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[3].count++;
		return answers[3].name;
	}
	else {
		answers[4].count++;
		return answers[4].name;
	}
}

string q7(answer* answers) {
	cout << "Эта команда успешно выступает последние 2 сезона ? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 5; i < 9; i++) {
			answers[i].count++;
		}
		return q8(answers);
	}
	else {
		for (int i = 9; i < 13; i++) {
			answers[i].count++;
		}
		return q11(answers);
	}
}

string q8(answer* answers) {
	cout << "Эта команда связана с 'Газпромом' ? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 5; i < 7; i++) {
			answers[i].count++;
		}
		return q9(answers);
	}
	else {
		for (int i = 7; i < 9; i++) {
			answers[i].count++;
		}
		return q10(answers);
	}
}

string q9(answer* answers) {
	cout << "В городе этой команды преобладает прохладная погода ? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[5].count++;
		return answers[5].name;
	}
	else {
		answers[6].count++;
		return answers[6].name;
	}
}

string q10(answer* answers) {
	cout << "Эта команда играет в атакующий футбол ? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[7].count++;
		return answers[7].name;
	}
	else {
		answers[8].count++;
		return answers[8].name;
	}
}

string q11(answer* answers) {
	cout << "Эта команда играет в Российской Премьер Лиге? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 9; i < 11; i++) {
			answers[i].count++;
		}
		return q12(answers);
	}
	else {
		for (int i = 11; i < 13; i++) {
			answers[i].count++;
		}
		return q13(answers);
	}
}

string q12(answer* answers) {
	cout << "Эта команда из Самары?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[9].count++;
		return answers[9].name;
	}
	else {
		answers[10].count++;
		return answers[10].name;
	}
}
string q13(answer* answers) {
	cout << "Эта команда из Казани?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[11].count++;
		return answers[11].name;
	}
	else {
		answers[12].count++;
		return answers[12].name;
	}
}

string q14(answer* answers) {
	cout << "Эта команда играет в Английской премьер лиге ? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 13; i < 21; i++) {
			answers[i].count++;
		}
		return q15(answers);
	}
	else {
		for (int i = 21; i < 27; i++) {
			answers[i].count++;
		}
		return q22(answers);
	}
}

string q15(answer* answers) {
	cout << "Эту команду можно назвать 'манкунианцами'?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 13; i < 17; i++) {
			answers[i].count++;
		}
		return q16(answers);
	}
	else {
		for (int i = 17; i < 21; i++) {
			answers[i].count++;
		}
		return q19(answers);
	}
}

string q16(answer* answers) {
	cout << "Эта команда из Манчестера ? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 13; i < 15; i++) {
			answers[i].count++;
		}
		return q17(answers);
	}
	else {
		for (int i = 15; i < 17; i++) {
			answers[i].count++;
		}
		return q18(answers);
	}
}

string q17(answer* answers) {
	cout << "Манчестер - красный?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[13].count++;
		return answers[14].name;
	}
	else {
		answers[14].count++;
		return answers[14].name;
	}
}

string q18(answer* answers) {
	cout << "Эта команда выигрывала АПЛ в течение двух последних сезонов ? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[15].count++;
		return answers[15].name;
	}
	else {
		answers[16].count++;
		return answers[16].name;
	}
}

string q19(answer* answers) {
	cout << "Эта команда из Лондона? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[17].count++;
		return answers[17].name;
	}
	else {
		for (int i = 18; i < 21; i++) {
			answers[i].count++;
		}
		return q20(answers);
	}
}

string q20(answer* answers) {
	cout << "Эта команда выигрывала Лигу Чемпионов?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[18].count++;
		return answers[18].name;
	}
	else {
		for (int i = 19; i < 21; i++) {
			answers[i].count++;
		}
		return q21(answers);
	}
}

string q21(answer* answers) {
	cout << "Эту команду тренировал Арсен Венгер?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[19].count++;
		return answers[19].name;
	}
	else {
		answers[20].count++;
		return answers[20].name;
	}
}

string q22(answer* answers) {
	cout << "Эта команда из Испании ? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 21; i < 25; i++) {
			answers[i].count++;
		}
		return q23(answers);
	}
	else {
		for (int i = 25; i < 27; i++) {
			answers[i].count++;
		}
		return q26(answers);
	}
}

string q23(answer* answers) {
	cout << "Эта команда из Мадрида? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		for (int i = 21; i < 23; i++) {
			answers[i].count++;
		}
		return q24(answers);
	}
	else {
		for (int i = 23; i < 25; i++) {
			answers[i].count++;
		}
		return q25(answers);
	}
}

string q24(answer* answers) {
	cout << "Эта команда многократный чемпион ЛЧ?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[21].count++;
		return answers[21].name;
	}
	else {
		answers[22].count++;
		return answers[22].name;
	}
}

string q25(answer* answers) {
	cout << "Эта команда выигрывала Лигу Европу несколько раз подряд ? " << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[23].count++;
		return answers[23].name;
	}
	else {
		answers[24].count++;
		return answers[24].name;
	}
}

string q26(answer* answers) {
	cout << "Эта команда имеет большой бюджет, но не выигрывала ЛЧ ?" << endl;
	cout << "Ввод:";
	bool result;
	cin >> result;
	if (result == 1) {
		answers[25].count++;
		return answers[25].name;
	}
	else {
		answers[26].count++;
		return answers[26].name;
	}
}