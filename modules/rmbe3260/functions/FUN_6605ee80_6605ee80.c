/* Module: rmbe3260.dll
   Function: FUN_6605ee80
   Address: 6605ee80
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_6605ee80(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  FUN_6605edf0(this,param_1);
  return iVar1 != *(int *)((int)this + 0xc);
}


