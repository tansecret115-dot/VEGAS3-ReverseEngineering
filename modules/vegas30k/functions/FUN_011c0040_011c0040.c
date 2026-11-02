/* Module: vegas30k.dll
   Function: FUN_011c0040
   Address: 011c0040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011c0040(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,uint param_5)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 *local_3c;
  undefined4 local_38;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined8 local_20;
  uint local_18;
  int local_14;
  uint local_10;
  int local_4;
  
  local_3c = param_4;
  uVar8 = 0;
  iVar7 = 0;
  lVar13 = 0;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  bVar1 = false;
  if ((param_2 == 0) || (param_2 == 1)) {
    return 1;
  }
  if (param_2 != 0x3c0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
    if (*(int *)(param_1 + 400) == 0) {
      if (*(int *)(param_1 + 0x178) != 0) {
        iVar6 = 5;
        do {
          FUN_011ad9c0(&local_28);
          (**(code **)(**(int **)(param_1 + 0x18) + 0x6c))(*(int **)(param_1 + 0x18),&local_30);
          bVar11 = CARRY4(uVar8,local_30 - local_28);
          uVar8 = uVar8 + (local_30 - local_28);
          iVar7 = iVar7 + ((local_2c - local_24) - (uint)(local_30 < local_28)) + (uint)bVar11;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar6 = 5;
        do {
          (**(code **)(**(int **)(param_1 + 0x18) + 0x6c))(*(int **)(param_1 + 0x18),&local_30);
          FUN_011ad9c0(&local_28);
          bVar11 = CARRY4(uVar8,local_30 - local_28);
          uVar8 = uVar8 + (local_30 - local_28);
          iVar7 = iVar7 + ((local_2c - local_24) - (uint)(local_30 < local_28)) + (uint)bVar11;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar13 = __alldiv(uVar8,iVar7,10,0);
      }
      uVar8 = (uint)lVar13;
      lVar2 = lVar13 + *(longlong *)(param_1 + 0x180);
      if (((lVar2 < 0) || (0xffffffff < lVar2)) || ((-1 < lVar2 && (param_5 < (uint)lVar2)))) {
        if ((lVar2 < 0x100000000) && (lVar2 < 0)) {
          uVar5 = param_5 - *(uint *)(param_1 + 0x180);
          uVar12 = __allmul(uVar5 - uVar8,
                            ((-(uint)(param_5 < *(uint *)(param_1 + 0x180)) -
                             *(int *)(param_1 + 0x184)) - (int)((ulonglong)lVar13 >> 0x20)) -
                            (uint)(uVar5 < uVar8),*(undefined2 *)(param_1 + 0xb4),0);
          local_20._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
          pvVar4 = GlobalAlloc(2,(SIZE_T)uVar12);
          local_3c = GlobalLock(pvVar4);
          if (local_3c != (undefined4 *)0x0) {
            uVar12 = __alldiv((SIZE_T)uVar12,local_20._4_4_,*(undefined2 *)(param_1 + 0xb4),0);
            local_20._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
            _SfAudio_FillSilence_12(param_1 + 0xa8,local_3c,(int)uVar12);
            local_20._0_4_ = (int)uVar12 - param_5;
            uVar5 = *(ushort *)(param_1 + 0xb4) * param_5;
            puVar10 = (undefined4 *)
                      ((uint)*(ushort *)(param_1 + 0xb4) * (int)local_20 + (int)local_3c);
            for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *puVar10 = *param_4;
              param_4 = param_4 + 1;
              puVar10 = puVar10 + 1;
            }
            param_5 = param_5 + (int)local_20;
            bVar1 = true;
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined1 *)puVar10 = *(undefined1 *)param_4;
              param_4 = (undefined4 *)((int)param_4 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            *(undefined4 *)(param_1 + 400) = 1;
            goto LAB_011c02b9;
          }
        }
        local_3c = param_4;
        *(undefined4 *)(param_1 + 400) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 400) = 1;
        param_5 = param_5 - (*(int *)(param_1 + 0x180) + uVar8);
        local_3c = (undefined4 *)
                   ((*(int *)(param_1 + 0x180) + uVar8) * (uint)*(ushort *)(param_1 + 0xb4) +
                   (int)param_4);
      }
    }
LAB_011c02b9:
    uVar9 = 0x13;
    param_2 = 0x13;
  }
  else {
    uVar9 = 0x12;
    local_38 = 0x80000000;
    param_2 = 0x12;
  }
  local_20 = CONCAT44(local_20._4_4_,(int)local_20);
  if (param_5 != 0) {
    if (((*(uint *)(param_1 + 0xc) & 0x10) != 0) && (*(int *)(param_1 + 0x1cc) != 0)) {
      iVar7 = *(int *)(param_1 + 0x1b4) + *(int *)(param_1 + 0x1c4) +
              (uint)CARRY4(*(uint *)(param_1 + 0x1b0),*(uint *)(param_1 + 0x1c0));
      if ((*(int *)(param_1 + 0x144) <= iVar7) &&
         ((*(int *)(param_1 + 0x144) < iVar7 ||
          (*(uint *)(param_1 + 0x140) <= *(uint *)(param_1 + 0x1b0) + *(uint *)(param_1 + 0x1c0)))))
      {
        local_20 = CONCAT44(local_20._4_4_,(int)local_20);
        if (*(uint *)(param_1 + 0x1e4) < *(uint *)(param_1 + 0x1c8)) {
          local_20 = 0;
          puVar10 = local_3c;
          do {
            puVar10 = (undefined4 *)((int)puVar10 + (int)local_20);
            uVar8 = *(uint *)(param_1 + 0x1b0);
            uVar5 = *(uint *)(param_1 + 0x158);
            local_18 = uVar8 + *(uint *)(param_1 + 0x1c0);
            local_14 = *(int *)(param_1 + 0x1b4) + *(int *)(param_1 + 0x1c4) +
                       (uint)CARRY4(uVar8,*(uint *)(param_1 + 0x1c0));
            local_10 = uVar5 + param_5;
            iVar7 = *(int *)(param_1 + 0x15c) + (uint)CARRY4(uVar5,param_5);
            if ((iVar7 < local_14) || ((iVar7 <= local_14 && (local_10 < local_18)))) {
              (**(code **)(param_1 + 0xe0))
                        (param_1,param_2,*(undefined4 *)(param_1 + 0xe4),puVar10,local_38,uVar5,
                         *(undefined4 *)(param_1 + 0x15c),param_5,0);
              uVar8 = *(uint *)(param_1 + 0x158);
              *(uint *)(param_1 + 0x158) = uVar8 + param_5;
              *(uint *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + (uint)CARRY4(uVar8,param_5);
              iVar7 = 0;
              uVar3 = param_5;
            }
            else {
              uVar3 = (uVar8 - uVar5) + *(uint *)(param_1 + 0x1c0);
              local_4 = ((*(int *)(param_1 + 0x1b4) - *(int *)(param_1 + 0x15c)) -
                        (uint)(uVar8 < uVar5)) + *(int *)(param_1 + 0x1c4) +
                        (uint)CARRY4(uVar8 - uVar5,*(uint *)(param_1 + 0x1c0));
              (**(code **)(param_1 + 0xe0))
                        (param_1,param_2,*(undefined4 *)(param_1 + 0xe4),puVar10,local_38,uVar5,
                         *(int *)(param_1 + 0x15c),uVar3,0);
              *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x1b0);
              *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x1b4);
              iVar7 = local_4;
            }
            param_5 = param_5 - uVar3;
            lVar13 = __allmul(*(undefined2 *)(param_1 + 0xb4),0,uVar3,iVar7);
            local_20 = lVar13 + local_20;
          } while (param_5 != 0);
        }
        goto LAB_011c0577;
      }
    }
    if ((*(uint *)(param_1 + 0xc) & 4) == 0) {
      iVar7 = *(int *)(param_1 + 0x174);
      uVar8 = *(uint *)(param_1 + 0x170);
      if ((iVar7 < 0) || ((iVar7 < 1 && (uVar8 == 0)))) {
        uVar16 = *(undefined4 *)(param_1 + 0x15c);
        uVar15 = *(undefined4 *)(param_1 + 0x158);
        uVar14 = *(undefined4 *)(param_1 + 0xe4);
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x170);
        if (param_5 <= uVar5) {
          *(uint *)(param_1 + 0x170) = uVar8 - param_5;
          *(uint *)(param_1 + 0x174) = iVar7 - (uint)(uVar8 < param_5);
          local_20 = CONCAT44(local_20._4_4_,(int)local_20);
          goto LAB_011c0577;
        }
        *(undefined4 *)(param_1 + 0x170) = 0;
        local_3c = (undefined4 *)((int)local_3c + *(ushort *)(param_1 + 0xb4) * uVar5);
        uVar15 = *(undefined4 *)(param_1 + 0x158);
        param_5 = param_5 - uVar5;
        uVar16 = *(undefined4 *)(param_1 + 0x15c);
        uVar14 = *(undefined4 *)(param_1 + 0xe4);
        *(undefined4 *)(param_1 + 0x174) = 0;
      }
    }
    else {
      uVar16 = *(undefined4 *)(param_1 + 0x15c);
      uVar15 = *(undefined4 *)(param_1 + 0x158);
      uVar14 = *(undefined4 *)(param_1 + 0xe4);
    }
    (**(code **)(param_1 + 0xe0))(param_1,uVar9,uVar14,local_3c,local_38,uVar15,uVar16,param_5,0);
    uVar8 = *(uint *)(param_1 + 0x158);
    *(uint *)(param_1 + 0x158) = uVar8 + param_5;
    *(uint *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + (uint)CARRY4(uVar8,param_5);
  }
LAB_011c0577:
  if (bVar1) {
    pvVar4 = GlobalHandle(local_3c);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(local_3c);
    GlobalFree(pvVar4);
  }
  return 2;
}


