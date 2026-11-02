/* Module: vegas30.exe
   Function: FUN_00606920
   Address: 00606920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00606920(char *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  *param_2 = 0;
  iVar3 = 6;
  param_2[1] = 0;
  param_2[2] = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    cVar2 = FUN_00607910(*param_1);
    if (cVar2 != -1) {
      FUN_006067d0(cVar2,iVar3,5,param_2);
      iVar3 = iVar3 + 5;
    }
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}


