/* Module: encn3260.dll
   Function: FUN_664d4d90
   Address: 664d4d90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664d4d90(void *this,int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_1 - 1U < **(uint **)((int)this + 8)) {
    piVar2 = *(int **)((*(uint **)((int)this + 8))[4] + (param_1 - 1U) * 4);
  }
  else {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && ((int *)*piVar2 != (int *)0x0)) {
    uVar1 = (**(code **)(*(int *)*piVar2 + 0x28))();
    return uVar1;
  }
  return 0;
}


