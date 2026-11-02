/* Module: vegas30.exe
   Function: FUN_004fae80
   Address: 004fae80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fae80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = **(int **)(param_1 + 0x178);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x178) + 8) + iVar4 * 4);
      uVar3 = *(uint *)(iVar2 + 0x18);
      if (iVar2 == param_2) {
        uVar3 = uVar3 | 1;
LAB_004faeb9:
        *(uint *)(iVar2 + 0x18) = uVar3;
      }
      else if ((uVar3 & 1) != 0) {
        uVar3 = uVar3 & 0xfffffffe;
        goto LAB_004faeb9;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


