/* Module: wmfplug2.dll
   Function: FUN_00401f60
   Address: 00401f60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00401f60(void *this,int param_1)

{
  undefined4 uVar1;
  
  *(int *)((int)this + 0x5c) = param_1;
  *(undefined4 *)((int)this + 0x14) = DAT_0047b2a0;
  *(undefined4 *)((int)this + 0x18) = DAT_0047b2a4;
  *(undefined4 *)((int)this + 0x1c) = DAT_0047b2a8;
  uVar1 = DAT_0047b2ac;
  *(undefined4 *)((int)this + 0x10) = 3;
  *(undefined4 *)((int)this + 0x20) = uVar1;
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 0x24) = DAT_0047b200;
    *(undefined4 *)((int)this + 0x28) = DAT_0047b204;
    *(undefined4 *)((int)this + 0x2c) = DAT_0047b208;
    uVar1 = DAT_0047b20c;
    *(undefined4 *)((int)this + 0x38) = 0x19f;
    *(undefined4 *)((int)this + 0x3c) = 0x70;
    *(undefined4 *)((int)this + 0x30) = uVar1;
    *(undefined4 *)((int)this + 0x40) = 0x19e;
    return 0;
  }
  *(undefined4 *)((int)this + 0x24) = DAT_0047b1f0;
  *(undefined4 *)((int)this + 0x28) = DAT_0047b1f4;
  *(undefined4 *)((int)this + 0x2c) = DAT_0047b1f8;
  uVar1 = DAT_0047b1fc;
  *(undefined4 *)((int)this + 0x38) = 0x19f;
  *(undefined4 *)((int)this + 0x3c) = 0x6f;
  *(undefined4 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 0x1b8;
  return 0;
}


