

#include "Interfaz.h"



void Interfaz::main(Banco* banco){
    
    
    
    cout << "1. Registrar tarjeta credito al cliente" << endl;
    cout << "2. Realizar una compra" << endl;
    cout << "3. Realizar pago saldo pendiente" << endl;
    cout << "4. Consultar saldo a pagar hasta fecha corte" << endl;
    cout << "5. Consultar saldo a pagar total" << endl;
    cout << "6. Generar estado de cuenta" << endl;
    cout << "7. Consultar puntos generados por compras" << endl << endl;
    cout << "Opcion: ";
    int op;
    cin >> op;
    
    switch(op){
        case 1:{ //Registrar tarjeta credito
            system("clear");
            cout << "Que salario tiene la persona: ";
            float salario;
            cin >> salario;
            system("clear");
            cout << "Lo el maximo saldo de la tarjeta va a ser: " << salario * 0.4 << endl;
            cout << "El cliente acepta? 1 ---> Si, 2 ---> No";
            int acepta;
            cin >> acepta;
            if(acepta == 2){
                break;
            }
            if(acepta == 1){
                TarjetaCredito* tarjeta = new TarjetaCredito;
                cin >> *tarjeta;
                banco->getListaTarjetas()->agregar(tarjeta);
                
                cout << "Tarjeta Agregada" << endl;
            }
            else{
                cout << "Opcion incorrecta" << endl;
                cout << "Presione enter ";
                cin.get();
                break;
            }
            
            
          
            break;
        } //Fin case 1
        
        
        case 2:{ //Realizar compra
            system("clear");
            
            system("clear");
            cout << "Digite numero tarjeta ";
            int numero;
            cin >> numero;
            if(banco->getListaTarjetas()->busquedaTarjetaNumero(numero)){
                Compra c;
                cin >> c;
                cout << "Tipos de compra: " << endl;
                cout << "1. Contado" << endl;
                cout << "2. A pagos" << endl;
                cout << "Opcion: ";
                int opC;
                cin >> opC;
                switch(opC){
                    system("clear");
                    case 1:{
                        cout << "Monto: ";
                        float monto;
                        cin >> monto;
                        Fecha f;
                        cin >> f;
                        cout << "Descripcion: ";
                        string desc;
                        getline(cin, desc);
                        
                        Compra c;
                        c.setMonto(monto);
                        c.setFecha(f);
                        c.setDescripcionCompra(desc);
                        
                        ProcesarCompra* p; 
                        banco->getListaTarjetas()->tarjetaNumero(numero)->comprar(c, *p);
                        break;
                    }//Fin case 1
                    case 2:{
                        system("clear");
                        Compra c;
                        ProcesarCompraCuotas* p; 
                        
                        cout << "Monto: ";
                        float monto;
                        cin >> monto;
                        
                        Fecha f;
                        cin >> f;
                        
                        cout << "Descripcion: ";
                        string desc;
                        getline(cin, desc);
                        
                        cout << "Cuantos pagos: ";
                        int pagos;
                        cin >> pagos;
                        
                        p->setCuotas(pagos);
                        
                        c.setMonto(monto);
                        c.setFecha(f);
                        c.setDescripcionCompra(desc);
                        
                        
                        banco->getListaTarjetas()->tarjetaNumero(numero)->comprar(c, *p);

                        break;
                        
                    }//Fin case 2
                    default:{
                        cout << "Opcion Invalida" << endl;
                        break;
                    }//Fin default
                
                    
                }//Fin Switch
            }
            else{
                cout << "Tarjeta no registrada en el sistema" << endl;
                cout << "Presione enter" << endl;
                cin.get();
            }
            
            break;
        }//Fin case 2
        
        
        case 3:{ //Realizar pago saldo pendiente
            system("clear");
            cout << "Digite numero tarjeta ";
            int numero;
            cin >> numero;
            
            
            
            if(banco->getListaTarjetas()->busquedaTarjetaNumero(numero)){
                
                cout << "1. Pagar total saldo" << endl;
                cout << "2. Pago minimo" << endl;
                cout << "Opcion: ";
                int t;
                switch(t){
                    case 1:{
                        ProcesarPago* p = new ProcesarPago;
                        Tarjeta* tarjeta = banco->getListaTarjetas()->tarjetaNumero(numero);
                        cout << "Fecha hoy: " << endl;
                        Fecha f;
                        cin >> f;
                        
                        float saldo = tarjeta->getLimiteSaldo() - tarjeta->getSaldo();
                        tarjeta->pagar(saldo, "Pago total pendiente", &f, *p);
                        break;
                    }
                    case 2:{
                        break;
                    }
                    default:{
                        cout << "Opcion no valida" << endl;
                        cout << "Presione enter";
                        cin.get(); 
                    }
                }
                    
            }
            else{
                cout << "Tarjeta no registrada en el sistema" << endl;
                cout << "Presione enter" << endl;
                cin.get();                
            }
            
            break;
        }//Fin case 3
        
        
        
        case 4:{ //Monto a pagar hasta la fecha
            system("clear");
            
            cout << "Digite su numero tarjeta ";
            int numero;
            cin >> numero;
            
            if(banco->getListaTarjetas()->busquedaTarjetaNumero(numero)){
                
                cout << "Saldo a la fecha de corte: " << banco->getListaTarjetas()->tarjetaNumero(numero)->obtenerSaldoFechaCorte() << endl;
            }
            else{
                system("clear");
                cout << "Tarjeta no registrada en el sistema" << endl;
                cout << "Presione enter" << endl;
                cin.get();
            }
            break;
            
            
        }//Fin case 4
        
        
        
        case 5:{ //Monto total a pagar
            system("clear");
            
            cout << "Digite su numero tarjeta ";
            int numero;
            cin >> numero;
            
            if(banco->getListaTarjetas()->busquedaTarjetaNumero(numero)){
                
                cout << "Saldo a la fecha de corte: " << banco->getListaTarjetas()->tarjetaNumero(numero)->obtenerSaldoTotal() << endl;
            }
            else{
                system("clear");
                cout << "Tarjeta no registrada en el sistema" << endl;
                cout << "Presione enter" << endl;
                cin.get();
            }            
            
            
            
            break;
        }//Fin case 5
        case 6:{ //Generar estado cuenta
            system("clear");
            cout << "Digite su numero tarjeta ";
            int numero;
            cin >> numero;
            if(banco->getListaTarjetas()->busquedaTarjetaNumero(numero)){
                cout << "Estado de cuenta: " << endl << endl;
                cout << "Compras: " << endl;
                cout << banco->getListaTarjetas()->tarjetaNumero(numero)->getPagos()->toStringIterador();
                cout << endl << endl;
                cout << banco->getListaTarjetas()->tarjetaNumero(numero)->getCompras()->toStringIterador();
                cout << endl << endl;
                cout << banco->getListaTarjetas()->tarjetaNumero(numero)->getPagos()->toStringIterador();
                cout << "FIN" << endl;
                cout << "-------------------------------------------------------" << endl;
            }
            else{
                system("clear");
                cout << "Tarjeta no registrada en el sistema" << endl;
                cout << "Presione enter" << endl;
                cin.get();
            }
            
            break;
        }//Fin case 6
        case 7:{ //Consultar puntos
            system("clear");
            cout << "Digite numero tarjeta ";
            int numero;
            cin >> numero;
            if(banco->getListaTarjetas()->busquedaTarjetaNumero(numero)){
                cout << "Puntos: " << banco->getListaTarjetas()->tarjetaNumero(numero)->getPuntos();
            }

            break;
        
        }//Fin case 7
        default:{
            cout << "Opcion invalida" << endl;
            break;
        }
    }
    
}

string Interfaz::encabezado(){
    stringstream s;
    s << "                   ********************************************" << endl;
    s << "                   *             SISTEMA BANCARIO              *" << endl;
    s << "                   *                                           *" <<endl;
    s << "                   *         Jose David Flores Rodriguez       *" << endl;
    s << "                   *         Giancarlo Chaves Matarrita        *" << endl;
    s << "                   *********************************************" << endl;
    return s.str();
}

