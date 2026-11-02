/* Module: sftrans1.dll
   Function: FUN_004850b0
   Address: 004850b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004850b0(uint *param_1,uint *param_2,int param_3,int param_4,int param_5,uint *param_6,
                 undefined4 param_7,undefined4 param_8,double param_9,double param_10,
                 undefined4 param_11,undefined4 param_12,double param_13,double param_14,
                 double param_15,double param_16)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  byte local_78;
  undefined1 uStack_77;
  byte bStack_76;
  byte bStack_75;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined1 local_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 local_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  dVar8 = param_13 - (double)CONCAT44(param_8,param_7);
  local_40 = (double)(param_3 * 5);
  local_50 = 0.0;
  local_58 = 0.0;
  local_60 = 0.0;
  local_68 = 0.0;
  local_70 = 0.0;
  if (ABS(dVar8) <= local_40) {
    if (((ABS(param_14 - param_9) <= (double)(param_4 * 5)) &&
        (local_38 = param_15 - param_10, ABS(local_38) <= local_40)) &&
       (local_30 = param_16 - (double)CONCAT44(param_12,param_11),
       ABS(local_30) <= (double)(param_4 * 5))) {
      if (param_13 != (double)CONCAT44(param_8,param_7)) {
        local_28 = (param_14 - param_9) / dVar8;
        for (local_48 = (double)CONCAT44(param_8,param_7); local_48 <= param_13;
            local_48 = local_48 + _DAT_00555908) {
          if ((local_48 < _DAT_00555910) || ((double)param_3 <= local_48)) {
            bVar1 = *(byte *)((int)param_6 + 2);
            bVar2 = *(byte *)((int)param_6 + 1);
            bVar4 = (byte)*param_6;
            bVar3 = *(byte *)((int)param_6 + 3);
LAB_004856f2:
            local_58 = (double)bVar4 + local_58;
            local_60 = (double)bVar2 + local_60;
            local_68 = (double)bVar1 + local_68;
            local_50 = (double)bVar3 + local_50;
            local_70 = local_70 + _DAT_00555908;
          }
          else {
            local_40 = (local_48 - (double)CONCAT44(param_8,param_7)) * local_28 + param_9;
            if ((local_40 < _DAT_00555910) || ((double)param_4 <= local_40)) {
              bVar1 = *(byte *)((int)param_6 + 2);
              bVar2 = *(byte *)((int)param_6 + 1);
              bVar4 = (byte)*param_6;
              bVar3 = *(byte *)((int)param_6 + 3);
              goto LAB_004856f2;
            }
            floor(local_48);
            iVar10 = ftol();
            floor(local_40);
            iVar11 = ftol();
            if (((((double)iVar10 < _DAT_00557828) || (param_3 <= iVar10)) ||
                ((double)iVar11 < _DAT_00557828)) || (param_4 <= iVar11)) {
              uVar12 = *param_6;
              local_78 = (byte)uVar12;
              uStack_77 = (undefined1)(uVar12 >> 8);
              bStack_76 = (byte)(uVar12 >> 0x10);
              bStack_75 = (byte)(uVar12 >> 0x18);
            }
            else {
              if (iVar10 < 0) {
                uVar12 = *param_6;
                local_14 = (undefined1)uVar12;
                uStack_13 = (undefined1)(uVar12 >> 8);
                uStack_12 = (undefined1)(uVar12 >> 0x10);
                uStack_11 = (undefined1)(uVar12 >> 0x18);
                local_1c = local_14;
                uStack_1b = uStack_13;
                uStack_1a = uStack_12;
                uStack_19 = uStack_11;
                if (iVar11 < 0) {
                  uVar12 = *param_2;
                  local_18 = local_14;
                  uStack_17 = uStack_13;
                  uStack_16 = uStack_12;
                  uStack_15 = uStack_11;
                }
                else {
                  uVar5 = *(uint *)(iVar11 * param_5 + (int)param_2);
                  local_18 = (undefined1)uVar5;
                  uStack_17 = (undefined1)(uVar5 >> 8);
                  uStack_16 = (undefined1)(uVar5 >> 0x10);
                  uStack_15 = (undefined1)(uVar5 >> 0x18);
                  if (iVar11 < param_4 + -1) {
                    iVar13 = (iVar11 + 1) * param_5;
LAB_004853f6:
                    uVar12 = *(uint *)(iVar13 + (int)param_2);
                  }
                }
LAB_004853f9:
                local_10 = (undefined1)uVar12;
                uStack_f = (undefined1)(uVar12 >> 8);
                uStack_e = (undefined1)(uVar12 >> 0x10);
                uStack_d = (undefined1)(uVar12 >> 0x18);
              }
              else if (iVar10 < param_3 + -1) {
                if (iVar11 < 0) {
                  uVar5 = param_2[iVar10];
                  uVar12 = param_2[iVar10 + 1];
                  local_14 = (undefined1)uVar5;
                  uStack_13 = (undefined1)(uVar5 >> 8);
                  uStack_12 = (undefined1)(uVar5 >> 0x10);
                  uStack_11 = (undefined1)(uVar5 >> 0x18);
                  uVar5 = *param_6;
                  local_18 = (undefined1)uVar5;
                  uStack_17 = (undefined1)(uVar5 >> 8);
                  uStack_16 = (undefined1)(uVar5 >> 0x10);
                  uStack_15 = (undefined1)(uVar5 >> 0x18);
                  local_1c = local_18;
                  uStack_1b = uStack_17;
                  uStack_1a = uStack_16;
                  uStack_19 = uStack_15;
                  goto LAB_004853f9;
                }
                if (iVar11 < param_4 + -1) {
                  iVar14 = (iVar11 + 1) * param_5;
                  iVar13 = iVar14 + 4 + iVar10 * 4;
                  uVar6 = *(undefined4 *)(iVar11 * param_5 + 4 + iVar10 * 4 + (int)param_2);
                  uVar7 = *(undefined4 *)(iVar11 * param_5 + iVar10 * 4 + (int)param_2);
                  local_18 = (undefined1)uVar6;
                  uStack_17 = (undefined1)((uint)uVar6 >> 8);
                  uStack_16 = (undefined1)((uint)uVar6 >> 0x10);
                  uStack_15 = (undefined1)((uint)uVar6 >> 0x18);
                  uVar6 = *(undefined4 *)(iVar14 + iVar10 * 4 + (int)param_2);
                  local_1c = (undefined1)uVar7;
                  uStack_1b = (undefined1)((uint)uVar7 >> 8);
                  uStack_1a = (undefined1)((uint)uVar7 >> 0x10);
                  uStack_19 = (undefined1)((uint)uVar7 >> 0x18);
                  local_14 = (undefined1)uVar6;
                  uStack_13 = (undefined1)((uint)uVar6 >> 8);
                  uStack_12 = (undefined1)((uint)uVar6 >> 0x10);
                  uStack_11 = (undefined1)((uint)uVar6 >> 0x18);
                  goto LAB_004853f6;
                }
                uVar12 = *param_6;
                uVar6 = *(undefined4 *)(iVar11 * param_5 + iVar10 * 4 + (int)param_2);
                uVar7 = *(undefined4 *)(iVar11 * param_5 + 4 + iVar10 * 4 + (int)param_2);
                local_10 = (undefined1)uVar12;
                uStack_f = (undefined1)(uVar12 >> 8);
                uStack_e = (undefined1)(uVar12 >> 0x10);
                uStack_d = (undefined1)(uVar12 >> 0x18);
                local_1c = (undefined1)uVar6;
                uStack_1b = (undefined1)((uint)uVar6 >> 8);
                uStack_1a = (undefined1)((uint)uVar6 >> 0x10);
                uStack_19 = (undefined1)((uint)uVar6 >> 0x18);
                local_18 = (undefined1)uVar7;
                uStack_17 = (undefined1)((uint)uVar7 >> 8);
                uStack_16 = (undefined1)((uint)uVar7 >> 0x10);
                uStack_15 = (undefined1)((uint)uVar7 >> 0x18);
                local_14 = local_10;
                uStack_13 = uStack_f;
                uStack_12 = uStack_e;
                uStack_11 = uStack_d;
              }
              else {
                uVar12 = *param_6;
                local_10 = (undefined1)uVar12;
                uStack_f = (undefined1)(uVar12 >> 8);
                uStack_e = (undefined1)(uVar12 >> 0x10);
                uStack_d = (undefined1)(uVar12 >> 0x18);
                local_18 = local_10;
                uStack_17 = uStack_f;
                uStack_16 = uStack_e;
                uStack_15 = uStack_d;
                if (iVar11 < 0) {
                  uVar12 = param_2[iVar10];
                  local_14 = (undefined1)uVar12;
                  uStack_13 = (undefined1)(uVar12 >> 8);
                  uStack_12 = (undefined1)(uVar12 >> 0x10);
                  uStack_11 = (undefined1)(uVar12 >> 0x18);
                  local_1c = local_10;
                  uStack_1b = uStack_f;
                  uStack_1a = uStack_e;
                  uStack_19 = uStack_d;
                }
                else {
                  uVar6 = *(undefined4 *)(iVar11 * param_5 + iVar10 * 4 + (int)param_2);
                  local_1c = (undefined1)uVar6;
                  uStack_1b = (undefined1)((uint)uVar6 >> 8);
                  uStack_1a = (undefined1)((uint)uVar6 >> 0x10);
                  uStack_19 = (undefined1)((uint)uVar6 >> 0x18);
                  local_14 = local_10;
                  uStack_13 = uStack_f;
                  uStack_12 = uStack_e;
                  uStack_11 = uStack_d;
                  if (iVar11 < param_4 + -1) {
                    uVar6 = *(undefined4 *)((iVar11 + 1) * param_5 + iVar10 * 4 + (int)param_2);
                    local_14 = (undefined1)uVar6;
                    uStack_13 = (undefined1)((uint)uVar6 >> 8);
                    uStack_12 = (undefined1)((uint)uVar6 >> 0x10);
                    uStack_11 = (undefined1)((uint)uVar6 >> 0x18);
                  }
                }
              }
              bStack_76 = ftol();
              uStack_77 = ftol();
              local_78 = ftol();
              bStack_75 = ftol();
              uVar12 = CONCAT13(bStack_75,CONCAT12(bStack_76,CONCAT11(uStack_77,local_78)));
            }
            local_68 = (double)bStack_76 + local_68;
            local_60 = (double)(CONCAT11(bStack_76,uStack_77) & 0xff) + local_60;
            local_58 = (double)(uVar12 & 0xff) + local_58;
            local_50 = (double)bStack_75 + local_50;
            local_70 = local_70 + _DAT_00555908;
          }
        }
      }
      if ((double)CONCAT44(param_12,param_11) != param_16) {
        local_28 = local_38 / local_30;
        dVar8 = (double)CONCAT44(param_12,param_11);
        while (local_40 = dVar8, dVar8 <= param_16) {
          if ((dVar8 < _DAT_00555910) || ((double)param_4 <= dVar8)) {
            local_68 = (double)*(byte *)((int)param_6 + 2) + local_68;
            local_60 = (double)*(byte *)((int)param_6 + 1) + local_60;
            local_58 = (double)(byte)*param_6 + local_58;
            dVar8 = (double)*(byte *)((int)param_6 + 3);
          }
          else {
            local_48 = (dVar8 - (double)CONCAT44(param_12,param_11)) * local_28 + param_10;
            if ((local_48 < _DAT_00555910) || ((double)param_3 <= local_48)) {
              local_68 = (double)*(byte *)((int)param_6 + 2) + local_68;
              local_60 = (double)*(byte *)((int)param_6 + 1) + local_60;
              local_58 = (double)(byte)*param_6 + local_58;
              dVar8 = (double)*(byte *)((int)param_6 + 3);
            }
            else {
              local_40._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
              uVar6 = local_40._4_4_;
              local_40._0_4_ = SUB84(dVar8,0);
              uVar7 = (undefined4)local_40;
              FUN_004859a0(&local_78,param_2,local_48,uVar7,uVar6,param_3,param_4,param_5,param_6);
              local_68 = (double)bStack_76 + local_68;
              local_60 = (double)(CONCAT11(bStack_76,uStack_77) & 0xff) + local_60;
              local_58 = (double)local_78 + local_58;
              dVar8 = (double)bStack_75;
            }
          }
          local_50 = dVar8 + local_50;
          local_70 = local_70 + _DAT_00555908;
          dVar8 = local_40 + _DAT_00555908;
        }
      }
      if (local_70 != _DAT_00555910) {
        uVar9 = ftol();
        *(undefined1 *)((int)param_1 + 2) = uVar9;
        uVar9 = ftol();
        *(undefined1 *)((int)param_1 + 1) = uVar9;
        uVar9 = ftol();
        *(undefined1 *)param_1 = uVar9;
        uVar9 = ftol();
        *(undefined1 *)((int)param_1 + 3) = uVar9;
        return;
      }
    }
  }
  *param_1 = *param_6;
  return;
}


