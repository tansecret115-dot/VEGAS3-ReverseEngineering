/* Module: rmme3260.dll
   Function: FUN_66217fa0
   Address: 66217fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66217fa0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x18);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)((int)this + 0x1c);
  }
  return 0;
}


