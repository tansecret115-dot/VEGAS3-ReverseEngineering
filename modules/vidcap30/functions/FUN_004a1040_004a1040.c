/* Module: vidcap30.exe
   Function: FUN_004a1040
   Address: 004a1040
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004a1040(int param_1,undefined4 param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = **(int **)(param_1 + 0xc);
  if (0 < iVar1) {
    do {
      puVar2 = *(ushort **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + iVar3 * 4);
      _SfList_AllocAndInsertItem_20(param_2,puVar2,puVar2[1] + 5 + (uint)*puVar2,0xffffffff,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}


