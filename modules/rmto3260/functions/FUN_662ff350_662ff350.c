/* Module: rmto3260.dll
   Function: FUN_662ff350
   Address: 662ff350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_662ff350(void *this,undefined2 param_1)

{
  FUN_662fdc30(this);
  *(undefined ***)this = &PTR_FUN_663083d0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined2 *)((int)this + 0x18) = param_1;
  return this;
}


