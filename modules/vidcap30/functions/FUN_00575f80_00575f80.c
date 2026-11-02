/* Module: vidcap30.exe
   Function: FUN_00575f80
   Address: 00575f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00575f80(LPSTR param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  
  if (param_3 == 0) {
    CharUpperA(param_1);
  }
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    param_2 = FUN_00575f10(cVar2,param_2);
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return;
}


