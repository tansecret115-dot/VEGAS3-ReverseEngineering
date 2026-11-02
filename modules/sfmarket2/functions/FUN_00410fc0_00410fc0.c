/* Module: sfmarket2.dll
   Function: FUN_00410fc0
   Address: 00410fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00410fc0(int *param_1,int *param_2)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      iVar3 = 0;
      iVar1 = *(int *)(param_1[2] + iVar2 * 4);
      if (0 < *param_2) {
        do {
          this = *(void **)(param_2[2] + iVar3 * 4);
          if (*(int *)(iVar1 + 0x1c) == *(int *)((int)this + 0x1c)) {
            FUN_0040eb60(this,iVar1);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *param_2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
  }
  return;
}


