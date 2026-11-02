/* Module: aviplug.dll
   Function: FUN_5f941430
   Address: 5f941430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f941430(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c0);
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  lVar3 = __allmul(*(uint *)(param_1 + 0x1b0),*(int *)(param_1 + 0x1b4),2,0);
  lVar3 = lVar3 + iVar2 + CONCAT44(*(undefined4 *)(param_1 + 0x7c),uVar1);
  iVar2 = (int)((ulonglong)lVar3 >> 0x20);
  if ((*(int *)(param_1 + 0x1bc) <= iVar2) &&
     ((*(int *)(param_1 + 0x1bc) < iVar2 || (*(uint *)(param_1 + 0x1b8) < (uint)lVar3)))) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_1 + 0x7c);
  return 0;
}


