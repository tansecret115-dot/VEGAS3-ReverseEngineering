/* Module: sfppack1.dll
   Function: FUN_5cdfd51d
   Address: 5cdfd51d
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdfd51d(void *this,int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = 1;
  FUN_5ce02ab6((undefined4 *)((int)this + 0x18));
  *(undefined ***)this = &PTR_FUN_5ce1a550;
  piVar1 = (int *)(*(int *)((int)this + 0xc) + 0xc);
  (**(code **)(*piVar1 + 4))(piVar1);
  if (param_1 == 0) {
    uVar2 = (**(code **)(**(int **)((int)this + 0xc) + 0x14))();
    *(undefined4 *)((int)this + 0x10) = uVar2;
    uVar2 = (**(code **)(**(int **)((int)this + 0xc) + 0x18))();
    *(undefined4 *)((int)this + 8) = uVar2;
  }
  else {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    FUN_5ce02c48((undefined4 *)((int)this + 0x18),(undefined4 *)(param_1 + 0x18));
  }
  return this;
}


