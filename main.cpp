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



int main() {
		
		say("\tПривет, как ты здесь оказался?", 50ms, 2s);
		say("\tПОЧЕМУ.ТЫ.МОЛЧИШЬ.ИДИОТ", 100ms, 2s);
		say("\tИзвини, погорячился, ну так как тебя зовут? Имя: ", 20ms, 2s);
		
		std::cin >> name;
		
		if (name == "Lupaza") {
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
		
		say("\tКонец. Спасибо за игру.", 50ms, 1s);		
		
		//а продолжения не будет
		
		return 0;
}
