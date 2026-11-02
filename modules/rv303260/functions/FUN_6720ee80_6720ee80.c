/* Module: rv303260.dll
   Function: FUN_6720ee80
   Address: 6720ee80
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_6720ee80(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  LONG *lpAddend;
  
  if (*(int *)this == 0) {
    FUN_6720eb90(this);
  }
  puVar1 = *(undefined4 **)this;
  puVar2 = (undefined4 *)*param_1;
  if (puVar1 != puVar2) {
    if ((((int)puVar1[-3] < 0) && (puVar1 + -3 != DAT_67215540)) || ((int)puVar2[-3] < 0)) {
      FUN_6720ee40(this,puVar2[-2],puVar2);
      return this;
    }
    FUN_6720ebd0(this);
    iVar3 = *param_1;
    *(int *)this = iVar3;
    lpAddend = (LONG *)(iVar3 + -0xc);
    if (*lpAddend != -2000000000) {
      InterlockedIncrement(lpAddend);
    }
  }
  return this;
}


