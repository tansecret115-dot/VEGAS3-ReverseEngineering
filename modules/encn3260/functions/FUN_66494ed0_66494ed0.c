/* Module: encn3260.dll
   Function: FUN_66494ed0
   Address: 66494ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66494ed0(void *this,int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 in_EAX;
  undefined2 uVar9;
  undefined2 extraout_var;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar10;
  undefined4 local_28 [2];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar9 = (undefined2)((uint)in_EAX >> 0x10);
  if (*(int *)((int)this + 0x3a) != 0) {
    FUN_66496290(this);
    *(undefined4 *)((int)this + 0x3a) = 0;
    uVar9 = extraout_var;
  }
  local_10 = FUN_66495960(this,(uint)*(ushort *)((int)this + 0x6e),
                          CONCAT22(uVar9,*(undefined2 *)((int)this + 0x70)));
  if (0x3fff < local_10) {
    return 0x80004005;
  }
  local_14 = (**(code **)(*param_1 + 0x1c))(param_1);
  uVar4 = *(uint *)((int)this + 0x182);
  uVar8 = param_1[9];
  *(uint *)((int)this + 0x182) = uVar4 + uVar8;
  *(uint *)((int)this + 0x186) = *(int *)((int)this + 0x186) + (uint)CARRY4(uVar4,uVar8);
  *(int *)((int)this + 0x1ea) = *(int *)((int)this + 0x1ea) + param_1[9];
  uVar4 = (**(code **)(*param_1 + 0x14))();
  local_c = FUN_66495960(this,(uint)*(ushort *)((int)this + 0x6e),uVar4);
  local_18 = local_10 + 1;
  if (local_c == local_18) {
    piVar5 = (int *)FUN_664c04a0(*(void **)((int)this + 10),local_10);
    piVar5 = (int *)*piVar5;
    if (piVar5[0xc] == 0) {
      FUN_664c04f0(*(void **)((int)this + 10),param_1);
      *(short *)((int)this + 0x70) = *(short *)((int)this + 0x70) + 1;
      if ((uint)*(ushort *)((int)this + 0x70) == *(uint *)((int)this + 0x66)) {
        *(undefined2 *)((int)this + 0x70) = 0;
      }
    }
    else {
LAB_664950b9:
      local_20 = (**(code **)(*param_1 + 0x18))();
      if (piVar5[0xc] == 0) {
        iVar10 = (**(code **)(*piVar5 + 0x14))();
        local_8 = iVar10 + 1;
      }
      else {
        local_8 = (**(code **)(*piVar5 + 0x14))();
        local_18 = local_10;
        puVar6 = (undefined4 *)FUN_664c0540(*(int **)((int)this + 10));
        if (puVar6 != (undefined4 *)0x0) {
          piVar5 = (int *)puVar6[7];
          *puVar6 = &PTR_FUN_664dc580;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
          }
          operator_delete(puVar6);
        }
      }
      if ((local_8 & 0xffff) == *(uint *)((int)this + 0x66)) {
        local_8 = 0;
      }
      if (local_18 < local_c) {
        local_18 = local_c - local_18;
        do {
          (**(code **)(**(int **)((int)this + 4) + 0x48))(*(undefined2 *)((int)this + 8),local_8);
          puVar6 = operator_new(0x34);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar7 = FUN_66495f50(this,local_28);
            uVar1 = *puVar7;
            uVar2 = puVar7[1];
            local_1c = local_8;
            uVar4 = local_1c;
            local_1c._0_2_ = (undefined2)local_8;
            *(undefined2 *)(puVar6 + 1) = (undefined2)local_1c;
            *(undefined2 *)((int)puVar6 + 6) = (undefined2)local_20;
            puVar6[10] = uVar1;
            puVar6[6] = 0;
            puVar6[2] = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            *puVar6 = &PTR_FUN_664de298;
            puVar6[8] = local_14;
            puVar6[9] = 0;
            puVar6[3] = 0;
            puVar6[7] = 0;
            puVar6[0xb] = uVar2;
            puVar6[0xc] = 0;
            local_1c = uVar4;
            local_8 = local_8 + 1;
          }
          puVar6[5] = 1;
          *(int *)((int)this + 0x17a) = *(int *)((int)this + 0x17a) + 1;
          FUN_664c04f0(*(void **)((int)this + 10),puVar6);
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        local_18 = 0;
      }
      uVar4 = local_c;
      FUN_664c04f0(*(void **)((int)this + 10),param_1);
      uVar8 = (uVar4 - local_10) + (uint)*(ushort *)((int)this + 0x70);
      uVar3 = (ushort)uVar8;
      if ((uVar3 < *(ushort *)((int)this + 0x70)) ||
         (*(uint *)((int)this + 0x66) <= (uVar8 & 0xffff))) {
        iVar10 = uVar4 - local_10;
        if (iVar10 != 0) {
          do {
            *(short *)((int)this + 0x70) = *(short *)((int)this + 0x70) + 1;
            if ((uint)*(ushort *)((int)this + 0x70) == *(uint *)((int)this + 0x66)) {
              *(undefined2 *)((int)this + 0x70) = 0;
            }
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else {
        *(ushort *)((int)this + 0x70) = uVar3;
      }
    }
    *(int *)((int)this + 0x7a) = *(int *)((int)this + 0x7a) + 1;
  }
  else {
    if (local_10 < local_c) {
      if (local_c < 0x4001) {
        if (*(uint *)((int)*(void **)((int)this + 10) + 0xc) <= local_10) {
          return 0x80040009;
        }
        puVar6 = (undefined4 *)FUN_664c04a0(*(void **)((int)this + 10),local_10);
        piVar5 = (int *)*puVar6;
        goto LAB_664950b9;
      }
      if ((*(int *)((int)this + 0x3e) == 0) && (*(int *)((int)this + 0x36) == 0)) {
        FUN_66494bc0((int)this);
      }
      if (param_1 != (int *)0x0) {
        piVar5 = (int *)param_1[7];
        *param_1 = (int)&PTR_FUN_664dc580;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
        goto LAB_6649508a;
      }
    }
    else {
      if (*(uint *)((int)*(void **)((int)this + 10) + 0xc) <= local_c) {
        return 0x80040009;
      }
      puVar6 = (undefined4 *)FUN_664c04a0(*(void **)((int)this + 10),local_c);
      puVar6 = (undefined4 *)*puVar6;
      if (puVar6[7] == 0) {
        if (puVar6[5] == 0) {
          *(int *)((int)this + 0x7a) = *(int *)((int)this + 0x7a) + 1;
        }
        else {
          *(int *)((int)this + 0x17e) = *(int *)((int)this + 0x17e) + 1;
        }
        puVar7 = (undefined4 *)FUN_664c04a0(*(void **)((int)this + 10),local_c);
        *puVar7 = param_1;
        if (puVar6 != (undefined4 *)0x0) {
          piVar5 = (int *)puVar6[7];
          *puVar6 = &PTR_FUN_664dc580;
          if (piVar5 != (int *)0x0) {
            (**(code **)(*piVar5 + 8))(piVar5);
          }
          operator_delete(puVar6);
        }
        goto LAB_6649522d;
      }
      if (param_1 != (int *)0x0) {
        piVar5 = (int *)param_1[7];
        *param_1 = (int)&PTR_FUN_664dc580;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
          operator_delete(param_1);
          param_1 = (int *)0x0;
          goto LAB_6649522d;
        }
LAB_6649508a:
        operator_delete(param_1);
      }
    }
    param_1 = (int *)0x0;
  }
LAB_6649522d:
  if (((*(short *)((int)this + 0x78) == 0) && (param_1 != (int *)0x0)) && (param_1[7] != 0)) {
    if (*(int *)((int)this + 0x1ee) == 0) {
      *(undefined4 *)((int)this + 0x1ee) = 1;
      *(undefined4 *)((int)this + 0x1f6) = local_14;
      *(undefined4 *)((int)this + 0x1fa) = local_14;
      FUN_664964f0((int)this);
      return 0;
    }
    *(undefined4 *)((int)this + 0x1fa) = local_14;
  }
  FUN_664964f0((int)this);
  return 0;
}


