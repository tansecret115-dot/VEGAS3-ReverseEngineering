/* Module: encn3260.dll
   Function: FUN_6648ed30
   Address: 6648ed30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6648ed30(void *this,undefined4 param_1,undefined4 param_2)

{
  void *this_00;
  int *piVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  
  this_00 = operator_new(0x28);
  if (this_00 == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_664bada0(this_00,param_1,param_2);
  }
  (**(code **)(*piVar1 + 4))(piVar1);
  uVar2 = (**(code **)(**(int **)((int)this + 0x95) + 0x1c))
                    (*(int **)((int)this + 0x95),*(undefined4 *)((int)this + 0x99),
                     CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x9d)),piVar1);
  (**(code **)(*piVar1 + 8))(piVar1);
  return uVar2;
}


