/* Module: mcplug.dll
   Function: FUN_00408d30
   Address: 00408d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00408d30(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 8) = *param_1;
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(param_1 + 1);
  *(undefined1 *)((int)this + 0xe) = *(undefined1 *)((int)param_1 + 6);
  return;
}


