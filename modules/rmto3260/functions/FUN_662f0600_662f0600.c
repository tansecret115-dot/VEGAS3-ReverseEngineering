/* Module: rmto3260.dll
   Function: FUN_662f0600
   Address: 662f0600
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __thiscall FUN_662f0600(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  FUN_662f0570(this,param_1);
  return iVar1 != *(int *)((int)this + 0xc);
}


