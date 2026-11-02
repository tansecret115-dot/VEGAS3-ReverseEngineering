/* Module: sftrans1.dll
   Function: FUN_00537010
   Address: 00537010
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00537010(char *param_1,int param_2,int param_3)

{
  char cVar1;
  
  param_2 = -1 - param_2;
  if (param_3 == 0) {
    CharUpperA(param_1);
  }
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    param_2 = FUN_00536fe0(cVar1,param_2);
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return param_2;
}


