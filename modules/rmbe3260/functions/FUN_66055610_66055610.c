/* Module: rmbe3260.dll
   Function: FUN_66055610
   Address: 66055610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66055610(void *this,int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (int *)0x0) {
    uVar1 = FUN_660559b0(*(int **)((int)this + 4),param_2);
    return uVar1;
  }
  if ((int)param_1 - 1U < **(uint **)((int)this + 8)) {
    piVar3 = *(int **)((*(uint **)((int)this + 8))[4] + ((int)param_1 - 1U) * 4);
  }
  else {
    piVar3 = (int *)0x0;
  }
  if ((piVar3 != (int *)0x0) && (piVar3 = (int *)*piVar3, piVar3 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar3 + 0x28))();
    if (iVar2 == 1) {
      param_1 = (int *)0x0;
      (**(code **)(*piVar3 + 0x4c))(&param_1);
      uVar1 = FUN_660559b0(param_1,param_2);
      return uVar1;
    }
  }
  return 0x80004005;
}


