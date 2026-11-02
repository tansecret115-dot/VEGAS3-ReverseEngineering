/* Module: encn3260.dll
   Function: FUN_6648d690
   Address: 6648d690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648d690(void *this,int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  *(int **)((int)this + 0x60) = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  return;
}


