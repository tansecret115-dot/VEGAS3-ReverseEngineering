/* Module: vegas30.exe
   Function: FUN_0046ba30
   Address: 0046ba30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046ba30(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0046b9e0(param_1);
  if (param_2 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(param_2[2] + iVar2 * 4) + 8);
      iVar2 = iVar2 + 1;
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x100000;
    } while (iVar2 < iVar3);
  }
  return;
}


