/* Module: vegas30.exe
   Function: FUN_0050e800
   Address: 0050e800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0050ebe6) */
/* WARNING: Removing unreachable block (ram,0x0050ec65) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050e800(HDC param_1,undefined4 param_2,int *param_3,uint param_4,int param_5)

{
  double dVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  HPEN h;
  HGDIOBJ pvVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  float10 fVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 local_ec;
  int local_e4;
  double local_dc;
  undefined8 local_d4;
  int local_cc;
  int *local_c8;
  int local_c4;
  int local_c0;
  int iStack_bc;
  undefined8 local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  int local_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  int local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  byte local_64 [8];
  undefined4 local_5c [16];
  undefined1 local_1c [28];
  
  local_a8 = *param_3;
  local_6c = 0x15;
  local_68 = 0x15;
  piVar4 = (int *)FUN_00522a00();
  iVar13 = 0;
  iVar6 = *piVar4;
  local_c4 = iVar6 + -1;
  dVar1 = (double)local_c4;
  dVar19 = dVar1;
  if (0 < iVar6) {
    iVar14 = piVar4[2];
    iVar11 = 0;
    do {
      iVar5 = iVar14;
      if ((param_5 < *(int *)(iVar5 + 8)) ||
         ((param_5 <= *(int *)(iVar5 + 8) && (param_4 <= *(uint *)(iVar5 + 4))))) {
        uVar12 = *(uint *)(iVar5 + 4);
        if ((param_4 == uVar12) && (param_5 == *(int *)(iVar5 + 8))) {
          dVar19 = (double)iVar13;
        }
        else if (iVar11 != 0) {
          uVar9 = *(uint *)(iVar11 + 4);
          local_ec = CONCAT44((param_5 - *(int *)(iVar11 + 8)) - (uint)(param_4 < uVar9),
                              param_4 - uVar9);
          dVar19 = (double)local_ec;
          local_ec = CONCAT44((*(int *)(iVar5 + 8) - *(int *)(iVar11 + 8)) - (uint)(uVar12 < uVar9),
                              uVar12 - uVar9);
          local_cc = iVar13 + -1;
          dVar19 = (double)local_cc + dVar19 / (double)local_ec;
        }
        break;
      }
      iVar13 = iVar13 + 1;
      iVar14 = iVar5 + piVar4[1];
      iVar11 = iVar5;
    } while (iVar13 < iVar6);
  }
  local_d4 = dVar19 - _DAT_00612918;
  if (local_d4 < _DAT_00610fd8) {
    local_d4 = 0.0;
  }
  if (dVar19 + _DAT_00612918 <= dVar1) {
    dVar1 = dVar19 + _DAT_00612918;
  }
  if (local_d4 != dVar1) {
    local_c8 = piVar4;
    iVar6 = ftol();
    local_cc = iVar6;
    iVar13 = ftol();
    iVar6 = piVar4[1] * iVar6 + piVar4[2];
    iVar14 = piVar4[1] * iVar13 + piVar4[2];
    local_74 = iVar13 + 1;
    local_c0 = *(undefined4 *)(iVar6 + 4);
    iStack_bc = *(undefined4 *)(iVar6 + 8);
    local_90 = ftol();
    uVar9 = (uint)local_90;
    local_c0 = *(int *)(iVar14 + 4);
    iStack_bc = *(int *)(iVar14 + 8);
    local_d4 = (double)ftol();
    iVar14 = (int)((ulonglong)local_d4 >> 0x20);
    uVar12 = (uint)(SUB84(local_d4,0) < uVar9);
    iVar6 = iVar14 - local_90._4_4_;
    iVar11 = iVar6 - uVar12;
    local_98 = (double)CONCAT44(iVar11,(undefined4)local_98);
    if ((-1 < iVar11) &&
       ((iVar11 != 0 && SBORROW4(iVar14,local_90._4_4_) == SBORROW4(iVar6,uVar12) ||
        (SUB84(local_d4,0) != uVar9)))) {
      local_98 = floor((double)local_90 * _DAT_006106c8 * _DAT_0061a478);
      ceil((double)(longlong)local_d4 * _DAT_006106c8 * _DAT_0061a478);
      lVar17 = ftol();
      local_ac = 0;
      local_e4 = 0;
      local_b8 = -NAN;
      local_a4 = 1;
      local_b0 = -1;
      local_88 = -1;
      local_dc = (double)ftol();
      while( true ) {
        bVar2 = false;
        puVar15 = local_5c;
        for (iVar6 = 0x17; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        lVar18 = ftol();
        iVar6 = FUN_0050e7b0(local_c8,lVar18);
        if (iVar6 != local_88) {
          if (local_88 == -1) {
            bVar2 = true;
          }
          else {
            iVar6 = local_88 + 1;
            if (local_c4 <= local_88 + 1) {
              iVar6 = local_c4;
            }
            local_ac = 0;
            local_e4 = 0;
            local_a4 = 1;
            if ((local_cc < iVar6) &&
               (*(int *)((iVar6 + -1) * local_c8[1] + 0xc + local_c8[2]) == 1)) {
              bVar2 = true;
            }
          }
          dVar19 = (double)ftol();
          local_dc = dVar19;
          lVar18 = ftol();
        }
        if ((iVar13 <= iVar6) && (lVar17 <= (longlong)local_dc)) break;
        lVar20 = lVar18;
        local_88 = iVar6;
        uVar7 = FUN_00522a00(0);
        FUN_005a69e0(local_5c,0,0,0,&LAB_0050af90,&LAB_0050afa0,&LAB_0050afe0,uVar7,lVar20);
        FUN_0050d7f0(&local_a0,local_1c,*(undefined4 *)(local_a8 + 0x98),&local_6c);
        if (lVar18 < CONCAT44(param_5,param_4)) {
          local_84 = param_4 - (uint)local_90;
          iStack_80 = (param_5 - local_90._4_4_) - (uint)(param_4 < (uint)local_90);
          if (local_84 != 0 || iStack_80 != 0) {
            local_7c = param_4 - (uint)lVar18;
            iStack_78 = (param_5 - (int)((ulonglong)lVar18 >> 0x20)) -
                        (uint)(param_4 < (uint)lVar18);
          }
        }
        else {
          local_c0 = (uint)local_d4 - param_4;
          iStack_bc = (local_d4._4_4_ - param_5) - (uint)((uint)local_d4 < param_4);
          if (local_c0 != 0 || iStack_bc != 0) {
            local_98 = (double)(lVar18 - CONCAT44(param_5,param_4));
          }
        }
        if (bVar2) {
          MoveToEx(param_1,local_a0,local_9c,(LPPOINT)0x0);
        }
        else {
          bVar3 = ftol();
          local_64[0] = bVar3;
          cVar10 = -0x1a - (char)((uint)bVar3 * 0xaa >> 8);
          h = CreatePen(0,2,(uint)CONCAT21(CONCAT11((char)((uint)bVar3 * 0x19 >> 8) + -0x1a,cVar10),
                                           cVar10));
          pvVar8 = SelectObject(param_1,h);
          LineTo(param_1,local_a0,local_9c);
          pvVar8 = SelectObject(param_1,pvVar8);
          DeleteObject(pvVar8);
        }
        uVar12 = (int)local_b8 - local_a0 >> 0x1f;
        if (((int)(((int)local_b8 - local_a0 ^ uVar12) - uVar12) < 4) &&
           (uVar12 = local_b8._4_4_ - local_9c >> 0x1f,
           (int)((local_b8._4_4_ - local_9c ^ uVar12) - uVar12) < 4)) {
          if (local_b0 == 1) {
            local_b0 = 1;
            local_e4 = local_e4 + 1;
          }
          else {
            local_ac = 0;
            local_e4 = 0;
            local_b0 = 1;
          }
        }
        else {
          if (local_b0 == 0) {
            local_e4 = local_e4 + -1;
          }
          else {
            local_ac = 0;
            local_e4 = 0;
          }
          local_b0 = 0;
        }
        local_ac = local_ac + local_e4;
        local_a4 = local_ac + local_a4;
        if (local_a4 < 2) {
          local_a4 = 1;
        }
        local_dc = (double)((longlong)local_dc + (longlong)local_a4);
        local_b8 = (double)CONCAT44(local_9c,local_a0);
      }
      iVar6 = local_74;
      if (local_c4 <= local_74) {
        iVar6 = local_c4;
      }
      iVar13 = local_cc;
      if (local_cc <= iVar6) {
        do {
          puVar15 = local_5c;
          for (iVar14 = 0x17; iVar14 != 0; iVar14 = iVar14 + -1) {
            *puVar15 = 0;
            puVar15 = puVar15 + 1;
          }
          uVar12 = *(uint *)(local_c8[1] * iVar13 + 4 + local_c8[2]);
          iVar14 = *(int *)(local_c8[1] * iVar13 + 8 + local_c8[2]);
          uVar9 = uVar12;
          iVar11 = iVar14;
          if (iVar13 == 0) {
            uVar9 = uVar12 + 1;
            iVar11 = iVar14 + (uint)(0xfffffffe < uVar12);
          }
          if (iVar13 == local_c4) {
            uVar9 = uVar12 - 1;
            iVar11 = iVar14 - (uint)(uVar12 == 0);
          }
          uVar21 = CONCAT44(iVar11,uVar9);
          uVar7 = FUN_00522a00(0);
          FUN_005a69e0(local_5c,&local_dc,&local_74,local_64,&LAB_0050af90,&LAB_0050afa0,0,uVar7,
                       uVar21);
          FUN_0050d7f0(&local_a0,local_1c,*(undefined4 *)(local_a8 + 0x98),&local_6c);
          local_b8 = _DAT_00610fd8;
          if ((param_5 < iVar14) || ((param_5 <= iVar14 && (param_4 <= uVar12)))) {
            local_c0 = (uint)local_d4 - param_4;
            iStack_bc = (local_d4._4_4_ - param_5) - (uint)((uint)local_d4 < param_4);
            if (local_c0 != 0 || iStack_bc != 0) {
              local_7c = uVar12 - param_4;
              iStack_78 = (iVar14 - param_5) - (uint)(uVar12 < param_4);
              dVar19 = (double)CONCAT44(iStack_78,local_7c);
              lVar17 = CONCAT44(iStack_bc,local_c0);
              goto LAB_0050efde;
            }
          }
          else {
            local_84 = param_4 - (uint)local_90;
            iStack_80 = (param_5 - local_90._4_4_) - (uint)(param_4 < (uint)local_90);
            if (local_84 != 0 || iStack_80 != 0) {
              local_98 = (double)CONCAT44((param_5 - iVar14) - (uint)(param_4 < uVar12),
                                          param_4 - uVar12);
              lVar17 = CONCAT44(iStack_80,local_84);
              dVar19 = local_98;
LAB_0050efde:
              dVar19 = (double)(longlong)dVar19 / (double)lVar17;
              if ((_DAT_00610fd8 <= dVar19) && (local_b8 = dVar19, _DAT_006106d0 < dVar19)) {
                local_b8 = _DAT_006106d0;
              }
            }
          }
          fVar16 = (float10)fpatan(-(float10)local_dc,-(float10)(double)CONCAT44(uStack_70,local_74)
                                  );
          local_b8 = _DAT_0061a468 - local_b8;
          if (_DAT_006106d0 <= local_b8) {
            local_b8 = 1.0;
          }
          FUN_0050e5b0(param_1,local_a0,local_9c,&LAB_004b4bc8,4,(int)local_b8,local_b8._4_4_,
                       (double)fVar16,1);
          iVar13 = iVar13 + 1;
          if (iVar6 < iVar13) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}


