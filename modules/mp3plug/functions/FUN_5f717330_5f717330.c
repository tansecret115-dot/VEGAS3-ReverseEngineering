/* Module: mp3plug.dll
   Function: FUN_5f717330
   Address: 5f717330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5f717330(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x1004) = param_1;
  *(undefined4 *)((int)this + 0x1008) = param_2;
  *(undefined4 *)((int)this + 0x100c) = param_3;
  *(undefined4 *)((int)this + 0x1010) = param_4;
  FUN_5f719200(this);
  return this;
}


