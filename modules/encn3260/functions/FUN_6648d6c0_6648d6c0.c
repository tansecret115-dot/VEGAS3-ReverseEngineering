/* Module: encn3260.dll
   Function: FUN_6648d6c0
   Address: 6648d6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6648d6c0(void *this,undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  void *this_00;
  
  piVar1 = (int *)FUN_664baa30(*(int **)((int)this + 100));
  (**(code **)(*piVar1 + 8))(param_1);
  uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
  this_00 = (void *)FUN_6648dfd0(this,uVar2);
  FUN_66494cd0(this_00,piVar1);
  return;
}


