/* Module: mp3plug.dll
   Function: FUN_5f6e52c0
   Address: 5f6e52c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f6e52c0(void *this,int param_1)

{
  int iVar1;
  
  if (200 < *(int *)this) {
    if (param_1 < 100) {
      iVar1 = param_1 * 2;
    }
    else {
      iVar1 = param_1 + 100;
    }
    return *(int *)((int)this + iVar1 * 4 + 8);
  }
  return *(int *)((int)this + param_1 * 4 + 8);
}


