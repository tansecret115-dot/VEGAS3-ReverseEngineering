/* Module: sfpaplug.dll
   Function: FUN_00408120
   Address: 00408120
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408120(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x48) <= (int)(uint)*(ushort *)(param_1 + 0xe6)) &&
     (iVar1 = FUN_004035b0(param_1), iVar1 != 0)) {
    return -1;
  }
  if (0 < param_4) {
    do {
      uVar2 = FUN_004080e0(param_1,param_3);
      if ((uVar2 & 1) != 0) {
        uVar2 = -uVar2 - 1;
      }
      *param_2 = (int)uVar2 / 2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 1;
    } while (param_4 != 0);
  }
  return (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x48) + -1) - 1;
}


