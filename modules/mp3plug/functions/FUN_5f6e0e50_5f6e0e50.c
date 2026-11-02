/* Module: mp3plug.dll
   Function: FUN_5f6e0e50
   Address: 5f6e0e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6e0e50(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  double dVar12;
  undefined1 local_2fc [312];
  undefined1 local_1c4 [312];
  float local_8c [2];
  uint auStack_84 [8];
  undefined8 local_64;
  undefined8 local_54;
  int *local_48;
  uint *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  
  iVar8 = param_1[3];
  if (0 < iVar8) {
    iVar7 = 0;
    piVar9 = param_2 + 0x29;
    iVar11 = 0;
    do {
      FUN_5f6f7450((int)(local_2fc + iVar7),(int)(local_1c4 + iVar7),(int)piVar9);
      iVar11 = iVar11 + 1;
      piVar9 = piVar9 + 0x2e5;
      iVar7 = iVar7 + 0x9c;
      iVar8 = param_1[3];
    } while (iVar11 < iVar8);
  }
  iVar7 = param_1[1];
  if (iVar7 < 1) {
    FUN_5f6f5400(param_1[5],param_2,(int)local_8c,(int)local_2fc,iVar8,param_1[2],(float)param_1[9])
    ;
  }
  else {
    FUN_5f6f4f60(param_1[5],param_2,(int)local_8c,(int)local_2fc,iVar8,param_1[7],
                 (param_1[4] - iVar7) + param_1[8],param_1[2] - iVar7);
  }
  iVar8 = param_1[3];
  if (0 < iVar8) {
    local_18 = (int *)0x0;
    piVar9 = param_2 + 0x29;
    iVar7 = 0;
    iVar11 = 0;
    do {
      FUN_5f6f7640((int)piVar9,param_3[iVar7 + 5],(int)(local_2fc + iVar11),
                   (int)(local_1c4 + iVar11));
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 0x2e5;
      iVar11 = iVar11 + 0x9c;
      iVar8 = param_1[3];
    } while (iVar7 < iVar8);
  }
  iVar7 = 0;
  if (0 < iVar8) {
    local_48 = param_3 + 7;
    local_34 = param_2 + 0x2d;
    local_44 = (uint *)(param_3 + 0xf);
    local_40 = param_3 + 0x11;
    local_3c = param_3 + 0x25;
    local_38 = param_3 + 9;
    piVar9 = param_2;
    do {
      iVar8 = piVar9[0x29];
      local_30 = param_3 + iVar7 * 4 + 0x13;
      FUN_5f6d5b90((undefined4 *)(&DAT_5f741e28 + (uint)(iVar8 == 2) * 0x10),local_30,4);
      FUN_5f6d5b90((undefined4 *)(&DAT_5f741e48 + (uint)(iVar8 == 2) * 0x10),
                   param_3 + iVar7 * 4 + 0x1b,4);
      piVar3 = local_40;
      if ((*param_1 == 0) && (param_2[1] == 0)) {
        iVar11 = 1;
      }
      else {
        iVar11 = 0;
      }
      FUN_5f6f78b0(piVar9[0x2c],iVar8,*param_1,(int *)param_3[iVar7 + 5],local_48,local_38,local_44,
                   local_40,(int)local_30,(int)(param_3 + iVar7 * 4 + 0x1b),iVar11,local_3c);
      local_48 = local_48 + 1;
      local_44 = local_44 + 1;
      local_40 = piVar3 + 1;
      local_3c = local_3c + 1;
      local_38 = local_38 + 3;
      iVar7 = iVar7 + 1;
      iVar8 = param_1[3];
      local_34 = local_34 + 0x2e5;
      piVar9 = piVar9 + 0x2e5;
    } while (iVar7 < iVar8);
  }
  if (0 < iVar8) {
    iVar8 = 0;
    do {
      auStack_84[iVar8] = 0x1000;
      if (param_1[1] < 1) {
        dVar12 = floor((double)((float)param_1[2] * local_8c[iVar8]));
        local_54 = dVar12;
        dVar12 = local_54;
        local_54._4_4_ = (uint)((ulonglong)dVar12 >> 0x20);
        local_54._0_4_ = SUB84(dVar12,0);
        uVar4 = local_54._4_4_ >> 0x14 & 0x7ff;
        if (uVar4 < 0x3ff) {
          auStack_84[2] = 0;
        }
        else {
          auStack_84[2] =
               (local_54._4_4_ << 0xb | (uint)local_54 >> 0x15 | 0x80000000) >>
               (0x1eU - (char)uVar4 & 0x1f);
          if ((longlong)dVar12 < 0) {
            auStack_84[2] = -auStack_84[2];
          }
        }
        uVar4 = auStack_84[2];
        if ((int)auStack_84[iVar8] < (int)auStack_84[2]) {
          uVar4 = auStack_84[iVar8];
        }
        local_54 = dVar12;
        auStack_84[iVar8] = uVar4;
      }
      else {
        auStack_84[2] = ((param_1[4] + param_1[7]) - param_1[1]) + param_1[8];
        dVar12 = floor((double)((float)(int)auStack_84[2] * local_8c[iVar8]));
        local_64 = dVar12;
        dVar12 = local_64;
        local_64._4_4_ = (uint)((ulonglong)dVar12 >> 0x20);
        local_64._0_4_ = SUB84(dVar12,0);
        uVar4 = local_64._4_4_ >> 0x14 & 0x7ff;
        if (uVar4 < 0x3ff) {
          auStack_84[2] = 0;
        }
        else {
          auStack_84[2] =
               (local_64._4_4_ << 0xb | (uint)local_64 >> 0x15 | 0x80000000) >>
               (0x1eU - (char)uVar4 & 0x1f);
          if ((longlong)dVar12 < 0) {
            auStack_84[2] = -auStack_84[2];
          }
        }
        uVar4 = auStack_84[2];
        if ((int)auStack_84[iVar8] < (int)auStack_84[2]) {
          uVar4 = auStack_84[iVar8];
        }
        local_64 = dVar12;
        auStack_84[iVar8] = uVar4;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1[3]);
  }
  *param_3 = 0;
  piVar9 = (int *)0x0;
  if (0 < param_1[3]) {
    local_2c = param_2 + 0x2d;
    local_1c = param_2 + 0xca;
    local_28 = param_3 + 0x2b;
    local_38 = (int *)0x0;
    local_48 = (int *)0x0;
    local_20 = param_3 + 0x1b;
    local_24 = param_3 + 0x13;
    local_18 = param_3 + 9;
    do {
      while( true ) {
        FUN_5f6f8010(*(int *)((int)(param_2 + 0x2c) + (int)local_48),(int)local_2c,(int)local_1c,
                     param_3[(int)piVar9 + 7],*(int *)((int)(param_2 + 0x29) + (int)local_48),
                     (int)local_18,param_3[(int)piVar9 + 0x25],(char)param_3[(int)piVar9 + 0xf],
                     param_3[(int)piVar9 + 5],param_3[(int)piVar9 + 1]);
        iVar8 = 0;
        piVar3 = *(int **)((int)(param_2 + 0x2c) + (int)local_48);
        local_44 = (uint *)param_3[(int)piVar9 + 1];
        local_34 = (int *)param_3[(int)piVar9 + 3];
        local_40 = (int *)0x0;
        if (0 < (int)piVar3) {
          do {
            piVar10 = (int *)0x0;
            iVar7 = iVar8 + 1;
            if (local_2c[iVar8] < local_2c[iVar8 + 1]) {
              puVar5 = local_44 + local_2c[iVar8];
              do {
                piVar1 = (int *)*puVar5;
                if ((int)piVar1 < 0) {
                  piVar1 = (int *)-(int)piVar1;
                }
                if ((int)piVar10 < (int)piVar1) {
                  piVar10 = piVar1;
                }
                puVar5 = puVar5 + 1;
              } while ((int)puVar5 < (int)(local_44 + local_2c[iVar8 + 1]));
            }
            local_34[iVar8] = (int)piVar10;
            if ((int)local_40 < (int)piVar10) {
              local_40 = piVar10;
            }
            iVar8 = iVar7;
            local_3c = piVar9;
            local_30 = piVar3;
          } while (iVar7 < (int)piVar3);
        }
        if ((int)local_40 < 0x2000) break;
LAB_5f6e1409:
        param_3[(int)piVar9 + 7] = param_3[(int)piVar9 + 7] + 1;
      }
      if ((piVar9 == (int *)0x1) && (param_2[1] != 0)) {
        iVar8 = *(int *)((int)(param_2 + 0x2a) + (int)local_48);
        local_30 = (int *)0x0;
        if (0 < iVar8) {
          local_34 = (int *)((int)param_2 + (int)local_48);
          local_40 = (int *)0x0;
          do {
            iVar7 = local_34[0x30a];
            FUN_5f6d5c60((undefined4 *)(iVar7 * 4 * iVar8 + 8 + (int)local_40 + (int)param_2),iVar8,
                         (undefined4 *)(iVar7 * 4 * iVar8 + param_3[6] + (int)local_40),iVar8,
                         *(int *)((int)(param_2 + 0x2c) + (int)local_48) / iVar8 - iVar7);
            if (*param_1 == 0) {
              for (piVar3 = (int *)((int)local_30 + (iVar7 + -1) * iVar8);
                  (-1 < (int)piVar3 && (*(int *)(param_3[4] + (int)piVar3 * 4) == 0));
                  piVar3 = (int *)((int)piVar3 - iVar8)) {
                if (*(int *)(param_3[3] + (int)piVar3 * 4) == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = 7;
                }
                *(undefined4 *)(param_3[6] + (int)piVar3 * 4) = uVar6;
              }
            }
            local_34 = local_34 + 1;
            local_40 = local_40 + 1;
            local_30 = (int *)((int)local_30 + 1);
          } while ((int)local_30 < iVar8);
        }
      }
      FUN_5f6d8cb0(0xffffd8f1,(undefined4 *)(param_3[6] + param_2[0x2c] * 4),
                   param_2[0x2b] - param_2[0x2c]);
      if (*param_1 == 0) {
        iVar8 = FUN_5f6f6f30(*(int *)((int)(param_2 + 0x29) + (int)local_48),
                             param_3[(int)piVar9 + 5],local_24,local_20);
      }
      else {
        if ((piVar9 == (int *)0x1) && (param_2[1] != 0)) {
          iVar8 = 1;
        }
        else {
          iVar8 = 0;
        }
        iVar8 = FUN_5f6f70e0(iVar8,*(int *)((int)(param_2 + 0x29) + (int)local_48),
                             param_3[(int)piVar9 + 5],param_3[(int)piVar9 + 0x25],local_24,local_20)
        ;
      }
      param_3[(int)piVar9 + 0x11] = iVar8;
      if (((piVar9 == (int *)0x1) && (param_2[1] != 0)) && (*param_1 != 0)) {
        local_34 = *(int **)((int)(param_2 + 0x2a) + (int)local_48);
        local_44 = (uint *)0x0;
        if (0 < (int)local_34) {
          piVar3 = (int *)((int)param_2 + (int)local_48);
          do {
            puVar5 = (uint *)((int)local_34 * (piVar3[0x30a] + -1) + (int)local_44);
            if (-1 < (int)puVar5) {
              while ((local_40 = piVar3, *(int *)(param_3[4] + (int)puVar5 * 4) == 0 &&
                     (puVar5 = (uint *)((int)puVar5 - (int)local_34), -1 < (int)puVar5))) {
                if ((*(int *)(param_3[4] + (int)puVar5 * 4) != 0) ||
                   (puVar5 = (uint *)((int)puVar5 - (int)local_34), (int)puVar5 < 0)) break;
              }
            }
            iVar8 = (int)puVar5 + (int)local_34;
            piVar10 = (int *)(piVar3[0x30a] * (int)local_34);
            if (iVar8 < (int)piVar10) {
              iVar11 = 0;
              iVar7 = 0;
              piVar1 = local_38;
              do {
                iVar2 = iVar11 + *(int *)((int)(param_3 + 0x13) + (int)piVar1);
                while (iVar2 <= iVar8) {
                  piVar1 = local_38 + iVar7;
                  iVar7 = iVar7 + 1;
                  iVar11 = iVar11 + *(int *)((int)(param_3 + 0x13) + (int)piVar1);
                  piVar1 = local_38 + iVar7;
                  iVar2 = iVar11 + *(int *)((int)(param_3 + 0x13) + (int)piVar1);
                }
                *(int *)(param_3[6] + iVar8 * 4) =
                     (1 << ((byte)*(undefined4 *)((int)(param_3 + 0x1b) + (int)piVar1) & 0x1f)) + -1
                ;
                iVar8 = iVar8 + (int)local_34;
                local_40 = piVar3;
                local_30 = piVar10;
              } while (iVar8 < (int)piVar10);
            }
            piVar3 = piVar3 + 1;
            local_44 = (uint *)((int)local_44 + 1);
            local_3c = piVar9;
          } while ((int)local_44 < (int)local_34);
        }
      }
      param_3[(int)piVar9 + 0x27] = *(int *)((int)(param_2 + 0x29) + (int)local_48);
      iVar8 = FUN_5f6f6ca0((int *)param_1[6],(int *)param_3[(int)piVar9 + 1],
                           param_3[(int)piVar9 + 3],
                           *(undefined4 *)((int)(param_2 + 0x29) + (int)local_48),
                           *(int *)((int)(param_2 + 0x2c) + (int)local_48),(int)local_2c,local_28);
      iVar7 = FUN_5f6f6c70(param_3[(int)piVar9 + 5],param_3[(int)piVar9 + 0x11],(int)local_24,
                           (int)local_20);
      iVar7 = iVar7 + iVar8;
      param_3[(int)piVar9 + 0x23] = iVar7;
      if ((int)auStack_84[(int)piVar9] <= iVar7) goto LAB_5f6e1409;
      piVar9 = (int *)((int)piVar9 + 1);
      *param_3 = iVar7 + *param_3;
      if (param_1[3] <= (int)piVar9) break;
      local_48 = (int *)((int)piVar9 * 0xb94);
      local_28 = param_3 + (int)piVar9 * 0x13 + 0x2b;
      local_2c = param_2 + 0x2d + (int)piVar9 * 0x2e5;
      local_1c = param_2 + 0xca + (int)piVar9 * 0x2e5;
      local_18 = param_3 + (int)piVar9 * 3 + 9;
      local_38 = (int *)((int)piVar9 * 0x10);
      local_20 = param_3 + 0x1b + (int)piVar9 * 4;
      local_24 = param_3 + 0x13 + (int)piVar9 * 4;
    } while( true );
  }
  FUN_5f6f57c0(param_1[5],*param_3);
  iVar7 = 0;
  iVar8 = param_1[3];
  if (0 < iVar8) {
    do {
      iVar2 = 0;
      iVar11 = param_2[0x2b];
      if (0 < iVar11) {
        do {
          if (*(int *)(param_3[iVar7 + 5] + iVar2 * 4) == -9999) {
            *(undefined4 *)(param_3[iVar7 + 5] + iVar2 * 4) = 0;
            iVar11 = param_2[0x2b];
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar11);
        iVar8 = param_1[3];
      }
      iVar7 = iVar7 + 1;
      param_2 = param_2 + 0x2e5;
    } while (iVar7 < iVar8);
  }
  return 0;
}


