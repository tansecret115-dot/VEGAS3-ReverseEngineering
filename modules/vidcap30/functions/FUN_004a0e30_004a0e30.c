/* Module: vidcap30.exe
   Function: FUN_004a0e30
   Address: 004a0e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004a0e30(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)(param_1 + 0xc);
  iVar2 = **(int **)(param_2 + 8);
  if (*(int *)(param_1 + 0xc) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0xc));
  }
  _SfList_CreateExZ_32(puVar1,4,iVar2,0x10,0x40000002,0,0,0);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      puVar3 = *(ushort **)(*(int *)(*(int *)(param_2 + 8) + 8) + iVar5 * 4);
      iVar4 = FUN_004a0f10(*(undefined4 *)(param_2 + 4),puVar3 + 2);
      if (iVar4 != 0) {
        _SfList_AllocAndInsertItem_20(*puVar1,puVar3,puVar3[1] + 5 + (uint)*puVar3,0xffffffff,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  _SfList_Sort_12(*puVar1,0,FUN_004a0ed0);
  return;
}


