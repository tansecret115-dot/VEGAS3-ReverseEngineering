/* Module: erv13260.dll
   Function: FUN_63603340
   Address: 63603340
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_63603340(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG *lpAddend;
  
  if (*(int *)this == 0) {
    FUN_63603050(this);
  }
  puVar1 = *(undefined4 **)this;
  puVar2 = (undefined4 *)*param_1;
  if (puVar1 != puVar2) {
    if ((((int)puVar1[-3] < 0) && (puVar1 + -3 != (undefined4 *)PTR_DAT_63606ca0)) ||
       ((int)puVar2[-3] < 0)) {
      FUN_63603300(this,puVar2[-2],puVar2);
      return this;
    }
    FUN_63603090(this);
    iVar3 = *param_1;
    *(int *)this = iVar3;
    lpAddend = (LONG *)(iVar3 + -0xc);
    if (*lpAddend != -2000000000) {
      InterlockedIncrement(lpAddend);
    }
  }
  return this;
}


