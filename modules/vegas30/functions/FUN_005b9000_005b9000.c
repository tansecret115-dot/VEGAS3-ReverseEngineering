/* Module: vegas30.exe
   Function: FUN_005b9000
   Address: 005b9000
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b9000(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_005b83b0(param_1,1);
  piVar1 = *(int **)(param_1 + 0x1dc);
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  iVar4 = 0;
  iVar3 = 0;
  if (0 < iVar5) {
    do {
      iVar2 = *(int *)(piVar1[2] + iVar3 * 4);
      *(int *)(iVar2 + 0x18) = iVar3;
      if ((*(byte *)(iVar2 + 0x10) & 4) == 0) {
        iVar4 = iVar4 + 1;
        *(int *)(iVar2 + 0x14) = iVar4;
      }
      else {
        *(undefined4 *)(iVar2 + 0x14) = 0xfffffffe;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar5);
  }
  if (*(int *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x18) = 0x80000000;
    *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x14) = 0x80000000;
  }
  FUN_005b84d0(param_1,1);
  return;
}


