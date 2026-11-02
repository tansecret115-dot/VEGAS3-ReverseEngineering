/* Module: mp3plug.dll
   Function: FUN_5f71ebf0
   Address: 5f71ebf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f71ebf0(void *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x7cc);
  *(undefined4 *)((int)this + 0x7cc) = param_1;
  return uVar1;
}


