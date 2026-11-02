/* Module: sfpublish.dll
   Function: FUN_00413540
   Address: 00413540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00413540(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = &PTR_FUN_004362dc;
  return;
}


