/* Module: rmto3260.dll
   Function: FUN_662decd0
   Address: 662decd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_662decd0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x20);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)((int)this + 0x24);
  }
  return 0;
}


