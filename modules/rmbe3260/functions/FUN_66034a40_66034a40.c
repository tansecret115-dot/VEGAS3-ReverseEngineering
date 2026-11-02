/* Module: rmbe3260.dll
   Function: FUN_66034a40
   Address: 66034a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_66034a40(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_6605b650(local_10);
  FUN_6605b650(local_28);
  piVar1 = FUN_660343f0(this,local_1c);
  FUN_6605b900(local_10,piVar1);
  FUN_6605b770(local_1c);
  iVar2 = FUN_66034ba0((int)this);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x46) + 0x20))(local_1c);
    FUN_6605bbe0(local_10,puVar3);
    FUN_6605b770(local_1c);
  }
  FUN_6605b670(param_1,local_10);
  FUN_6605b770(local_28);
  FUN_6605b770(local_10);
  return param_1;
}


