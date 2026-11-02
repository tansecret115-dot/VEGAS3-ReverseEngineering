/* Module: mp3plug.dll
   Function: FUN_5f716630
   Address: 5f716630
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f716630(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xd8) = param_1;
  *(undefined4 *)((int)this + 0x12dc) = param_2;
  FUN_5f7172e0((int)this);
  return (int)this;
}


