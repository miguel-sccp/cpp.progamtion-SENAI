    #include <iostream>
    using namespace std;
    int main()
    {
    int produtos;
    int modelo;
    int preco;
    int pagamento;
    int parcelas;
    cout<<"ola aeja bem vindo a nossa loj"<<endl;
    cout<<"digite o id para onde vc quer ir:"<<endl;
    cout<<"1(televisores),2(celulares), 3 (notebook)"<< endl;
    cin>>produtos;
    switch(produtos) {
    case 1:
    cout << "Voce escolheu Televisores." << endl;
    cout << "Digite o ID para ver os modelos:" << endl;
    cout << "1(SAMSUNG '40 R$3000), 2(SAMSUNG '50 R$4000), 3(SAMSUNG '60 R$5000)" << endl;
    cin >> modelo;
    switch(modelo) { // AQUI começa o switch aninhado para os modelos
    case 1:
    cout << "Voce escolheu SAMSUNG 40 polegadas R$3000" << endl;
    preco = 3000;
    break;
    case 2:
    cout << "Voce escolheu SAMSUNG 50 polegadas R$4000" << endl;
    preco = 4000;
    break;
    case 3:
    cout << "Voce escolheu SAMSUNG 60 polegadas R$5000" << endl;
    preco = 5000;
    break;
    default:
    cout << "Nao tem essa tv idiota" << endl;
    break;}
    break;
    case 2:
    cout<<"vc escolheu celulares"<<endl;
    cout<<"digite o id para ver od modelos"<<endl;
    cout<<"1(iphone 5000),2(galaxy 3500),Nokia(250)"<<endl;
    cin>>modelo;
    switch (modelo) {
    case 1:
    cout << "Você escolheu o iPhone 5000." << endl;
    preco=5000;
    break;
    case 2:
    cout << "Você escolheu o Galaxy 3500." << endl;
    preco=35000;
    break;
    case 3:
    cout << "Você escolheu o Nokia 250." << endl;
    preco=250;
    break;
    default:
    cout<<"nao tem esse modelo imbecil"<<endl;
    break;}
    break;
    case 3:
    cout<<"vc escolheu notebook"<<endl;
    cout<<"digite o id para ver os modelos"<<endl;
    cout<<"1(razer R$5000),2(GigaByte 5500),3(dell R$2500)"<<endl;
    cin>>(modelo);
    switch (modelo) {
    case 1:
    cout << "Você escolheu o razer R$5000." << endl;
    preco=5000;
    break;
    case 2:
    cout << "Você escolheu oGigaByte 5500." << endl;
    preco=5500;
    break;
    case 3:
    cout << "Você escolheu o dell R$2500." << endl;
    preco=2500;
    break;
    default:
    cout<<"nao tem esse modelo burro"<<endl;
    break;}
    break;}
    cout<<"escolha a fomrma de pagamento"<<endl;
    cout<<"digite o id para ver as opcao de pagamento"<<endl;
    cout<<" A vista (desconto de 10%), 2 parcelado ate 3 vezes sem juros, parcelado mais de 3 veses juros de 8%"<<endl;
    cin>>(pagamento);
    switch(pagamento){
    case 1:
    cout<<"vc escolheu pagamento a vista"<<endl;
    preco=(preco*0.10)-preco;
    cout<<preco;
    break;
    case 2:
    cout << "Voce escolheu parcelar ate 3 vezes" << endl;
    cout << "Quantas parcelas? ";
    cin >> parcelas;
    if (parcelas >= 1 && parcelas <= 3) {
    cout << "Valor de cada parcela " << preco / parcelas << endl;
    } else {
    cout << "Numero de parcelas invalido imbecil." << endl;}
    break;
    case 3:
    cout<<"vc escolheu parcelar mais de 3 vezes"<<endl;
    cout<<"quantas parcelas?";
    cin >>parcelas;
    if( parcelas > 3){
    preco = preco + (preco * 0.08);
    cout << "Valor de cada parcela " << preco / parcelas << endl;
    }else {cout << "Numero de parcelas invalido para essa opcao." << endl;}}











    }
