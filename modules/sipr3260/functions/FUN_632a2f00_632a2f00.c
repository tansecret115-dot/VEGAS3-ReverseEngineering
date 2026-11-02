/* Module: sipr3260.dll
   Function: FUN_632a2f00
   Address: 632a2f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_632a2f00(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG *lpAddend;
  
  if (*(int *)this == 0) {
    FUN_632a2c10(this);
  }
  puVar1 = *(undefined4 **)this;
  puVar2 = (undefined4 *)*param_1;
  if (puVar1 != puVar2) {
    if ((((int)puVar1[-3] < 0) && (puVar1 + -3 != (undefined4 *)PTR_DAT_632a5288)) ||
       ((int)puVar2[-3] < 0)) {
      FUN_632a2ec0(this,puVar2[-2],puVar2);
      return this;
    }
    FUN_632a2c50(this);
    iVar3 = *param_1;
    *(int *)this = iVar3;
    lpAddend = (LONG *)(iVar3 + -0xc);
    if (*lpAddend != -2000000000) {
      InterlockedIncrement(lpAddend);
    }
  }
  return this;
}


