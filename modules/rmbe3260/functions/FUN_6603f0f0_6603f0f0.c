/* Module: rmbe3260.dll
   Function: FUN_6603f0f0
   Address: 6603f0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6603f0f0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)((int)this + 0x5a);
    param_1[1] = *(undefined4 *)((int)this + 0x5e);
    *param_2 = *(undefined4 *)((int)this + 0x62);
    param_2[1] = *(undefined4 *)((int)this + 0x66);
    return 0;
  }
  return 0xfff9;
}


