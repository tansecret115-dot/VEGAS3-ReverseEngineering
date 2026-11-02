/* Module: oggplug.dll
   Function: FUN_004308e0
   Address: 004308e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_004308e0(int *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    FUN_00441e10(param_1,(int)cVar1,8);
    cVar1 = *param_2;
  }
  return;
}


