/* Module: vegas30.exe
   Function: FUN_005cbf20
   Address: 005cbf20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005cbf20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_005b83b0(uVar1,1);
  iVar2 = **(int **)(param_1 + 0x24);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 8) + iVar4 * 4);
      iVar4 = iVar4 + 1;
      *(uint *)(iVar3 + 0x58) = *(uint *)(iVar3 + 0x58) & 0xfffffc7f;
    } while (iVar4 < iVar2);
  }
  FUN_005b84d0(uVar1,1);
  return 0;
}


