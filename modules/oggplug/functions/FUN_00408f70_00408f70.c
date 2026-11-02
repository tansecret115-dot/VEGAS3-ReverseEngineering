/* Module: oggplug.dll
   Function: FUN_00408f70
   Address: 00408f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00408f70(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x134);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(int **)((int)this + 0x134) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return 0;
}


