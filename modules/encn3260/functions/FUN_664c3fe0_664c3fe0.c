/* Module: encn3260.dll
   Function: FUN_664c3fe0
   Address: 664c3fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_664c3fe0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  FUN_664c3f50(this,param_1);
  return iVar1 != *(int *)((int)this + 0xc);
}


