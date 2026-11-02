/* Module: rmme3260.dll
   Function: FUN_66251160
   Address: 66251160
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_66251160(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  FUN_662510d0(this,param_1);
  return iVar1 != *(int *)((int)this + 0xc);
}


