/* Module: aviplug.dll
   Function: FUN_5f9621f0
   Address: 5f9621f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9621f0(int param_1)

{
  HGLOBAL pvVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar2 = 0;
      do {
        FUN_5f962180(*(int *)(param_1 + 0xc4) + iVar2);
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x90;
      } while (uVar3 < *(uint *)(param_1 + 0x14));
    }
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc4));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0xc4));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  return;
}


