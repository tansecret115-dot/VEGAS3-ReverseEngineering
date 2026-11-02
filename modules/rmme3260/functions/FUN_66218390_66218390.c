/* Module: rmme3260.dll
   Function: FUN_66218390
   Address: 66218390
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_66218390(void *this,void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_28 [3];
  int local_1c [3];
  int local_10 [3];
  
  FUN_662500f0(local_10);
  FUN_662500f0(local_28);
  piVar1 = FUN_66217b00(this,local_1c);
  FUN_662503a0(local_10,piVar1);
  FUN_66250210(local_1c);
  iVar2 = FUN_662184f0((int)this);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x46) + 0x20))(local_1c);
    FUN_66250680(local_10,puVar3);
    FUN_66250210(local_1c);
  }
  FUN_66250110(param_1,local_10);
  FUN_66250210(local_28);
  FUN_66250210(local_10);
  return param_1;
}


