/* Module: rmbe3260.dll
   Function: FUN_660413d0
   Address: 660413d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_660413d0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5)

{
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) &&
      (param_3 != (undefined4 *)0x0)) &&
     ((param_4 != (undefined4 *)0x0 && (param_5 != (undefined4 *)0x0)))) {
    *param_1 = *(undefined4 *)((int)this + 0x270);
    *param_2 = *(undefined4 *)((int)this + 0x274);
    *param_3 = *(undefined4 *)((int)this + 0x278);
    *param_4 = *(undefined4 *)((int)this + 0x27c);
    *param_5 = *(undefined4 *)((int)this + 0x280);
    return 0;
  }
  return 0xfff9;
}


