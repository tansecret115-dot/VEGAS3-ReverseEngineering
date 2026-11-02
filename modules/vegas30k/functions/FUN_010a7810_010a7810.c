/* Module: vegas30k.dll
   Function: FUN_010a7810
   Address: 010a7810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a7810(int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    param_3 = param_3 - (int)param_2;
    do {
      if ((param_5 & 1 << ((byte)uVar3 & 0x1f)) != 0) {
        iVar2 = *(int *)(param_3 + (int)param_2) + param_4;
        *param_2 = iVar2;
        iVar1 = *(int *)(param_1 + 0x10);
        if ((iVar2 < *(int *)(param_1 + 0x10)) ||
           (iVar1 = *(int *)(param_1 + 0x14), *(int *)(param_1 + 0x14) < iVar2)) {
          iVar2 = iVar1;
        }
        *param_2 = iVar2;
      }
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x24));
  }
  return;
}


