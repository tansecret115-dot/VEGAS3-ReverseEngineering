/* Module: rmto3260.dll
   Function: FUN_662dee30
   Address: 662dee30
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_662dee30(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_662eefd0(local_10);
  FUN_662eefd0(local_28);
  piVar1 = FUN_662de880(this,local_1c);
  FUN_662ef280(local_10,piVar1);
  FUN_662ef0f0(local_1c);
  iVar2 = FUN_662def70((int)this);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x46) + 0x20))(local_1c);
    FUN_662ef560(local_10,puVar3);
    FUN_662ef0f0(local_1c);
  }
  FUN_662eeff0(param_1,local_10);
  FUN_662ef0f0(local_28);
  FUN_662ef0f0(local_10);
  return param_1;
}


