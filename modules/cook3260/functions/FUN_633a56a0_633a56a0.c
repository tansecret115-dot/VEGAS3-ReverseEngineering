/* Module: cook3260.dll
   Function: FUN_633a56a0
   Address: 633a56a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a56a0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  uint local_8;
  
  iVar4 = 0;
  do {
    iVar1 = FUN_633a39b0(this,&local_8);
    iVar4 = iVar4 + iVar1;
  } while (local_8 != 0);
  iVar1 = iVar4 + -1;
  *param_1 = iVar1;
  if ((0 < iVar1) && (local_c = 0, 0 < iVar1)) {
    piVar3 = param_1 + 9;
    do {
      iVar1 = FUN_633a3930(this,3,(uint *)(piVar3 + -8));
      iVar2 = FUN_633a39b0(this,&local_8);
      iVar4 = iVar4 + iVar1 + iVar2;
      if (local_8 == 0) {
        *piVar3 = -1;
      }
      else {
        iVar1 = FUN_633a3930(this,4,&local_8);
        iVar4 = iVar4 + iVar1;
        *piVar3 = local_8 - 7;
      }
      local_c = local_c + 1;
      piVar3 = piVar3 + 1;
    } while (local_c < *param_1);
  }
  return iVar4;
}


