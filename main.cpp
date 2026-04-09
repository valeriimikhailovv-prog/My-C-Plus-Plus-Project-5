#include  <iostream>
#include  <string>
#include  <thread>
#include <chrono>

using std::endl;
using std::cout;
using std::string;
using std::flush;
using namespace std::chrono_literals;

	
void say(string text,  std::chrono::milliseconds CharDelay, std::chrono::seconds EndDelay) {
		for (char c : text) {
			cout << c << flush;
				std::this_thread::sleep_for(CharDelay);
		}
		cout << endl;
		std::this_thread::sleep_for(EndDelay);
}


std::string name = " ";
int tunec = 0;
int trust = 5;
std::string text  = " ";


int main() {
		
		say("\tПривет, как ты здесь оказался?", 50ms, 2s);
		say("\tПОЧЕМУ.ТЫ.МОЛЧИШЬ.ИДИОТ", 100ms, 2s);
		say("\tИзвини, погорячился, ну так как тебя зовут? Имя: ", 20ms, 2s);
		
		std::cin >> name;
		
		if (name == "lulaza") {
			say("\tИДИОТ.ИДИОТ.ИДИОТ.", 150ms, 2s);
			return 0;
		}
		
		else if (" ") {
		say("\tПриятно познакомиться,  " + name, 50ms, 1s);
		}
		
		say("\tКак ты здесь оказался? Я помогу тебе", 50ms, 2s);
		say("\tСтой, сколько у тебя с собой банок тунца?", 80ms, 2s);
		
		std::cin >> tunec;
		
		if (tunec <= 3) {
			say("\tСЕРЬЁЗНО?ТЫ ЖАЛОК", 150ms, 1s);
			return 0;
		}
		
		
		if (tunec >=15) {
			say("\tТЫ ВРЁШЬ", 150ms, 1s);
			return 0;
		}
		
			
		else if (tunec >=4) {
			say("\tпонятно, ну так как ты здесь очутился?", 80ms, 2s);
		}
		
		std::cin >> text;	
		
		say("\tХотя мне всё равно...", 60ms, 2s);
		say("\tТы же хочешь выбраться отсюда?", 60ms, 2s);
	
	//+Сюжет
		while (true) {		
		std::cin >> text;
		
		if (text == "да") {
			say("\tЯсно.", 50ms, 2s);
			trust += 1;
			break;
		}
		
		else if (text == "нет") {
			say("\tПравда?..", 50ms, 2s);
			trust -=5;
			break;
		}
			
			else {
				say("\tТы мне не доверяешь?", 100ms, 2s);
				trust -=999;
				say("\tДА ИЛИ НЕТ?", 500ms, 2s);
			}
		}
			say("\tНа самом деле я убиваю таких как ты", 150ms, 2s);
			say("\tЗнаешь почему?", 150ms, 2s);
			say("\tПОТОМУ ЧТО ЭТО ВЕСЕЛО", 300ms, 2s);
			say("\tХАХАХАХАХАХАХАХАХАХА", 300ms, 2s);
			
			
			//Концовка
			if (trust >=5) {
				say("\tЭто просто шутка, не парься", 200ms, 2s);
			}
			
		    if (trust <=4) {
				say("\tВ ЭТОМ МИРЕ ТЫ ЛИБО ТУНЕЦ, ЛИБО ТОТ, КТО ЕГО ЕСТ", 300ms, 2s);
				say("\tИ..ТЫ..ЯВНО..НЕ..ХИЩНИК", 200ms, 2s);
				say("\tПРОЩАЙ, МУСОР", 200ms, 2s);
				return 0;
			}
			
		
		
		return 0;
}
