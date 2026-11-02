/* Module: vegas30.exe
   Function: FUN_005b3f60
   Address: 005b3f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b3f60(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    while ((*param_2 != param_3 || (param_2[1] != param_4))) {
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 3;
      if (param_1 <= iVar2) {
        return uVar1;
      }
    }
    uVar1 = 1;
    param_2[2] = 1;
  }
  return uVar1;
}


