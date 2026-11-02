/* Module: sfmarket2.dll
   Function: FUN_0040dd30
   Address: 0040dd30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040dd30(void *this,undefined4 param_1,uchar *param_2)

{
  if (param_2 != (uchar *)0x0) {
    _mbscpy((uchar *)((int)this + 0x54),param_2);
  }
  FUN_0040d420((int)this);
  return 0;
}


