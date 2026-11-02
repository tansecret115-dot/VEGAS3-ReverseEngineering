/* Module: pnrs3260.dll
   Function: FUN_606f2110
   Address: 606f2110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_606f2110(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)*param_1;
  uVar2 = *(undefined4 *)*piVar1;
  iVar4 = ((undefined4 *)*piVar1)[2];
  iVar3 = piVar1[1];
  if (iVar3 < *(int *)((int)this + 0xc)) {
    while (iVar4 == 0) {
      piVar1[1] = iVar3 + 1;
      piVar1 = (int *)*param_1;
      iVar3 = piVar1[1];
      if (*(int *)((int)this + 0xc) <= iVar3) goto LAB_606f2149;
      iVar4 = *(int *)(*(int *)((int)this + 8) + iVar3 * 4);
    }
  }
  else {
LAB_606f2149:
    if (iVar4 == 0) {
      operator_delete((void *)*param_1);
      *param_1 = 0;
      return uVar2;
    }
  }
  *(int *)*param_1 = iVar4;
  return uVar2;
}


