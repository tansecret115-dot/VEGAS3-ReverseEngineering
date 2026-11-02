/* Module: rmme3260.dll
   Function: FUN_662388c0
   Address: 662388c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66238910) */
/* WARNING: Removing unreachable block (ram,0x66238990) */

void __fastcall FUN_662388c0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_c = param_1;
  if (*(int *)(param_1 + 0x4c) == 0) {
    piVar1 = (int *)(param_1 + 0x14);
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x14))(piVar1);
    if (iVar2 != 0) {
      iVar2 = *piVar1;
      uVar3 = (**(code **)(iVar2 + 0x14))(piVar1);
      (**(code **)(iVar2 + 0x10))(piVar1,uVar3);
      param_1 = local_c;
    }
    (**(code **)(*(int *)(param_1 + 4) + 0x40))(param_1 + 4);
  }
  local_18 = *(int *)(param_1 + 0x3c);
  local_14 = param_1 + 0x38;
  local_10 = local_14;
  while (local_18 != 0) {
    puVar4 = (undefined4 *)FUN_66250c10(local_18);
    piVar1 = (int *)*puVar4;
    local_8 = (int *)0x0;
    iVar2 = (**(code **)*piVar1)(piVar1,&DAT_6626ad78,&local_8);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*local_8 + 0x14))(local_8);
      if (iVar2 != 0) {
        iVar2 = *local_8;
        uVar3 = (**(code **)(iVar2 + 0x14))(local_8);
        (**(code **)(iVar2 + 0x10))(local_8,uVar3);
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
    }
    (**(code **)(*piVar1 + 0x40))(piVar1);
    FUN_66250bf0(&local_18);
  }
  local_18 = *(int *)(local_10 + 4);
  local_14 = local_10;
  while (local_18 != 0) {
    puVar4 = (undefined4 *)FUN_66250c10(local_18);
    local_c = 0;
    FUN_66237a80((int *)*puVar4,&local_c);
    if (local_c != 0) {
      FUN_662388c0(local_c);
    }
    FUN_66250bf0(&local_18);
  }
  return;
}


