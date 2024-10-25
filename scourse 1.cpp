#include <iostream>
#include <vector>
using namespace std;


int main(){

    vector<string>nama,npm,tanggallahir;
    string n,np,tl;
    int pil,h;
    char t;
    bool tes;
    do{

        cout<<"===menu data mahasiswa===\n";
        cout<<"1.input data mahasiswa\n";
        cout<<"2.lihat data mahasiswa\n";
        cout<<"3. hapus data mahsiswa\n";
        cout<<"4.exit\n";
        cout<<"masukan nomor pilihan (1-4) : "; cin>>pil;
        system("cls");
        switch (pil){

        case 1:
        cin.ignore();
        cout<<"masukan nama mahasiswa  : "; getline(cin,n);
        nama.push_back(n);
        cout<<"masukan npm mhasiswa : "; cin>>np;
        cin.ignore();
        npm.push_back(np);
        cout<<"masukan tanggal lahir :"; getline (cin,tl);
        tanggallahir.push_back(tl);
        cout<<"kemnbali ke menu utama?(y/n)  : "; cin>>t;
        cin.ignore();
        if (t == 'y'|| t == 'y' ){
            tes =true;

        }else if (t == 'n' || t == 'N'){
            tes = false;
        }
        system("cls");
        break;

        case 2:
        for (int i = 0; i<nama.size(); i++){
            cout<<"data mahasiswa ke -"<<i+1<<endl;
            cout<<"nama                : "<<nama[i]<<endl;
            cout<<"npm                 : "<<npm[i]<<endl;
            cout<<"tangggal lahir      : "<<tanggallahir[i]<<endl;
            cout<<endl;

        }
            cout<<"\nkembali ke menu utama?(y/n)  : "; cin>>t;
            if (t == 'y' || t == 'y'){
                tes =true;

            }else  if (t == 'n' || t == 'N'){
                tes= false;
            }
            system("cls");
            break;

        case 3:
        for (int i= 0; i<nama.size();  i++){
            cout<<"data mahasiswa ke -"<<i+1<<endl;
            cout<<"nama             :"<<nama[i]<<endl;
            cout<<"npm              :"<<npm[i]<<endl;
            cout<<"tangal lahir     :"<<tanggallahir[i]<<endl;
            cout<<endl;
        }

        cout<<"\nData mahasiswa ke berapa yang ingin  di hapus?(masukan angka) : "; cin>>h;
         nama.erase(nama.begin()+h-1);
         npm.erase(npm.begin()+h-1);
         tanggallahir.erase(tanggallahir.begin()+h-1);

         cout<<"\n data mahasiswa ke-"<<h<<"telah dihapus"<<endl;
         cout<<"\n kembali ke menu utama?(y/n)  : "; cin>>t;
         if (t =='y' ||t == 'y'){
            tes= true;

         }else if (t == 'n' || t == 'N'){
            tes=false;
         }
        system("cls");
        break;
        case 4:
        tes= ("cls");
        break;
        default:
        cout<<"\n pilihan yang aada pilih tidak tersedia, kembali ke menu utama?(y/n) :"; cin>>t;
        if (t == 'y' || t == 'Y')
        {
            tes=true;
        }else if (t == 'n' || t == 'N'){
            tes=false;
        }
        system("cls");
        break;
    }
    }while(tes == true);
    cout<<"program selesai";
    }


