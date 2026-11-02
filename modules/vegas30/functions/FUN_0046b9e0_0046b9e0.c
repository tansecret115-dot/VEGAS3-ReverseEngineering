/* Module: vegas30.exe
   Function: FUN_0046b9e0
   Address: 0046b9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046b9e0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar2 = (int *)0x0;
    iVar4 = 0;
  }
  else {
    piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      iVar1 = *(int *)(piVar2[2] + iVar3 * 4);
      iVar3 = iVar3 + 1;
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffefffff;
    } while (iVar3 < iVar4);
  }
  return;
}


