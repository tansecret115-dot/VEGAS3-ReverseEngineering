/* Module: pngu3266.dll
   Function: FUN_6061a020
   Address: 6061a020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_6061a020(void *this,int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(*(int *)((int)this + 8) + param_1 * 4);
      (iVar1 != 0 && (*(int *)(iVar1 + 4) != param_2)); iVar1 = *(int *)(iVar1 + 8)) {
  }
  return;
}


