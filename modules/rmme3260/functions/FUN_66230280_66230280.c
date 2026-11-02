/* Module: rmme3260.dll
   Function: FUN_66230280
   Address: 66230280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_66230280(void *this,undefined4 *param_1)

{
  *(undefined ***)this = &PTR_LAB_6626be50;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626bfb0;
  *(undefined ***)((int)this + 8) = &PTR_LAB_6626be3c;
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
  FUN_662509f0((undefined4 *)((int)this + 0x48));
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
  *(undefined ***)this = &PTR_FUN_6626bf78;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626bf68;
  *(undefined ***)((int)this + 8) = &PTR_FUN_6626bf60;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_6626a658,(int)this + 0x10);
    (**(code **)*param_1)(param_1,&DAT_6626a6a8,(int)this + 0x18);
    (**(code **)*param_1)(param_1,&DAT_6626a738,(int)this + 0x89);
  }
  FUN_66254ca0((undefined4 *)((int)this + 0x91));
  return this;
}


