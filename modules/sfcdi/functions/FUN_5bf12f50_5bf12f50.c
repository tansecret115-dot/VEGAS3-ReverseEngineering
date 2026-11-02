/* Module: sfcdi.dll
   Function: FUN_5bf12f50
   Address: 5bf12f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf12f50(char *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int local_7b4;
  CHAR local_7b0 [39];
  undefined1 local_789;
  CHAR local_788 [512];
  int local_588 [64];
  undefined1 local_485;
  CHAR local_484 [39];
  undefined1 local_45d;
  CHAR local_45c [259];
  undefined1 local_359;
  CHAR local_358 [39];
  undefined1 local_331;
  CHAR local_330 [39];
  undefined1 local_309;
  CHAR local_308 [259];
  undefined1 local_205;
  int local_204;
  char local_200 [512];
  
  pcVar2 = FUN_5bf11ae0(local_200,param_1,0x200,&local_7b4);
  cVar1 = *pcVar2;
  while( true ) {
    if ((cVar1 == '\0') ||
       (pcVar2 = FUN_5bf11ae0(local_200,pcVar2,0x200,&local_7b4), local_200[0] == '.')) {
      return 0;
    }
    pcVar3 = FUN_5bf11ef0(local_200,(int)local_788,0x200);
    lstrcpynA((LPSTR)local_588,local_788,0x104);
    local_485 = 0;
    pcVar3 = FUN_5bf11ef0(pcVar3,(int)local_788,0x200);
    lstrcpynA(local_484,local_788,0x28);
    local_45d = 0;
    pcVar3 = FUN_5bf11ef0(pcVar3,(int)local_788,0x200);
    lstrcpynA(local_7b0,local_788,0x28);
    local_789 = 0;
    local_204 = FUN_5bf2d450(local_7b0,(undefined4 *)0x0);
    pcVar3 = FUN_5bf11ef0(pcVar3,(int)local_788,0x200);
    lstrcpynA(local_45c,local_788,0x104);
    local_359 = 0;
    iVar4 = lstrcmpA(local_45c,"-");
    if (iVar4 == 0) {
      local_45c[0] = '\0';
    }
    pcVar3 = FUN_5bf11ef0(pcVar3,(int)local_788,0x200);
    lstrcpynA(local_358,local_788,0x28);
    local_331 = 0;
    pcVar3 = FUN_5bf11ef0(pcVar3,(int)local_788,0x200);
    lstrcpynA(local_330,local_788,0x28);
    local_309 = 0;
    lstrcpynA(local_308,pcVar3,0x104);
    local_205 = 0;
    iVar4 = FUN_5bf2ade0(param_3,local_588,0x388,-1,(int *)0x0);
    if (iVar4 < 0) break;
    cVar1 = *pcVar2;
  }
  return iVar4;
}


