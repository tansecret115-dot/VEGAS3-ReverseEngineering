/* Module: mcplug.dll
   Function: FUN_00402c80
   Address: 00402c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00402c80(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined ***)this = &PTR_LAB_00476678;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}


