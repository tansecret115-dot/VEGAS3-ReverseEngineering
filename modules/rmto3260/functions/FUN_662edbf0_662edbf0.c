/* Module: rmto3260.dll
   Function: FUN_662edbf0
   Address: 662edbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662edbf0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int local_44;
  int local_40;
  void *local_3c;
  undefined4 *local_38;
  int local_34 [3];
  int local_28;
  int local_24;
  void *local_20;
  undefined4 *local_1c;
  int local_18 [3];
  int *local_c;
  undefined4 *local_8;
  
  *param_1 = &PTR_FUN_66306428;
  local_28 = 0;
  local_24 = 0;
  local_20 = (void *)0x0;
  local_1c = (undefined4 *)0x0;
  local_8 = param_1;
  FUN_662eefd0(local_18);
  piVar2 = param_1 + 2;
  local_c = piVar2;
  FUN_662ede20(&local_44,(int)piVar2,-(uint)(param_1[4] != 0));
  local_28 = local_44;
  local_24 = local_40;
  local_1c = local_38;
  local_20 = local_3c;
  FUN_662ef280(local_18,local_34);
  FUN_662ef0f0(local_34);
  while( true ) {
    FUN_662ede20(&local_44,(int)piVar2,0);
    bVar3 = local_28 == local_44;
    FUN_662ef0f0(local_34);
    if (bVar3) break;
    if (local_1c != (undefined4 *)0x0) {
      (**(code **)*local_1c)(1);
    }
    local_28 = local_24;
    if (local_24 != 0) {
      FUN_662eeaf0(local_20,&local_24,local_18,&local_1c);
    }
  }
  FUN_662ee7c0(piVar2);
  piVar2 = local_8 + 9;
  FUN_662ede20(&local_44,(int)piVar2,-(uint)(local_8[0xb] != 0));
  local_24 = local_40;
  local_28 = local_44;
  local_20 = local_3c;
  local_1c = local_38;
  FUN_662ef280(local_18,local_34);
  FUN_662ef0f0(local_34);
  while( true ) {
    FUN_662ede20(&local_44,(int)piVar2,0);
    bVar3 = local_28 == local_44;
    FUN_662ef0f0(local_34);
    if (bVar3) break;
    if (local_1c != (undefined4 *)0x0) {
      (**(code **)*local_1c)(1);
    }
    local_28 = local_24;
    if (local_24 != 0) {
      FUN_662eeaf0(local_20,&local_24,local_18,&local_1c);
    }
  }
  FUN_662ee7c0(piVar2);
  piVar1 = local_8 + 0x10;
  FUN_662ede20(&local_44,(int)piVar1,-(uint)(local_8[0x12] != 0));
  local_24 = local_40;
  local_28 = local_44;
  local_20 = local_3c;
  local_1c = local_38;
  FUN_662ef280(local_18,local_34);
  FUN_662ef0f0(local_34);
  while( true ) {
    FUN_662ede20(&local_44,(int)piVar1,0);
    bVar3 = local_28 == local_44;
    FUN_662ef0f0(local_34);
    if (bVar3) break;
    if (local_1c != (undefined4 *)0x0) {
      (**(code **)*local_1c)(1);
    }
    local_28 = local_24;
    if (local_24 != 0) {
      FUN_662eeaf0(local_20,&local_24,local_18,&local_1c);
    }
  }
  FUN_662ee7c0(piVar1);
  FUN_662ef0f0(local_18);
  thunk_FUN_662ee7c0(piVar1);
  thunk_FUN_662ee7c0(piVar2);
  thunk_FUN_662ee7c0(local_c);
  return;
}


