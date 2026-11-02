/* Module: rmme3260.dll
   Function: FUN_6625e150
   Address: 6625e150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6625e150(void *this,undefined4 param_1,undefined2 param_2)

{
  *(undefined4 *)((int)this + 6) = param_1;
  *(undefined ***)this = &PTR_LAB_6626c668;
  *(undefined2 *)((int)this + 4) = param_2;
  FUN_662500f0((undefined4 *)((int)this + 10));
  *(undefined ***)this = &PTR_FUN_6626d318;
  *(undefined4 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x1a) = 0;
  *(undefined2 *)((int)this + 0x1e) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2a) = 0;
  return this;
}


