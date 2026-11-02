/* Module: erv33260.dll
   Function: FUN_67074290
   Address: 67074290
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_67074290(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2;
  if (100 < param_2) {
    return 10;
  }
  iVar2 = FUN_670728e0((void *)((int)this + -0x70),param_1,&param_1,(int *)&param_2);
  if (iVar2 == 0) {
    *(uint *)((int)this + 0x90) = uVar1;
    FUN_67077bb0((int)this + 0x14);
  }
  return iVar2;
}


