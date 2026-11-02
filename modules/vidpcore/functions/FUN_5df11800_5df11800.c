/* Module: vidpcore.dll
   Function: FUN_5df11800
   Address: 5df11800
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5df11800(char *param_1,int param_2,int param_3)

{
  char cVar1;
  
  param_2 = -1 - param_2;
  if (param_3 == 0) {
    CharUpperA(param_1);
  }
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_2 = FUN_5df117d0(cVar1,param_2);
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return param_2;
}


