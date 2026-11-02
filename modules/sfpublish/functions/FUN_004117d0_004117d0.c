/* Module: sfpublish.dll
   Function: FUN_004117d0
   Address: 004117d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004117d0(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)this + 0x2c);
  uVar2 = 0;
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  if (param_1 < iVar3) {
    uVar2 = FUN_00410c20(*(int *)(piVar1[2] + param_1 * 4));
  }
  return uVar2;
}


