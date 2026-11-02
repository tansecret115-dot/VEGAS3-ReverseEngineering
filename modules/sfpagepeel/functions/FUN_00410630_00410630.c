/* Module: sfpagepeel.dll
   Function: FUN_00410630
   Address: 00410630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00410630(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (((*(uint *)(param_1 + 0x4c) & 0x1000000) != 0) &&
     (bVar1 = FUN_0040ed80(param_1 + 0xa4), bVar1)) {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    iVar2 = 0;
    do {
      bVar1 = FUN_0040ed80(*(int *)(param_1 + 0xa0) + iVar2);
      if (bVar1) {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x18;
    } while (uVar3 < *(uint *)(param_1 + 0x7c));
  }
  return;
}


