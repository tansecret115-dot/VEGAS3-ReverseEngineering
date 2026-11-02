/* Module: aviplug.dll
   Function: FUN_5f95de30
   Address: 5f95de30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall
FUN_5f95de30(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
            undefined4 param_5)

{
  FUN_5f95b2c0(this,param_1,param_2,param_3,param_4,param_5);
  *(undefined ***)this = &PTR_LAB_5f9d9444;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  return this;
}


