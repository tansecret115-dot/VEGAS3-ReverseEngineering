/* Module: mcplug.dll
   Function: FUN_0041d9c0
   Address: 0041d9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041d9c0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  if (0 < param_2) {
    while (*param_1 != param_3 + -1) {
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      if (param_2 <= iVar2) {
        return uVar1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}


