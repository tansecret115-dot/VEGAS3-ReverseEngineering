/* Module: pncrt.dll
   Function: FUN_78010660
   Address: 78010660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_78010660(longlong param_1,char *param_2,uint param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  
  pcVar1 = param_2;
  if (param_4 != 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
    pcVar1 = param_2;
  }
  do {
    pcVar3 = pcVar1;
    uVar6 = (uint)((ulonglong)param_1 >> 0x20);
    uVar5 = __aullrem((uint)param_1,uVar6,param_3,0);
    param_1 = __aulldiv((uint)param_1,uVar6,param_3,0);
    if ((uint)uVar5 < 10) {
      cVar2 = (char)uVar5 + '0';
    }
    else {
      cVar2 = (char)uVar5 + 'W';
    }
    *pcVar3 = cVar2;
    pcVar1 = pcVar3 + 1;
  } while (param_1 != 0);
  pcVar3[1] = '\0';
  do {
    cVar2 = *pcVar3;
    pcVar4 = pcVar3 + -1;
    pcVar1 = param_2 + 1;
    *pcVar3 = *param_2;
    *param_2 = cVar2;
    pcVar3 = pcVar4;
    param_2 = pcVar1;
  } while (pcVar1 < pcVar4);
  return;
}


