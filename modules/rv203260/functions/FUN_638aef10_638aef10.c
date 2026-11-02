/* Module: rv203260.dll
   Function: FUN_638aef10
   Address: 638aef10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_638aef10(void *this,byte *param_1)

{
  int iVar1;
  int *piVar2;
  int local_10 [3];
  
  FUN_638af6a0(local_10);
  iVar1 = FUN_638afe90((void *)((int)this + 8),param_1,local_10);
  if (iVar1 == 0) {
    FUN_638af7c0(local_10);
    return 0;
  }
  piVar2 = FUN_638afed0((void *)((int)this + 8),param_1);
  iVar1 = *piVar2;
  FUN_638af7c0(local_10);
  return iVar1;
}


