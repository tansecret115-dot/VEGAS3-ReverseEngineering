/* Module: encn3260.dll
   Function: FUN_66499c00
   Address: 66499c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66499c00(void *this,undefined4 *param_1)

{
  *(undefined ***)this = &PTR_LAB_664de8f0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_664dea30;
  *(undefined ***)((int)this + 8) = &PTR_LAB_664de8dc;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  FUN_664ba900((undefined4 *)((int)this + 0x48));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined1 *)((int)this + 0x6d) = 1;
  *(byte *)((int)this + 0x6e) = *(byte *)((int)this + 0x6e) & 0xc0;
  *(undefined4 *)((int)this + 0x6f) = 0;
  *(undefined4 *)((int)this + 0x73) = 0;
  *(undefined2 *)((int)this + 0x77) = 0;
  *(undefined2 *)((int)this + 0x79) = 0;
  *(undefined4 *)((int)this + 0x7b) = 0;
  *(undefined2 *)((int)this + 0x7f) = 0x4007;
  *(undefined4 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x85) = 0;
  *(undefined4 *)((int)this + 0x89) = 0;
  *(undefined4 *)((int)this + 0x8d) = 0;
  *(undefined4 *)((int)this + 0x91) = 0;
  *(undefined ***)this = &PTR_FUN_664de9f8;
  *(undefined ***)((int)this + 4) = &PTR_LAB_664de9e8;
  *(undefined ***)((int)this + 8) = &PTR_FUN_664de9e0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_664dc6c0,(int)this + 0x10);
    (**(code **)*param_1)(param_1,&DAT_664dc710,(int)this + 0x18);
    (**(code **)*param_1)(param_1,&DAT_664dc7a0,(int)this + 0x89);
  }
  FUN_664bbfc0((undefined4 *)((int)this + 0x91));
  return this;
}


