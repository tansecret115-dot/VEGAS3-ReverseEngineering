/* Module: rmme3260.dll
   Function: FUN_6624c200
   Address: 6624c200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6624c200(void *this,int *param_1,undefined4 param_2)

{
  void *this_00;
  undefined4 *puVar1;
  
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626c450;
  *(undefined4 *)((int)this + 0x28) = 0x3f800000;
  *(undefined4 *)((int)this + 0x2c) = 0x3f800000;
  *(undefined4 *)((int)this + 0x30) = 0x3f800000;
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x38) = 0x3f800000;
  *(undefined4 *)((int)this + 8) = 0;
  *(int **)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xbf800000;
  *(undefined2 *)((int)this + 0x3e) = 0x20;
  *(undefined4 *)((int)this + 0x40) = param_2;
  *(undefined4 *)((int)this + 0x44) = 0x52474233;
  *(undefined ***)this = &PTR_FUN_6626c918;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626c8e0;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(param_1);
  }
  this_00 = operator_new(0x148);
  if (this_00 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_66245cd0(this_00,*(int **)((int)this + 0xc));
  }
  *(undefined4 **)((int)this + 0x10) = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_66245e50((int)puVar1);
  }
  return this;
}


