/* Module: rmbe3260.dll
   Function: FUN_6602d7d0
   Address: 6602d7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6602d7d0(uint param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    if (param_3 < param_1) {
      iVar1 = (param_3 - param_1) + -1;
    }
    else {
      iVar1 = param_3 - param_1;
    }
    iVar3 = param_4 - param_2;
  }
  if (((0 < iVar1) && (0 < iVar3)) && (0 < param_5 - param_4)) {
    uVar2 = ftol();
    return uVar2;
  }
  return 0;
}


