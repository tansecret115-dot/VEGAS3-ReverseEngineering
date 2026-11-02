/* Module: vegas30.exe
   Function: FUN_0058c8e0
   Address: 0058c8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0058cc26) */
/* WARNING: Removing unreachable block (ram,0x0058ccc7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058c8e0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  uchar *_Source;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int local_16c;
  undefined4 local_164;
  int local_160;
  int local_15c;
  undefined4 local_158;
  undefined2 local_154;
  int local_150;
  undefined8 local_14c;
  int local_144;
  undefined8 local_140;
  int local_138;
  undefined8 local_134;
  uint local_12c;
  int iStack_128;
  undefined8 local_124;
  int local_11c;
  undefined4 uStack_118;
  int local_114;
  int iStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  uchar local_104 [260];
  
  local_144 = 0;
  local_138 = 0;
  FUN_005b83b0(param_1,1);
  pcVar6 = (char *)FUN_005ec620();
  if (pcVar6 != (char *)0x0) {
    iVar7 = 0;
    if ((*pcVar6 != '\0') && (iVar7 = *(int *)(pcVar6 + 8), (*(byte *)(iVar7 + 0x18) & 2) != 2)) {
      bVar2 = *(byte *)(*(int *)(iVar7 + 0x10) + 0x18);
      iVar9 = *(int *)(iVar7 + 0x10);
      while ((bVar2 & 2) != 2) {
        bVar2 = *(byte *)(*(int *)(iVar9 + 0x10) + 0x18);
        iVar7 = iVar9;
        iVar9 = *(int *)(iVar9 + 0x10);
      }
    }
    while( true ) {
      if (*pcVar6 == '\0') {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(pcVar6 + 0xc);
      }
      if (iVar7 == iVar9) break;
      *(uint *)(*(int *)(iVar7 + 4) + 0x134) = *(uint *)(*(int *)(iVar7 + 4) + 0x134) & 0xfffffff7;
      FUN_00436e20();
    }
  }
  local_16c = 0;
  iVar7 = *(int *)param_1[0x77];
  if (0 < iVar7) {
    do {
      iVar9 = *(int *)(*(int *)(param_1[0x77] + 8) + local_16c * 4);
      if (*(int *)(iVar9 + 4) == 2) {
        *(undefined4 *)(iVar9 + 0x3d8) = 0;
        *(undefined4 *)(iVar9 + 0x3dc) = 0;
        if (((*(byte *)(iVar9 + 0x10) & 0x80) != 0) && (*(int *)(iVar9 + 0x36c) != 0)) {
          if (*(int *)(iVar9 + 0x354) != 0) {
            puVar1 = (uint *)(*(int *)(iVar9 + 0x354) + 0x134);
            *puVar1 = *puVar1 | 8;
          }
          *(undefined4 *)(iVar9 + 0x3d8) = 1;
          iVar10 = *(int *)(*(int *)(iVar9 + 0x248) + 0x40);
          if (iVar10 == 0) {
            local_164 = *(undefined4 *)(iVar9 + 0x358);
            local_160 = *(int *)(iVar9 + 0x35c);
            local_15c = *(int *)(iVar9 + 0x360);
            local_158 = *(undefined4 *)(iVar9 + 0x364);
            local_154 = *(undefined2 *)(iVar9 + 0x368);
          }
          else if ((0 < iVar10) && (iVar10 < 4)) {
            local_160 = *(int *)(iVar9 + 0x35c);
            uVar5 = *(ushort *)(iVar9 + 0x366) >> 3;
            local_158 = CONCAT22(*(ushort *)(iVar9 + 0x366),uVar5);
            local_164 = CONCAT22(1,*(undefined2 *)(iVar9 + 0x358));
            local_15c = (uint)uVar5 * local_160;
            local_154 = 0;
          }
          if (*(int *)(iVar9 + 0x3b8) == 0) {
            iStack_110 = *(int *)(iVar9 + 0x3b4);
            local_114 = *(int *)(iVar9 + 0x3b0);
            if ((iStack_110 < 0) || ((iStack_110 < 1 && (local_114 == 0)))) {
              iVar10 = *(int *)(iVar9 + 0x24c);
              if ((iVar10 != 0) && ((-1 < param_5 && ((0 < param_5 || (param_4 != 0)))))) {
                iVar4 = *(int *)(iVar9 + 0x35c);
                uVar3 = *(uint *)(iVar10 + 0x18);
                iVar10 = *(int *)(iVar10 + 0x1c);
                uStack_118 = 0;
                local_12c = uVar3;
                iStack_128 = iVar10;
                local_11c = iVar4;
                lVar14 = ftol();
                local_134 = lVar14;
                lVar14 = ftol();
                local_14c = lVar14 - local_134;
                local_124 = lVar14;
                if (iVar4 == 0) {
                  local_140 = 0;
                  uVar12 = 0;
                  lVar14 = local_14c;
                }
                else {
                  lVar14 = ftol();
                  local_140 = lVar14;
                  uVar12 = ftol();
                  lVar14 = local_14c;
                }
                local_14c._4_4_ = (int)((ulonglong)lVar14 >> 0x20);
                local_14c._0_4_ = (int)lVar14;
                if (CONCAT44(param_5,param_4) <
                    local_140 +
                    CONCAT44((iVar10 - (int)((ulonglong)uVar12 >> 0x20)) -
                             (uint)(uVar3 < (uint)uVar12),uVar3 - (uint)uVar12)) {
                  iVar10 = (int)local_14c + -1;
                  local_14c._4_4_ = local_14c._4_4_ - (uint)((int)local_14c == 0);
                  lVar14 = CONCAT44(local_14c._4_4_,iVar10);
                  if ((local_14c._4_4_ < 1) &&
                     ((local_14c._4_4_ < 0 ||
                      (lVar14 = CONCAT44(local_14c._4_4_,iVar10), iVar10 == 0)))) {
                    lVar14 = 1;
                  }
                }
                local_14c = lVar14;
                lVar14 = __allmul(*(undefined2 *)(iVar9 + 0x364),0,lVar14);
                iVar10 = (int)((ulonglong)(lVar14 + 0x200) >> 0x20);
                if ((iVar10 <= *(int *)(iVar9 + 0x394)) &&
                   ((lVar13 = lVar14 + 0x200, iVar10 < *(int *)(iVar9 + 0x394) ||
                    (lVar13 = lVar14 + 0x200, (uint)(lVar14 + 0x200) < *(uint *)(iVar9 + 0x390)))))
                goto LAB_0058cc99;
              }
            }
            else {
              local_10c = *(undefined4 *)(iVar9 + 0x35c);
              uStack_108 = 0;
              uVar12 = ftol();
              lVar13 = __allmul(uVar12,*(undefined2 *)(iVar9 + 0x364),0);
              lVar13 = lVar13 + 0x200;
              iVar10 = (int)((ulonglong)lVar13 >> 0x20);
              if ((iVar10 <= *(int *)(iVar9 + 0x394)) &&
                 ((iVar10 < *(int *)(iVar9 + 0x394) || ((uint)lVar13 < *(uint *)(iVar9 + 0x390)))))
              {
LAB_0058cc99:
                *(longlong *)(iVar9 + 0x390) = lVar13;
              }
            }
          }
          local_150 = FUN_0058b830(iVar9 + 0x248,1);
          lVar14 = FUN_0058a580(iVar9 + 0x248);
          if (CONCAT44(DAT_006486b4,DAT_006486b0) < lVar14) {
            _Source = (uchar *)(iVar9 + 0x250);
            iVar10 = lstrlenA((LPCSTR)_Source);
            if (3 < iVar10) {
              _mbscpy(local_104,_Source);
              local_104[iVar10 + -2] = '6';
              local_104[iVar10 + -1] = '4';
              iVar10 = FUN_0058c800(iVar9,local_104);
              if (iVar10 != 0) {
                *(undefined4 *)(iVar9 + 0x3dc) = 1;
                _mbscpy(_Source,local_104);
              }
              puVar1 = (uint *)(*(int *)(iVar9 + 0x354) + 0x134);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar9 = *(int *)(iVar9 + 0x354);
          if (iVar9 != 0) {
            *(uint *)(iVar9 + 0x134) = *(uint *)(iVar9 + 0x134) | 8;
          }
        }
      }
      local_16c = local_16c + 1;
    } while (local_16c < iVar7);
  }
  DAT_0064767c = DAT_0064767c | 0x100;
  FUN_005b84d0(param_1,1);
  FUN_004011a0();
  if (((DAT_0064943c != 0) && (param_3 == 0)) && (DAT_0064b150 == 0)) {
    FUN_00599440(DAT_00647624,param_1);
    local_144 = 1;
  }
  FUN_005b83b0(param_1,1);
  local_16c = 0;
  iVar7 = *(int *)param_1[0x77];
  if (0 < iVar7) {
    do {
      iVar9 = *(int *)(*(int *)(param_1[0x77] + 8) + local_16c * 4);
      if ((*(int *)(iVar9 + 4) == 2) && (*(int *)(iVar9 + 0x3d8) != 0)) {
        iVar10 = *(int *)(*(int *)(iVar9 + 0x248) + 0x40);
        if (iVar10 == 0) {
          local_164 = *(undefined4 *)(iVar9 + 0x358);
          local_160 = *(int *)(iVar9 + 0x35c);
          local_15c = *(int *)(iVar9 + 0x360);
          local_158 = *(undefined4 *)(iVar9 + 0x364);
          local_154 = *(undefined2 *)(iVar9 + 0x368);
        }
        else if ((0 < iVar10) && (iVar10 < 4)) {
          local_160 = *(int *)(iVar9 + 0x35c);
          local_164 = CONCAT22(1,*(undefined2 *)(iVar9 + 0x358));
          uVar5 = *(ushort *)(iVar9 + 0x366) >> 3;
          local_158 = CONCAT22(*(ushort *)(iVar9 + 0x366),uVar5);
          local_15c = (uint)uVar5 * local_160;
          local_154 = 0;
        }
        bVar11 = false;
        if ((local_144 != 0) && (*(int *)(iVar9 + 0x354) != 0)) {
          _mbscpy(local_104,(uchar *)(param_1 + 0x120));
          _SfAddSlashToPathName_8(local_104,0x104);
          _mbscat(local_104,(uchar *)(*(int *)(iVar9 + 0x354) + 4));
          iVar10 = lstrcmpA((LPCSTR)(*(int *)(iVar9 + 0x354) + 0x170),(LPCSTR)local_104);
          if (iVar10 != 0) {
            *(uint *)(*(int *)(iVar9 + 0x354) + 0x134) =
                 *(uint *)(*(int *)(iVar9 + 0x354) + 0x134) & 0xfffffffe;
            FUN_005f0120(0);
            iVar10 = FUN_0058c800(iVar9,local_104);
            if (iVar10 != 0) {
              bVar11 = true;
            }
          }
        }
        if (*(int *)(iVar9 + 0x354) != 0) {
          iVar10 = FUN_005f12a0(&local_164);
          local_150 = iVar10;
          if ((*(byte *)(*(int *)(iVar9 + 0x354) + 0x134) & 4) == 0) {
            FUN_0058d4a0(iVar9,param_3);
            local_138 = 1;
            if (((-1 < iVar10) && (!bVar11)) && (*(int *)(iVar9 + 0x3dc) == 0)) {
              local_150 = FUN_005effc0(0);
            }
          }
          else {
            FUN_0058dcb0(iVar9,*(undefined4 *)(iVar9 + 0x24c));
          }
        }
        iVar10 = 0;
        if (*(int **)(iVar9 + 0x24) != (int *)0x0) {
          iVar10 = **(int **)(iVar9 + 0x24);
        }
        while (iVar10 = iVar10 + -1, -1 < iVar10) {
          iVar4 = *(int *)(*(int *)(*(int *)(iVar9 + 0x24) + 8) + iVar10 * 4);
          if ((*(uint *)(iVar4 + 0x10) & 0x40000000) == 0) {
LAB_0058d008:
            *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0xbfffffff;
          }
          else {
            iVar8 = FUN_005c68e0(iVar4);
            if (iVar8 != 0) goto LAB_0058d008;
            FUN_005c8970(param_1,iVar9,iVar10,0,1);
            if (iVar9 != 0) {
              *(uint *)(iVar9 + 0x10) = *(uint *)(iVar9 + 0x10) | 0x200000;
              *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
            }
          }
        }
        if (param_2 != 0) {
          local_150 = FUN_0058b9e0(iVar9);
        }
      }
      local_16c = local_16c + 1;
    } while (local_16c < iVar7);
  }
  DAT_0064761c = DAT_0064761c & 0xfffff7ff;
  DAT_0064767c = DAT_0064767c | 0x4100;
  _DAT_0064b4d8 = 0;
  FUN_005b84d0(param_1,1);
  FUN_004011a0();
  FUN_00469280(DAT_00647630);
  if (param_3 != 0) {
    FUN_004a4c70(DAT_00647630);
  }
  if (local_138 != 0) {
    FUN_004f04e0(param_1 + 0x120);
  }
  return local_150;
}


