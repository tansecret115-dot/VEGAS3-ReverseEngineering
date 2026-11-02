/* Module: erv33260.dll
   Function: FUN_670796a0
   Address: 670796a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_670796a0(void *this,int param_1)

{
  int iVar1;
  
  param_1 = *(int *)((int)this + param_1 * 4 + 300);
  if ((*(int *)((int)this + 0xa4) == 1) &&
     (iVar1 = *(int *)((int)this + 0x1c8) + -1, *(int *)((int)this + 0x1c8) = iVar1, iVar1 == 0)) {
    *(undefined1 *)((int)this + 0x22d) = 1;
  }
  if (*(uint *)((int)this + 0x2b0) < 0x15) {
    param_1 = 0;
  }
  FUN_67079720(this,&param_1);
  if (param_1 == 0) {
    if (*(int *)((int)this + 0xa4) == 1) {
      *(undefined4 *)((int)this + 0x1c8) = *(undefined4 *)((int)this + 0xa8);
    }
    *(undefined1 *)((int)this + 0x22c) = 0;
    *(undefined1 *)((int)this + 0x22d) = 0;
  }
  return;
}


