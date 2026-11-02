/* Module: erv33260.dll
   Function: FUN_67073800
   Address: 67073800
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67073800(void *this,int param_1)

{
  int iVar1;
  void *local_8;
  
  local_8 = this;
  iVar1 = FUN_670728e0((void *)((int)this + -100),param_1,(int *)&local_8,&param_1);
  if (iVar1 == 0) {
    *(undefined1 *)((int)this + 0x1c8) = 1;
  }
  return;
}


