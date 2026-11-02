/* Module: sfmarket2.dll
   Function: FUN_0048f070
   Address: 0048f070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048f070(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 < param_4) {
    iVar1 = param_3 + -1;
    do {
      FUN_00485020(param_1,iVar1,param_1,param_3,1,param_2);
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
  }
  return;
}


