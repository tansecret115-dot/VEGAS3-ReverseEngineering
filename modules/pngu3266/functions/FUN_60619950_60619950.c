/* Module: pngu3266.dll
   Function: FUN_60619950
   Address: 60619950
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_60619950(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  FUN_606198c0(this,param_1);
  return iVar1 != *(int *)((int)this + 0xc);
}


