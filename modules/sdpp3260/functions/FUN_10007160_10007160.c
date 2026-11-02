/* Module: sdpp3260.dll
   Function: FUN_10007160
   Address: 10007160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_10007160(void *this,undefined4 param_1)

{
  FUN_100065e0(this);
  FUN_100065e0((undefined4 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return this;
}


