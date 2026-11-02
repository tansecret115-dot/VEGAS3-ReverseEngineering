/* Module: rmbe3260.dll
   Function: FUN_6602ee00
   Address: 6602ee00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6602ee00(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined ***)this = &PTR_FUN_66067a60;
  return;
}


