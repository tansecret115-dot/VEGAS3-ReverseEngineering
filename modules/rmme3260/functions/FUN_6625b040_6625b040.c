/* Module: rmme3260.dll
   Function: FUN_6625b040
   Address: 6625b040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6625b040(void *this,undefined4 *param_1,undefined4 *param_2)

{
  if (*(int *)((int)this + 0x1e) != 0) {
    *(undefined4 *)((int)this + 0x6c) = 0;
    *param_1 = *(undefined4 *)((int)this + 0x1a);
    *param_2 = *(undefined4 *)((int)this + 0x16);
    return 1;
  }
  return 0;
}


