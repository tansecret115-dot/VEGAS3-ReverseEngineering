/* Module: sfppack1.dll
   Function: FUN_5cde3ba0
   Address: 5cde3ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cde3ba0(int param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((param_3 < iVar1) || (iVar1 = *(int *)(param_1 + 0x14), iVar1 < param_3)) {
    param_3 = iVar1;
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    do {
      if ((param_4 & 1 << ((byte)uVar2 & 0x1f)) != 0) {
        *param_2 = param_3;
      }
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x24));
  }
  return;
}


