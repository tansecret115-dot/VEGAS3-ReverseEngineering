/* Module: dnet3260.dll
   Function: FUN_63053230
   Address: 63053230
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_63053230(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG *lpAddend;
  
  if (*(int *)this == 0) {
    FUN_63052f40(this);
  }
  puVar1 = *(undefined4 **)this;
  puVar2 = (undefined4 *)*param_1;
  if (puVar1 != puVar2) {
    if ((((int)puVar1[-3] < 0) && (puVar1 + -3 != (undefined4 *)PTR_DAT_63055268)) ||
       ((int)puVar2[-3] < 0)) {
      FUN_630531f0(this,puVar2[-2],puVar2);
      return this;
    }
    FUN_63052f80(this);
    iVar3 = *param_1;
    *(int *)this = iVar3;
    lpAddend = (LONG *)(iVar3 + -0xc);
    if (*lpAddend != -2000000000) {
      InterlockedIncrement(lpAddend);
    }
  }
  return this;
}


