/* Module: encn3260.dll
   Function: FUN_66496bb0
   Address: 66496bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66496bb0(void *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)((int)this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2c) + 4))();
  }
  if (*(int *)((int)this + 0x1c) == 0) {
    *(undefined4 *)((int)this + 0x1c) = 1;
    uVar1 = FUN_66496c00(this,param_1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int **)((int)this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2c) + 8))();
  }
  return uVar1;
}


