/* Module: mp3plug.dll
   Function: FUN_5f713b50
   Address: 5f713b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __thiscall FUN_5f713b50(void *this,int param_1)

{
  if (*(int *)this == 0) {
    *(int *)((int)this + 8) = param_1;
    *(int *)((int)this + 0xc) = param_1;
    *(int *)((int)this + 0x10) = param_1;
  }
  else if (param_1 != *(int *)((int)this + 8)) {
    *(undefined1 *)((int)this + 0x14) = 0;
  }
  if (param_1 < *(int *)((int)this + 0xc)) {
    *(int *)((int)this + 0xc) = param_1;
  }
  if (*(int *)((int)this + 0x10) < param_1) {
    *(int *)((int)this + 0x10) = param_1;
  }
  *(int *)((int)this + 4) = param_1 + *(int *)((int)this + 4);
  *(int *)this = *(int *)this + 1;
  return this;
}


