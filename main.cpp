//kaomoji_generator
#include <iostream>
std::string a1s[] = {"","\\","ฅ","ଲ","o","っ","ლ","⊂",".｡","╰","～","╭","∩","⊂","ﾉ","｡","☆*:.｡.","＼＼","▓▒░"};
std::string a2s[] = {"","//","ฅ","ଲ","o","っ","ლ","⊃",".｡","╯","～","╮","∩","⊂","ﾉ","｡",".｡.:*☆","／／","░▒▓"};
std::string b1s[] = {"","(","["};
std::string b2s[] = {"",")","]"};
std::string e1s[] = {"˘","◕","ㅇ", "•", "ⓛ", "ↀ", "≚", "·͈", "Ｔ", "Φ", "●", "ｘ", "^", "･", "⁰", "≧", "ಠ", ">", "╥", "＞", "◡", "⁄ ⁄•⁄", "─", "μ", "Ò", "☆", "<｡", "ᗒ", "⇀", "⌣̀", "♡", "❤", "✯", "★", "•́", "~", "◉", "U", "o", "u", "◑", "✪", "◎", "✬", "・", "✾", "❂", "ට", "✿", "⊙", "○", "❛", "മ", "✧", "０", "ㅎ", "σ", "❆", "◎", "ʘ", " ̵˃", "＊", "◐", "꒪", "ↂ", "o̴̶̷", "இ", "〠", "Ծ", "눈", "･ั", "ŏ","＾"};
std::string e2s[] = {"˘","◕","ㅇ", "•", "ⓛ", "ↀ", "≚", "·͈", "Ｔ", "Φ", "●", "ｘ", "^", "･", "⁰", "≦", "ಠ", "<", "╥", "＜", "◡", "⁄•⁄ ⁄", "─", "μ", "Ò", "☆", "｡>", "ᗕ", "↼", "⌣́", "♡", "❤", "✯", "★", "•̀", "~", "◉", "U", "o", "u", "◑", "✪", "◎", "✬", "・", "✾", "❂", "ට", "✿", "⊙", "○", "❛", "മ", "✧", "０", "ㅎ", "σ", "❆", "◎", "ʘ", "˂̵ ", "＊", "◐", "꒪", "ↂ", "o̴̶̷", "இ", "〠", "Ծ", "눈", "･ั", "ŏ","＾"};
std::string c1s[] = {"", "#", "*", "=", "⁃̠́̂", "^", "ᵔ", "❀", "ʕ", "･ﾟﾟ･", "V","o"};
std::string c2s[] = {"", "#", "*", "=", "⁃̠́̂", "^", "ᵔ", "❀", "ʔ", "･ﾟﾟ･", "V","o"};
std::string n1s [] = {"ω", "人", "‥", "ェ", "⁃̠́̂", "⁃̠́̂", "∇", "⋏", "ᴥ", "⍛", "ᆺ", "з", "ﻌ", "༝", "﹏", "‿‿", "︹", "ᗣ", "﹌", "∀", "ヮ", "Θ", "W", "w", "⌢", "ڡ", "益", "x", "㉨", "ȏ", "◊", "凸", "ܫ", "ᗩ", "ᆺ", "‿","◡","▽",">"};
std::string o1s [] = {"","","",""};
int main(int argc, char** argv) {
       if (!argv[1]) {
            std::cout << "No command line arguments were given please use --help for a list of useable commands\n";
               return 0; 
       }
              if (std::string (argv[1]) == "--help") {
            std::cout << "availble commands:\n--symmetric returns a symmetrical emoji\n--symmetric_length returns the length of possible symmetrical emojis\n--nonsymmetric returns a non symmetrical emoji\n--nonsymmetric_length returns the length of possible nonsymmetrical emojis\n";
               return 0; 
       }
thread_local unsigned int seed = time(NULL);
int ras = rand_r(&seed)%(*(&a1s + 1) - a1s);
int rbs = rand_r(&seed)%(*(&b1s + 1) - b1s);
int rls = rand_r(&seed)%(*(&e1s + 1) - e1s);
int rcs = rand_r(&seed)%(*(&c1s + 1) - c1s);
int rns = rand_r(&seed)%(*(&n1s + 1) - n1s);
   if (std::string (argv[1]) == "--symmetric") {
            std::cout << a1s[ras] << b1s[rbs] << c1s[rcs] << e1s[rls] << n1s[rns] << e2s[rls] << c2s[rcs] << b2s[rbs] << a2s[ras] << '\n';
               return 0; 
       }

        if (std::string (argv[1]) == "--symmetric_length") {
            std::cout << (*(&a1s + 1) - a1s)*(*(&b1s + 1) - b1s)*(*(&e1s + 1) - e1s)*(*(&c1s + 1) - c1s)*(*(&n1s + 1) - n1s) << "\n";
               return 0; 
       }
 if (std::string (argv[1]) == "--nonsymmetric") {
            std::cout << a1s[rand()%(*(&a1s + 1) - a1s)] << b1s[rand()%(*(&b1s + 1) - b1s)] << c1s[rand()%(*(&c1s + 1) - c1s)] << e1s[rand()%(*(&e1s + 1) - e1s)] << n1s[rand()%(*(&n1s + 1) - n1s)] << e2s[rand()%(*(&e2s + 1) - e2s)] << c2s[rand()%(*(&c2s + 1) - c2s)] << b2s[rand()%(*(&b2s + 1) - b2s)] << a2s[rand()%(*(&a2s + 1) - a2s)] << '\n';
               return 0; 
       }
        if (std::string (argv[1]) == "--nonsymmetric_length") {
            std::cout << (*(&a1s + 1) - a1s)*(*(&b1s + 1) - b1s)*(*(&e1s + 1) - e1s)*(*(&c1s + 1) - c1s)*(*(&n1s + 1) - n1s)*(*(&e2s + 1) - e2s)*(*(&c2s + 1) - c2s)*(*(&b2s + 1) - b2s)*(*(&a2s + 1) - a2s) << "\n";
               return 0; 
       }
            std::cout << "command: " << argv[1] << " not found\n";
}

