/* Module: vegas30.exe
   Function: FUN_00435990
   Address: 00435990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00435990(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0;
  iVar1 = **(int **)(param_3 + 0x24);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_3 + 0x24) + 8) + iVar4 * 4);
      uVar5 = FUN_005d9b80(*(undefined4 *)(param_1 + 0xbc8),*(undefined4 *)(iVar2 + 4));
      iVar4 = iVar4 + 1;
      *(undefined8 *)(iVar2 + 0x30) = uVar5;
      *(undefined4 *)(iVar2 + 0x38) = 0;
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_3 + 0x24) + 8) + iVar4 * 4);
      uVar3 = FUN_005d9de0(*(undefined4 *)(param_1 + 0xbc8),
                           *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x24) + 8) + iVar4 * 4),iVar2
                          );
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(iVar2 + 0x218) + 0xa0) = 1;
    } while (iVar4 < iVar1);
    return uVar3;
  }
  return 0;
}


