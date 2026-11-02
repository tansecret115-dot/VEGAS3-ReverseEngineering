/* Module: erv33260.dll
   Function: FUN_67074160
   Address: 67074160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67074160(void *this,int param_1,uint param_2)

{
  int iVar1;
  void *local_8;
  
  local_8 = this;
  iVar1 = FUN_670728e0((void *)((int)this + -0x74),param_1,(int *)&local_8,&param_1);
  if (iVar1 == 0) {
    if ((0x3f < param_2) && (param_2 < 0x2581)) {
      *(uint *)((int)this + 0x7c) = param_2;
      return 0;
    }
    iVar1 = 10;
  }
  return iVar1;
}


