/* Module: erv33260.dll
   Function: FUN_67074230
   Address: 67074230
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_67074230(void *this,int param_1,undefined4 param_2)

{
  int iVar1;
  void *local_8;
  
  local_8 = this;
  iVar1 = FUN_670728e0((void *)((int)this + -0x70),param_1,(int *)&local_8,&param_1);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x8c) = param_2;
  }
  return;
}


