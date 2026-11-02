/* Module: rmme3260.dll
   Function: FUN_6622f0a0
   Address: 6622f0a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6622f0a0(void *this,undefined4 param_1,byte param_2)

{
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626bec8;
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x15) = 0;
  *(undefined4 *)((int)this + 0x19) = 0;
  *(byte *)((int)this + 0x10) = (param_2 & 1) << 1 | *(byte *)((int)this + 0x10) & 0xfc;
  *(undefined ***)this = &PTR_FUN_6626beb0;
  *(undefined ***)((int)this + 4) = &PTR_LAB_6626bea0;
  return;
}


