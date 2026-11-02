/* Module: encn3260.dll
   Function: FUN_66498a60
   Address: 66498a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_66498a60(void *this,undefined4 param_1,byte param_2)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_664dde40;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x15) = 0;
  *(undefined4 *)((int)this + 0x19) = 0;
  *(byte *)((int)this + 0x10) = (param_2 & 1) << 1 | *(byte *)((int)this + 0x10) & 0xfc;
  *(undefined ***)this = &PTR_FUN_664de940;
  *(undefined ***)((int)this + 4) = &PTR_LAB_664de930;
  return;
}


