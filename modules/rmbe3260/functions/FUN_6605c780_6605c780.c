/* Module: rmbe3260.dll
   Function: FUN_6605c780
   Address: 6605c780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6605c780(void *this,undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0xc);
    *(undefined4 **)((int)this + 0xc) = param_1;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
  }
  return;
}


