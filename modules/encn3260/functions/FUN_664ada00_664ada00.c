/* Module: encn3260.dll
   Function: FUN_664ada00
   Address: 664ada00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_664ada00(void *this,undefined4 param_1,undefined4 *param_2)

{
  void *this_00;
  int *piVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_664df218;
  *(undefined4 *)((int)this + 0xc) = param_1;
  if (param_2 != (undefined4 *)0x0) {
    (**(code **)*param_2)(param_2,&DAT_664dc6c0,(undefined4 *)((int)this + 0x18));
    (**(code **)*param_2)(param_2,&DAT_664dc7a0,(undefined4 *)((int)this + 0x14));
  }
  this_00 = operator_new(0x10);
  if (this_00 != (void *)0x0) {
    piVar1 = (int *)FUN_664add70(this_00,this);
    *(int **)((int)this + 0x1c) = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    return this;
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  (**(code **)(iRam00000000 + 4))(0);
  return this;
}


