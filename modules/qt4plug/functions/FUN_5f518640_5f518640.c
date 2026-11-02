/* Module: qt4plug.dll
   Function: FUN_5f518640
   Address: 5f518640
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f518640(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 8) = *param_1;
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(param_1 + 1);
  *(undefined1 *)((int)this + 0xe) = *(undefined1 *)((int)param_1 + 6);
  return;
}


