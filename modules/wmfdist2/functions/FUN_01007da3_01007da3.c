/* Module: wmfdist2.exe
   Function: FUN_01007da3
   Address: 01007da3
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01007da3(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x2b04) = *(int *)(param_1 + 0x2b04) + -2;
  if (*(int *)(param_1 + 0x2b04) + 4U < *(uint *)(param_1 + 0x2b08)) {
    puVar2 = (undefined4 *)(param_1 + 0xc);
    iVar3 = 3;
    do {
      *puVar2 = **(undefined4 **)(param_1 + 0x2b04);
      *(int *)(param_1 + 0x2b04) = *(int *)(param_1 + 0x2b04) + 4;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


