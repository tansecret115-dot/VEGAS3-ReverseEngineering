/* Module: encn3260.dll
   Function: FUN_66486e20
   Address: 66486e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66486e20(void *this,undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int)this + 0x30);
  (**(code **)(*(int *)((int)this + 0x30) + 4))(piVar1);
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  uVar2 = (**(code **)(**(int **)((int)this + 0x68) + 0xc))(*(int **)((int)this + 0x68),param_1);
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  (**(code **)(*piVar1 + 8))(piVar1);
  return uVar2;
}


