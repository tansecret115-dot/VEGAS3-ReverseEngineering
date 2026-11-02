/* Module: rmbe3260.dll
   Function: FUN_6603bd70
   Address: 6603bd70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_6603bd70(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_6602f260(this,0);
  *(undefined4 *)((int)this + 0xd8) = param_1;
  *(undefined4 *)((int)this + 0xdc) = param_2;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined ***)this = &PTR_FUN_66067ee8;
  return this;
}


