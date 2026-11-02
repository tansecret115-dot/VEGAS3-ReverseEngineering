/* Module: sdpp3260.dll
   Function: FUN_10002610
   Address: 10002610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10002610(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(int **)((int)this + 0x10) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


