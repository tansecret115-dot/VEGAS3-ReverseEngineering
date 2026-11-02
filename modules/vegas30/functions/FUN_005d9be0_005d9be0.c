/* Module: vegas30.exe
   Function: FUN_005d9be0
   Address: 005d9be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_005d9be0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_3 + 0x38) != 0) {
    local_8 = *(undefined4 *)(param_3 + 0x30);
    local_4 = *(undefined4 *)(param_3 + 0x34);
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    iVar1 = **(int **)(param_1 + 0x218);
    for (; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x218) + 8) + iVar4 * 4);
      iVar3 = _SfList_FindSpecificItemRange_16(*puVar2,0,0xffffffff,&local_8);
      if (-1 < iVar3) {
        if (param_2 != (int *)0x0) {
          *param_2 = iVar4 + 1;
        }
        return puVar2;
      }
    }
  }
  return (undefined4 *)0x0;
}


