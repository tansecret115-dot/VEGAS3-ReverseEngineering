/* Module: sfpublish.dll
   Function: FUN_0040b5b0
   Address: 0040b5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_0040b5b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xfefefefe;
  *(undefined4 *)((int)this + 0x20) = DAT_0043cb40;
  *(undefined4 *)((int)this + 0x24) = DAT_0043cb44;
  *(undefined4 *)((int)this + 0x28) = DAT_0043cb48;
  *(undefined4 *)((int)this + 0x2c) = DAT_0043cb4c;
  *(undefined4 *)((int)this + 0x30) = DAT_0043cb30;
  *(undefined4 *)((int)this + 0x34) = DAT_0043cb34;
  *(undefined4 *)((int)this + 0x38) = DAT_0043cb38;
  uVar1 = DAT_0043cb3c;
  *(undefined2 *)((int)this + 0x40) = 1;
  *(undefined2 *)((int)this + 0x42) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_00435d94;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x74) = param_2;
  *(undefined4 *)((int)this + 0x78) = param_3;
  *(undefined4 *)((int)this + 0x7c) = param_4;
  *(undefined4 *)((int)this + 0x80) = param_5;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa4) = param_6;
  *(undefined4 *)((int)this + 0xa0) = param_1;
  *(undefined ***)this = &PTR_LAB_00435d80;
  *(undefined ***)((int)this + 0x1c) = &PTR_LAB_00435d60;
  *(undefined ***)((int)this + 0x48) = &PTR_LAB_00435d58;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  return;
}


