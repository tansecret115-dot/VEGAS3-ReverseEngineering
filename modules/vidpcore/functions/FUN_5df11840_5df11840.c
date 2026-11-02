/* Module: vidpcore.dll
   Function: FUN_5df11840
   Address: 5df11840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5df11840(LPSTR param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  
  if (param_3 == 0) {
    CharUpperA(param_1);
  }
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    param_2 = FUN_5df117d0(cVar2,param_2);
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}


