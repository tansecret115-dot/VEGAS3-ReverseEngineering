/* Module: vidcap30.exe
   Function: FUN_00575f40
   Address: 00575f40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00575f40(char *param_1,int param_2,int param_3)

{
  char cVar1;
  
  param_2 = -1 - param_2;
  if (param_3 == 0) {
    CharUpperA(param_1);
  }
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_2 = FUN_00575f10(cVar1,param_2);
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return param_2;
}


