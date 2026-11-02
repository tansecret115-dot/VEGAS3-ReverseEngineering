/* Module: rmto3260.dll
   Function: FUN_662f3cd0
   Address: 662f3cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662f3cd0(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_662eefd0(local_10);
  iVar1 = FUN_66304730((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_662ef0f0(local_10);
    return 0;
  }
  piVar2 = FUN_66304770((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_662ef0f0(local_10);
  return iVar1;
}


