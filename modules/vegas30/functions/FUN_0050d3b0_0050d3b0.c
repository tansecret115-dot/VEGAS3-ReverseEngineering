/* Module: vegas30.exe
   Function: FUN_0050d3b0
   Address: 0050d3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0050d3b0(int *param_1,int param_2)

{
  int iVar1;
  
  param_1 = (int *)*param_1;
  if (param_1 == (int *)0x0) {
    return -1;
  }
  iVar1 = *param_1;
  if ((0 < iVar1) && (param_2 < iVar1)) {
    _SfList_DeleteList_16(param_1,param_2,1,1);
  }
  return iVar1 + -1;
}


