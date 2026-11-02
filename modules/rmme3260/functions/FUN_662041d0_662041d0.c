/* Module: rmme3260.dll
   Function: FUN_662041d0
   Address: 662041d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_662041d0(void *this,undefined4 *param_1,undefined4 param_2,int param_3,ushort param_4)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 extraout_var_00;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  puVar6 = (undefined4 *)*param_1;
  local_28 = *(int *)((int)this + 0x14);
  local_24 = (int *)((int)this + 0x10);
  local_c = -0x7fffbffb;
  local_10 = (undefined4 *)0x0;
  local_8 = 0;
  local_20 = 0;
  param_1 = (undefined4 *)0x0;
  local_18 = this;
  if (local_28 != 0) {
    if (local_28 != 0) goto LAB_66204214;
    pvVar7 = (void *)0x0;
    while( true ) {
      uVar2 = FUN_662182a0((int)pvVar7);
      local_14 = CONCAT22(extraout_var,uVar2);
      local_c = FUN_66206470(pvVar7,&local_10,&local_8,&local_20);
      if (-1 < local_c) {
        uVar3 = FUN_66264780(local_8);
        *puVar6 = uVar3;
        puVar4 = local_10;
        puVar8 = puVar6 + 1;
        for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        puVar6 = (undefined4 *)((int)(puVar6 + 1) + local_8);
        if ((ushort)param_1 < param_4) {
          uVar5 = (uint)param_1 & 0xffff;
          param_1 = (undefined4 *)((int)param_1 + 1);
          *(undefined2 *)(param_3 + uVar5 * 2) = (undefined2)local_14;
        }
        else {
          local_c = -0x7fffbffb;
        }
      }
      if ((local_c < 0) || (FUN_66250bf0(&local_28), local_28 == 0)) break;
LAB_66204214:
      puVar4 = (undefined4 *)FUN_66250c10(local_28);
      pvVar7 = (void *)*puVar4;
    }
  }
  local_28 = local_18[10];
  local_24 = local_18 + 9;
  piVar1 = local_18;
  while( true ) {
    if (local_28 == 0) {
      return local_c;
    }
    local_18 = piVar1;
    if (local_28 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      puVar4 = (undefined4 *)FUN_66250c10(local_28);
      pvVar7 = (void *)*puVar4;
    }
    uVar2 = FUN_662182a0((int)pvVar7);
    local_14 = CONCAT22(extraout_var_00,uVar2);
    local_1c = 0;
    local_c = (**(code **)(*piVar1 + 0x38))(piVar1,local_14,&local_1c);
    if (((-1 < local_c) && (local_1c == 0)) &&
       (local_c = FUN_66206470(pvVar7,&local_10,&local_8,&local_20), -1 < local_c)) {
      uVar3 = FUN_66264780(local_8);
      *puVar6 = uVar3;
      puVar4 = local_10;
      puVar8 = puVar6 + 1;
      for (uVar5 = local_8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = local_8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar6 = (undefined4 *)((int)(puVar6 + 1) + local_8);
      if ((ushort)param_1 < param_4) {
        uVar5 = (uint)param_1 & 0xffff;
        param_1 = (undefined4 *)((int)param_1 + 1);
        *(undefined2 *)(param_3 + uVar5 * 2) = (undefined2)local_14;
      }
      else {
        local_c = -0x7fffbffb;
      }
    }
    if (local_c < 0) break;
    FUN_66250bf0(&local_28);
    piVar1 = local_18;
  }
  return local_c;
}


