/* Module: vegas30.exe
   Function: FUN_005b3ef0
   Address: 005b3ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b3ef0(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    while (*param_2 != param_3) {
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 2;
      if (param_1 <= iVar2) {
        return uVar1;
      }
    }
    uVar1 = 1;
    param_2[1] = 1;
  }
  return uVar1;
}


