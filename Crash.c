main()
{
      int i,j,c=0,k=0;
      int distance=0;
      int finalDist=0;
      char movement;
      char moveCopy;
      int track[23][7];
      int el[]={0,1,1,1,2,3,3};
      int er[]={0,1,1,1,2,3,3};
      //int ran[48]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
      int ran[48]={0,0,0,0,0,1,1,0,1,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0};
      printf("\n\n\n\n\n");
      for(i=0;i<23;i++)
      {
                       printf("\t\t\t\t   ");
                       for(j=0;j<1;j++)
                       {
                                       if((i%2)==0)
                                       printf("%c.  ",(char)2);
                                       else
                                       printf("%c.  ",(char)1);
                       }
                       for(j=0;j<7;j++)
                       {
                                       track[i][j]=0;
                                       printf("%c",(char)track[i][j]);
                       }
                       for(j=0;j<1;j++)
                       {
                                       if((i%2)==0)
                                       printf("  .%c",(char)2);
                                       else
                                       printf("  .%c",(char)1);
                       }
                   
                       printf("\n");
      }
      printf("\n\n\n\n\n");
      for(i=0;i<23;i++)
      {
                       printf("\t\t\t\t   ");
                       for(j=0;j<1;j++)
                       {
                                       if((i%2)==0)
                                       printf("%c.  ",(char)2);
                                       else
                                       printf("%c.  ",(char)1);
                       }
                       for(j=0;j<7;j++)
                       {
                                       printf("%c",(char)track[i][j]);
                       }
                       for(j=0;j<1;j++)
                       {
                                       if((i%2)==0)
                                       printf("  .%c",(char)2);
                                       else
                                       printf("  .%c",(char)1);
                       }
                       printf("\n");
      }
      movement=77;
      while(!kbhit() || kbhit())
      {
              ++finalDist;
              if(finalDist==10000)
              winPage();
              if(kbhit())
              {
                         movement=getch();
                         moveCopy=movement;
              }
              system("cls");
              printf("\n\n\n\n\n");
              if(movement==75)
              {
                              
                               track[22][0]=9977;
                               track[22][2]='.';
                               track[21][1]='.';
                               track[20][0]='.';
                               track[20][1]='.';
                               track[20][2]='.';
                               track[19][1]='.';
                               
                               track[22][4]=0;
                               track[22][6]=0;
                               track[21][5]=0;
                               track[20][4]=0;
                               track[20][5]=0;
                               track[20][6]=0;
                               track[19][5]=0;
              }
              else if(movement==77)
              {
                   
                               track[22][4]='.';
                               track[22][6]='.';
                               track[21][5]='.';
                               track[20][4]='.';
                               track[20][5]='.';
                               track[20][6]='.';
                               track[19][5]='.';
                                    
                               track[22][0]=0;
                               track[22][2]=0;
                               track[21][1]=0;
                               track[20][0]=0;
                               track[20][1]=0;
                               track[20][2]=0;
                               track[19][1]=0;
              }
              else if(movement==97)
              winPage();
              else
              movement=moveCopy;
              if(ran[k]==1)
              {
                            track[el[0]][1]='.';
                            track[el[1]][0]='.';
                            track[el[2]][1]='.';
                            track[el[3]][2]='.';
                            track[el[4]][1]='.';
                            track[el[5]][0]='.';
                            track[el[6]][2]='.';
              }
              if(ran[k]==0)
              {
                            track[er[0]][5]='.';
                            track[er[1]][6]='.';
                            track[er[2]][5]='.';
                            track[er[3]][4]='.';
                            track[er[4]][5]='.';
                            track[er[5]][6]='.';
                            track[er[6]][4]='.';
              }
              printf("\n\n\n\n\n");
              for(i=0;i<23;i++)
              {
                               printf("\t\t\t\t   ");
                               for(j=0;j<1;j++)
                               {
                                               if((i%2)==0)
                                               printf("%c.  ",(char)2);
                                               else
                                               printf("%c.  ",(char)1);
                               }
                               for(j=0;j<7;j++)
                               {
                                               printf("%c",(char)track[i][j]);
                               }
                               for(j=0;j<1;j++)
                               {
                                               if((i%2)==0)
                                               printf("  .%c",(char)2);
                                               else
                                               printf("  .%c",(char)1);
                               }
                               printf("\n");
              }
              printf("\n\n\n\n\t\t\t\t Travelled: %d miles",finalDist);
              if(ran[k]==1)
              {
                           el[0]++;         track[el[0]-1][1]=0;
                           el[1]++;         track[el[1]-1][0]=0;
                           el[2]++;         track[el[2]-1][1]=0;
                           el[3]++;         track[el[3]-1][2]=0;
                           el[4]++;         track[el[4]-1][1]=0;
                           el[5]++;         track[el[5]-1][0]=0;
                           el[6]++;         track[el[6]-1][2]=0;
                           c++;
                           if((c>17 && movement==75)||(c>17 && movement==0))
                           crashPage(finalDist);
                           if(c==21)
                           {
                                    el[0]=0;
                                    el[1]=1;
                                    el[2]=1;
                                    el[3]=1;
                                    el[4]=2;
                                    el[5]=3;
                                    el[6]=3;
                                    c=0;
                                    ++k;
                                 
                           }
              }
              if(ran[k]==0)
              {
                  er[0]++;         track[er[0]-1][5]=0;
                  er[1]++;         track[er[1]-1][6]=0;
                  er[2]++;         track[er[2]-1][5]=0;
                  er[3]++;         track[er[3]-1][4]=0;
                  er[4]++;         track[er[4]-1][5]=0;
                  er[5]++;         track[er[5]-1][6]=0;
                  er[6]++;         track[er[6]-1][4]=0;
                  c++;
                  if(c>17 && movement==77)
                  crashPage(finalDist);
                  if(c==21)
                  {
                           er[0]=0;
                           er[1]=1;
                           er[2]=1;
                           er[3]=1;
                           er[4]=2;
                           er[5]=3;
                           er[6]=3;
                           c=0;
                           ++k;
                           
                  }
              }
              
              if(k==46)
              {
                       
                       k=0;
              }
      }
      getch();
}
crashPage(distance)
{
system("cls");           
printf("\n\n\n\n");           
printf("             ,:;'. \n");                                                        
printf(" .xOxo;            \n");                                             
printf(" .xOxo;              \n");                                          
printf(" .xOxo;                \n");                                       
printf(" .xOxo;                  \n");                                    
printf(" .xOxo;                    \n");                                 
printf(" .xOxo;                      \n");                              
printf(" .xOxo;                        \n");                           
printf(" .xOxo;                          \n");                        
printf(" .xOxo;                                    \n");                     
printf(" .xOxo;      .c:             ..,;:clllllllllc:,..          \n");     
printf(" .xOxo;    .cold,        .:ldkkxdollloOK0xodxkOOkxoc'.        \n");  
printf(" .xOxo;   .l;..oo.    .:k00kdlccccccclk00xolloodk0Okkkd;.       \n");
printf(" .xOxo;   ..  .:d:..,oO0kO0kxxxxxxkkkkO000OkkOkkkOOOxxxkkl'     \n");
printf(" .xOxo;    ;;,dxxxxkkOxxdxxolllccccccllldoc:ccccclllooodxocc.   \n");
printf(" .xOxo:'ododxddoccccll'',,,''',,'',;:ldoldcccllllcllloooddddo   \n");
printf(" .xOxoooxdolllcc:;,oxdllodddddxxxxxxxxkxkkxxxxxxdlloddddddkOk,  \n");
printf(" .xOxodxddxkkOOOkxdxkkxxxxxxxxxxxxxxxxxxkkkxxxxxkkO0000Okxxxkl  \n");
printf(" .xOxookkO0klcccokOkkkkxxxxxxdddddxxxxxxkkxxxxxkO0kollok0Okxxc  \n");
printf(" .xOxolOO0x::dxl:cO0kxlcc::::::::cllloodkddxxxxO0d:cddc:d0Okd.  \n");
printf(" .xOxo:'lOxc:odl:l00OOOkkkkkkkkkkkkkkkOOOkkkkkkO0o:cxxc:dOo'    \n");
printf(" .xOxo;  ;kkollldOd'........,,,,,,,,,,,,,,,,,,,;dOdlccldOl      \n");
printf("  ....    .,looo:.                               'cdddoc.       \n");
printf("                                                                \n");
printf("   ....    ........                                ......       \n");
printf("   ....   ..........                              ...           \n\n\n");
printf("\t\t            YOU HAVE CRASHED\n");
printf("\t\t      DISTANCE TRAVELLED: %d miles\n\n\n\n\n\n\n\n\n",distance);
printf("\t\t       PRESS ANY KEY TO CONTINUE.");
      char ent;
      ent=getche();
      if(ent>0)
      {
             system("cls");
      }  
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\n");
      printf("\t\t              THANK YOU FOR PLAYING\n\n");
      printf("\n\t\t         %c%c%c%c%c %c%c%c%c %c %c%c%c %c%c%c%c %c%c%c%c %c%c%c%c",(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1);
      printf("\n\n\t\t            .Aroon Mathai Production.\n\n\n\n");
      printf("\n\n\t\t            Restart: Press SPACE BAR.");
      ent=getch();
      system("cls");
      if(ent==32)
      {
                 main();
      }
      else
      {
                 getch();
      }

getch();
exit(0);
}
winPage()
{
system("cls");
printf("\n\n\n");         
printf("\n\t           ........                               .......");           
printf("\n\t             ........                          ......'. ");          
printf("\n\t             .... .............................''.  .,.    ");       
printf("\n\t              .'.   .......................'',,.    ',.       ");    
printf("\n\t              .''.   .''''',,,,,,,,,,,,,,,,,;;,.   .,,           "); 
printf("\n\t               ',.    ',,,,,,,,,,;;;;;;;;;;;;;'    ,;.            ");
printf("\n\t               .,,.   .,;;;;;;;;;;;;;;:::::::;.   ':'             ");
printf("\n\t                .;,.   ,;:::::::::::::::::ccc,   .c;              ");
printf("\n\t                 ';,.  .;:::::::::ccccclllllc.  .:;               ");
printf("\n\t                  ':,.  ,ccccccccclloooooool,  ,c;                ");
printf("\n\t                   '::. .:llclllooooooooooo:..:l;                 ");
printf("\n\t                    .:c;.,clooodddooooooool,,ll'                  ");
printf("\n\t                     .;lccldddddddddddddddoooc.                   ");
printf("\n\t                       'lddddddddddddddddddo;.                    ");
printf("\n\t                        .:dxxxxxxxxxxxxxxdc.                      ");
printf("\n\t                          .cxxxxxxxxxxxxo'                        ");
printf("\n\t                            'oxkxxxxxkd;                          ");
printf("\n\t                             .cxkkkkko.                           ");
printf("\n\t                               lkkkkx.                            ");
printf("\n\t                               ,kOOOl                             ");
printf("\n\t                               ,kkkko.                            ");
printf("\n\t                             .;dkkkkxc.                           ");
printf("\n\t                         .clcloxkOOkxdoll:.                       ");
printf("\n\t                       :dxkxkkOO0000OOkkxkkkl.                    ");
printf("\n\t                      .oO000000000000000000Od.                    ");
printf("\n\t                        ..,;::ccllloollc:;'.");
printf("\n\n\n\t                 YOU HAVE REACHED YOUR DESTINATION");
printf("\n\t                            YOU WIN !!!");
printf("\n\n\n\t                 DISTANCE TRAVELLED: 10,000 MILES.");
printf("\n\n\n\n\n\n\n\n\t                    PRESS ANY KEY TO CONTINUE.");
      char ent;
      ent=getche();
      if(ent>0)
      {
             system("cls");
      }  
      printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
      printf("\n");
      printf("\t\t              THANK YOU FOR PLAYING\n\n");
      printf("\n\t\t         %c%c%c%c%c %c%c%c%c %c %c%c%c %c%c%c%c %c%c%c%c %c%c%c%c",(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1,(char)2,(char)1);
      printf("\n\n\t\t            .Aroon Mathai Production.\n\n\n\n");
      printf("\n\n\t\t            Restart: Press SPACE BAR.");
      ent=getch();
      system("cls");
      if(ent==32)
      {
                 main();
      }
      else
      {
                 getch();
      }
getch();
}

