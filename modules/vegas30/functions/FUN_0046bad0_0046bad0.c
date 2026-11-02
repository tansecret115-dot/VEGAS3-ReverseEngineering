/* Module: vegas30.exe
   Function: FUN_0046bad0
   Address: 0046bad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046bad0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar1 = *piVar3;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(piVar3[2] + iVar4 * 4);
      if ((*(uint *)(iVar2 + 0x10) & 0x100000) != 0) {
        FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar2,1,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


