#include "MyForm.h"
#include <Windows.h>


using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace cli;
using namespace СourseWork;

[STAThreadAttribute]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //System::Text::Encoding::GetEncoding(1251);
    // ProjectName - name of your project
    // NameForm - name of the form to run
    СourseWork::MyForm form;
    Application::Run(% form);
}
char charactersEN[] = {
'A', 'B', 'C', 'D',
'E', 'F', 'G', 'H',
'I', 'J', 'K', 'L',
'M', 'N', 'O', 'P',
'Q', 'R', 'S', 'T',
'U', 'V', 'W', 'X', 
'Y', 'Z',


    '1',
'2', '3', '4',
'5', '6', '7',
'8', '9', '0'
};

string codeMorseEN[] = {
".-", "-...", "-.-.", "-..",
".", "..-.","--.","....",
"..",".---","-.-",".-..",
"--","-.","---",".--.",
"--.-",".-.","...","-",
"..-","...-",".--","-..-",
"-.--","--..",


    ".----",
"..---", "...--", "....-",
".....", "-....", "--...",
"---..", "----.", "-----"
};

char charactersRU[] = 
{'А', 'Б', 'В', 'Г', 
'Д', 'Е', 'Ж', 'З', 
'И', 'Й', 'К', 'Л', 
'М', 'Н', 'О', 'П', 
'Р', 'С', 'Т', 'У', 
'Ф', 'Х', 'Ц', 
'Ч', 'Ш', 'Щ', 
'Ы', 'Ь', 'Э', 
'Ю', 'Я', '1', 
'2', '3', '4', 
'5', '6', '7',
'8', '9', '0' };

string codeMorseRU[] = 
{".-", "-...", ".--", "--.",
"-..", ".", "...-", "--..",
"..", ".---", "-.-", ".-..",
"--", "-.", "---", ".--.",
".-.", "...", "-", "..-",
"..-.", "...", "-.-.",
"---.", "----", "--.-",
"-.--", "-..-", "..-..",
"..--", ".-.-", ".----",
"..---", "...--", "....-",
".....", "-....", "--...",
"---..", "----.", "-----" };



Void СourseWork::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm::textBox2->Text = "";

}

Void СourseWork::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {

	MyForm::textBox1->Text = "";

}

Void СourseWork::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    
    String^ tmp1 = MyForm::textBox1->Text;
    string tmp2 =  "";

    
        tmp1 = tmp1->ToUpper();
    

    for (int i = 0; i < tmp1->Length; i++)
    {
        for (int j = 0; j < 36; j++)
        {
            /*if (tmp1[i] == ' ')
            {
                tmp2 += "\n";
                
                break;
            }*/
            if (tmp1[i] == charactersEN[j]) {
                tmp2 += codeMorseEN[j] + " ";
                break;
            }
        }
    }
    String^ tmp3 = gcnew String(tmp2.data());
    MyForm::textBox2->Text = tmp3;
}

Void СourseWork::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {

    string tmp = msclr::interop::marshal_as<std::string>(MyForm::textBox2->Text);
    string tmp2 = "";
    int j = 0;
    int i = 0;
    string tmp1 = "";
    while(i < tmp.size())
    {
        
        tmp1 = "";
        if (tmp[i] != ' ')
        {
            while (tmp[i] != ' ') {
                tmp1 += tmp[i];
                i++;
            }
            for (int k = 0; k < 41; k++)
            {
                if (tmp1 == codeMorseEN[k]) {
                    //string t(1, charactersEN[k]);
                    char c = charactersEN[k];
                    tmp2 += c;
                    break;
                }
            }
            

        }
        else if (tmp[i] == ' ')
        {
            i++;
        }

        j++;
    }

    String^ tmp3 = gcnew String(tmp2.data());
    MyForm::textBox1->Text = tmp3;

}


