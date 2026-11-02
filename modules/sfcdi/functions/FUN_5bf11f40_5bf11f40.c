/* Module: sfcdi.dll
   Function: FUN_5bf11f40
   Address: 5bf11f40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf11f40(char *param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int local_93c;
  CHAR local_938 [39];
  undefined1 local_911;
  int local_910 [64];
  undefined1 local_80d;
  CHAR local_80c [259];
  undefined1 local_709;
  CHAR local_708 [259];
  undefined1 local_605;
  int local_604;
  CHAR local_600 [256];
  CHAR local_500 [512];
  char local_300 [512];
  CHAR local_100 [256];
  
  pcVar2 = FUN_5bf11ae0(local_300,param_1,0x200,&local_93c);
  cVar1 = *pcVar2;
  while ((cVar1 != '\0' &&
         (pcVar2 = FUN_5bf11ae0(local_300,pcVar2,0x200,&local_93c), local_300[0] != '.'))) {
    pcVar3 = FUN_5bf11ef0(local_300,(int)local_500,0x200);
    lstrcpynA((LPSTR)local_910,local_500,0x104);
    local_80d = 0;
    pcVar3 = FUN_5bf11ef0(pcVar3,(int)local_500,0x200);
    lstrcpynA(local_938,local_500,0x28);
    local_911 = 0;
    local_604 = FUN_5bf2d450(local_938,(undefined4 *)0x0);
    FUN_5bf11b60(pcVar3,local_100,local_600);
    lstrcpynA(local_708,local_600,0x104);
    local_605 = 0;
    lstrcpynA(local_80c,local_100,0x104);
    local_709 = 0;
    iVar4 = FUN_5bf2ade0(param_3,local_910,0x310,-1,(int *)0x0);
    if (iVar4 < 0) {
      return iVar4;
    }
    cVar1 = *pcVar2;
  }
  return 0;
}


