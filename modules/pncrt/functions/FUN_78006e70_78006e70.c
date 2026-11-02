/* Module: pncrt.dll
   Function: FUN_78006e70
   Address: 78006e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_78006e70(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      for (iVar2 = *(int *)(iVar1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        iVar1 = iVar2;
      }
      *(int *)(iVar1 + 4) = param_1;
      return;
    }
    *(int *)((int)this + 4) = param_1;
  }
  return;
}


