/* Module: erv23260.dll
   Function: FUN_6380bd40
   Address: 6380bd40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_6380bd40(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_1 - param_2;
  if (param_3 == 0) {
    if (iVar1 < -2) {
      return param_2 + -2;
    }
    if (2 < iVar1) {
      iVar1 = 2;
    }
  }
  return iVar1 + param_2;
}


