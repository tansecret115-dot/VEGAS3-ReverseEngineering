/* Module: rmme3260.dll
   Function: FUN_662640c0
   Address: 662640c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_662640c0(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_662500f0(local_10);
  iVar1 = FUN_662697b0((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_66250210(local_10);
    return 0;
  }
  piVar2 = FUN_662697f0((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_66250210(local_10);
  return iVar1;
}


