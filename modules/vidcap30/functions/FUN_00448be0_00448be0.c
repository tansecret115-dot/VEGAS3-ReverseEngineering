/* Module: vidcap30.exe
   Function: FUN_00448be0
   Address: 00448be0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00449b3d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00448be0(int param_1,int *param_2)

{
  uchar uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uchar *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined **ppuVar15;
  undefined4 uVar16;
  uint local_92c;
  int *local_928;
  undefined8 local_924;
  undefined8 local_91c;
  int local_914;
  longlong local_910;
  undefined8 local_908;
  undefined4 local_900;
  undefined4 uStack_8fc;
  double local_8f8;
  int local_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  double local_8e0;
  double local_8d8;
  uint local_8d0;
  int local_8cc;
  int iStack_8c8;
  undefined4 uStack_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  uchar local_8b8 [260];
  uchar local_7b4 [260];
  undefined1 auStack_6b0 [52];
  undefined1 auStack_67c [52];
  CHAR local_648 [199];
  undefined1 uStack_581;
  CHAR local_580 [199];
  undefined1 uStack_4b9;
  undefined1 local_4b8 [200];
  undefined1 local_3f0 [200];
  WCHAR local_328 [200];
  WCHAR local_198 [202];
  
  FUN_0046ed20();
  local_914 = 0;
  local_928 = (int *)0x0;
  _mbscpy(local_8b8,(uchar *)(param_2 + 3));
  puVar5 = local_8b8;
  uVar1 = local_8b8[0];
  while (uVar1 != '\0') {
    uVar4 = _mbctoupper((int)(char)uVar1);
    *puVar5 = (uchar)uVar4;
    puVar5 = (uchar *)CharNextA((LPCSTR)puVar5);
    uVar1 = *puVar5;
  }
  local_8d0 = (uint)(param_2[2] != 1);
  local_8cc = *(int *)*param_2;
  local_91c = 0;
  local_910 = 0;
  local_908 = 0;
  local_8f8 = 0.0;
  local_8d8 = 0.0;
  local_8e0 = 0.0;
  local_924 = 0;
  local_900 = 0;
  uStack_8fc = 0;
  local_92c = 0;
  local_8ec = 0;
  if (0 < local_8cc) {
    do {
      if (local_92c != 0) break;
      iVar6 = 0;
      switch(**(undefined4 **)(*(int *)(*param_2 + 8) + local_8ec * 4)) {
      case 0:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          _mbscpy(local_7b4,*(uchar **)(param_1 + 0x10));
          iVar6 = 1;
        }
        break;
      case 1:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          _mbscpy(local_7b4,*(uchar **)(*(int *)(param_1 + 4) + 0xc));
          iVar6 = 1;
        }
        break;
      case 2:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          FUN_0045aec0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),local_7b4,
                       0x104);
          iVar6 = 1;
        }
        else {
          uVar12 = FUN_0045ae30(local_8b8,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44));
          local_91c = uVar12;
          lVar13 = FUN_0045ae30(param_2 + 0x44,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44));
          local_910 = lVar13;
          uVar12 = FUN_0045ae30(param_2 + 0x85,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44));
          local_924 = *(longlong *)(param_1 + 0x20);
          iVar6 = 2;
          local_908 = uVar12;
        }
        break;
      case 3:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          FUN_0045aec0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),local_7b4,
                       0x104);
          iVar6 = 1;
        }
        else {
          uVar12 = FUN_0045ae30(local_8b8,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44));
          local_91c = uVar12;
          lVar13 = FUN_0045ae30(param_2 + 0x44,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44));
          local_910 = lVar13;
          uVar12 = FUN_0045ae30(param_2 + 0x85,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44));
          local_924 = *(longlong *)(param_1 + 0x20);
          iVar6 = 2;
          local_908 = uVar12;
        }
        break;
      case 4:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          uVar7 = *(undefined4 *)(param_1 + 0x44);
          uVar14 = *(undefined4 *)(param_1 + 0x40);
          puVar5 = local_7b4;
          uVar16 = 0x104;
          uVar12 = FUN_004443a0(param_1);
          FUN_0045aec0(uVar12,uVar14,uVar7,puVar5,uVar16);
          iVar6 = 1;
        }
        else {
          uVar12 = FUN_0045ae30(local_8b8,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44));
          local_91c = uVar12;
          lVar13 = FUN_0045ae30(param_2 + 0x44,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44));
          local_910 = lVar13;
          uVar12 = FUN_0045ae30(param_2 + 0x85,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x44));
          local_908 = uVar12;
          lVar13 = FUN_004443a0(param_1);
          iVar6 = 2;
          local_924 = lVar13;
        }
        break;
      case 5:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          FUN_0045b130(*(undefined4 *)(param_1 + 0x14),local_7b4,0x104);
          iVar6 = 1;
        }
        else {
          uVar12 = _SfTextToLongLongToken_8(local_8b8,0);
          local_91c = uVar12;
          lVar13 = _SfTextToLongLongToken_8(param_2 + 0x44,0);
          local_910 = lVar13;
          uVar12 = _SfTextToLongLongToken_8(param_2 + 0x85,0);
          local_908 = uVar12;
          lVar13 = FUN_0045b190(*(undefined4 *)(param_1 + 0x14));
          iVar6 = 2;
          local_924 = lVar13;
        }
        break;
      case 6:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          _mbscpy(local_7b4,*(uchar **)(param_1 + 0x14));
          iVar6 = 1;
        }
        break;
      case 7:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          _mbscpy(local_7b4,*(uchar **)(param_1 + 0x18));
          iVar6 = 1;
        }
        break;
      case 8:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          _mbscpy(local_7b4,*(uchar **)(param_1 + 0x3c));
          iVar6 = 1;
        }
        break;
      case 9:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          FUN_0044e350(param_1,local_7b4,0x104);
          iVar6 = 1;
        }
        break;
      case 10:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          uVar7 = *(undefined4 *)(param_1 + 100);
          uVar14 = *(undefined4 *)(param_1 + 0x60);
          ppuVar15 = &PTR_DAT_0058badc;
          goto LAB_0044947a;
        }
        uVar12 = _SfTextToLongLongToken_8(local_8b8,0);
        local_91c = uVar12;
        lVar13 = _SfTextToLongLongToken_8(param_2 + 0x44,0);
        local_910 = lVar13;
        uVar12 = _SfTextToLongLongToken_8(param_2 + 0x85,0);
        iVar6 = 2;
        local_908 = uVar12;
        local_924 = *(longlong *)(param_1 + 0x60);
        break;
      case 0xb:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          SfPrintF(local_7b4,&PTR_DAT_0058badc,*(undefined4 *)(param_1 + 0x68),
                   *(undefined4 *)(param_1 + 0x6c));
          iVar6 = 1;
        }
        else {
          uVar12 = _SfTextToLongLongToken_8(local_8b8,0);
          local_91c = uVar12;
          lVar13 = _SfTextToLongLongToken_8(param_2 + 0x44,0);
          local_910 = lVar13;
          uVar12 = _SfTextToLongLongToken_8(param_2 + 0x85,0);
          iVar6 = 2;
          local_908 = uVar12;
          local_924 = *(longlong *)(param_1 + 0x68);
        }
        break;
      case 0xc:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          FUN_0044e4b0(param_1,local_7b4,0x104);
          iVar6 = 1;
        }
        break;
      case 0xd:
        if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
          iVar6 = FUN_0046fdd0(*(undefined4 *)(param_1 + 0x14),&local_914,0,0);
          if (-1 < iVar6) {
            iVar6 = FUN_004713e0(&local_928);
            if (-1 < iVar6) {
              iVar6 = FUN_004715a0(2);
              if (iVar6 != 0) {
                iVar8 = FUN_00474910(local_4b8,200);
                if (iVar8 < 0) {
                  local_4b8[0] = 0;
                }
                local_580[0] = '\0';
                iVar8 = (**(code **)(*local_928 + 0x14))
                                  (local_928,local_328,200,*(undefined4 *)(iVar6 + 0x10),1);
                if (-1 < iVar8) {
                  if ((&stack0x00000000 == (undefined1 *)0x328) || (local_328[0] != L'\0')) {
                    WideCharToMultiByte(0,0,local_328,-1,local_580,200,(LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  else if (&stack0x00000000 != (undefined1 *)0x580) {
                    local_580[0] = '\0';
                  }
                  uStack_4b9 = 0;
                }
                uStack_8e8 = *(undefined4 *)(iVar6 + 0x48);
                uStack_8e4 = *(undefined4 *)(iVar6 + 0x4c);
                if (_DAT_00589f10 == *(double *)(iVar6 + 0x48)) {
                  SfPrintF(local_7b4,&DAT_00586b68,local_4b8);
                }
                else {
                  FUN_0045aec0(*(undefined4 *)(iVar6 + 0x80),*(undefined4 *)(iVar6 + 0x84),
                               uStack_8e8,uStack_8e4,auStack_67c,0x32);
                  SfPrintF(local_7b4,"%s$, $.3f fps$, %s$, %s",local_4b8,
                           *(undefined4 *)(iVar6 + 0x48),*(undefined4 *)(iVar6 + 0x4c),auStack_67c,
                           local_580);
                }
              }
LAB_00448fec:
              if (local_928 != (int *)0x0) {
                (**(code **)(*local_928 + 8))(local_928);
              }
              local_928 = (int *)0x0;
            }
LAB_00449002:
            local_914 = 0;
            iVar6 = 1;
            break;
          }
        }
        goto LAB_0044961e;
      case 0xe:
        if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
          iVar6 = FUN_0046fdd0(*(undefined4 *)(param_1 + 0x14),&local_914,0,0);
          if (-1 < iVar6) {
            iVar6 = FUN_004713e0(&local_928);
            if (-1 < iVar6) {
              iVar6 = FUN_004715a0(1);
              if (iVar6 != 0) {
                iVar8 = FUN_00474910(local_3f0,200);
                if (iVar8 < 0) {
                  local_3f0[0] = 0;
                }
                local_648[0] = '\0';
                iVar8 = (**(code **)(*local_928 + 0x14))
                                  (local_928,local_198,200,*(undefined4 *)(iVar6 + 0x10),1);
                if (-1 < iVar8) {
                  if ((&stack0x00000000 == (undefined1 *)0x198) || (local_198[0] != L'\0')) {
                    WideCharToMultiByte(0,0,local_198,-1,local_648,200,(LPCSTR)0x0,(LPBOOL)0x0);
                  }
                  else if (&stack0x00000000 != (undefined1 *)0x648) {
                    local_648[0] = '\0';
                  }
                  uStack_581 = 0;
                }
                iVar6 = *(int *)(*(int *)(iVar6 + 0x2c) + 4);
                if (iVar6 == 0) {
                  uVar12 = 0;
                }
                else {
                  uStack_8c4 = 0;
                  iStack_8c8 = iVar6;
                  uVar12 = ftol();
                }
                _SfNanoTimeToTextEx_20(auStack_6b0,&DAT_005bb810,uVar12,2);
                SfPrintF(local_7b4,"%s$, %s$, %s",local_3f0,auStack_6b0,local_648);
              }
              goto LAB_00448fec;
            }
            goto LAB_00449002;
          }
        }
        goto LAB_0044961e;
      case 0xf:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          uVar7 = FUN_00443780(*(undefined4 *)(param_1 + 4));
LAB_00449608:
          SfPrintF(local_7b4,&PTR_DAT_0058badc,uVar7);
          goto LAB_0044961e;
        }
        uVar12 = _SfTextToLongLongToken_8(local_8b8,0);
        local_91c = uVar12;
        lVar13 = _SfTextToLongLongToken_8(param_2 + 0x44,0);
        local_910 = lVar13;
        uVar12 = _SfTextToLongLongToken_8(param_2 + 0x85,0);
        local_908 = uVar12;
        iVar8 = FUN_00443780(*(undefined4 *)(param_1 + 4));
        iVar6 = 2;
        local_924 = (longlong)iVar8;
        break;
      case 0x10:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          uVar7 = FUN_004437a0(*(undefined4 *)(param_1 + 4));
          goto LAB_00449608;
        }
        uVar12 = _SfTextToLongLongToken_8(local_8b8,0);
        local_91c = uVar12;
        lVar13 = _SfTextToLongLongToken_8(param_2 + 0x44,0);
        local_910 = lVar13;
        uVar12 = _SfTextToLongLongToken_8(param_2 + 0x85,0);
        local_908 = uVar12;
        iVar8 = FUN_004437a0(*(undefined4 *)(param_1 + 4));
        iVar6 = 2;
        local_924 = (longlong)iVar8;
        break;
      case 0x11:
        if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
          iVar6 = FUN_0046fdd0(*(undefined4 *)(param_1 + 0x14),&local_914,0,0);
          if (-1 < iVar6) {
            local_8c0 = *(undefined4 *)(local_914 + 300);
            local_8bc = *(undefined4 *)(local_914 + 0x130);
            FUN_0045b3a0(&local_8c0,local_7b4,0x104);
            local_914 = 0;
            iVar6 = 1;
            break;
          }
        }
LAB_0044961e:
        iVar6 = 1;
        break;
      case 0x12:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          FUN_0045b3a0(param_1 + 0x7c,local_7b4,0x104);
          iVar6 = 1;
        }
        break;
      case 0x13:
        if ((param_2[2] == 0) || (param_2[2] == 1)) {
          SfPrintF(local_7b4,&DAT_0058bad4,*(undefined4 *)(param_1 + 0x70),
                   *(undefined4 *)(param_1 + 0x74));
          iVar6 = 1;
        }
        else {
          fVar11 = (float10)_SfTextToDoubleToken_8(local_8b8,0);
          local_8f8 = (double)fVar11;
          fVar11 = (float10)_SfTextToDoubleToken_8(param_2 + 0x44,0);
          local_8d8 = (double)fVar11;
          fVar11 = (float10)_SfTextToDoubleToken_8(param_2 + 0x85,0);
          local_900 = *(undefined4 *)(param_1 + 0x70);
          uStack_8fc = *(undefined4 *)(param_1 + 0x74);
LAB_00449764:
          local_8e0 = (double)fVar11;
          iVar6 = 4;
        }
        break;
      case 0x14:
        if ((param_2[2] != 0) && (param_2[2] != 1)) {
          fVar11 = (float10)_SfTextToDoubleToken_8(local_8b8,0);
          local_8f8 = (double)fVar11;
          fVar11 = (float10)_SfTextToDoubleToken_8(param_2 + 0x44,0);
          local_8d8 = (double)fVar11;
          fVar11 = (float10)_SfTextToDoubleToken_8(param_2 + 0x85,0);
          local_900 = *(undefined4 *)(param_1 + 0x40);
          uStack_8fc = *(undefined4 *)(param_1 + 0x44);
          goto LAB_00449764;
        }
        uVar7 = *(undefined4 *)(param_1 + 0x44);
        uVar14 = *(undefined4 *)(param_1 + 0x40);
        ppuVar15 = (undefined **)&DAT_0058bad4;
LAB_0044947a:
        SfPrintF(local_7b4,ppuVar15,uVar14,uVar7);
        iVar6 = 1;
      }
      if (iVar6 == 1) {
        puVar5 = local_7b4;
        uVar1 = local_7b4[0];
        while (uVar1 != '\0') {
          uVar4 = _mbctoupper((int)(char)uVar1);
          *puVar5 = (uchar)uVar4;
          puVar5 = (uchar *)CharNextA((LPCSTR)puVar5);
          uVar1 = *puVar5;
        }
        puVar5 = _mbsstr(local_7b4,local_8b8);
        local_92c = (uint)(puVar5 != (uchar *)0x0);
        lVar13 = local_924;
        uVar12 = local_91c;
        uVar2 = local_908;
      }
      else if (iVar6 == 2) {
        iVar6 = param_2[2];
        if (iVar6 == 2) {
          puVar5 = local_8b8;
          bVar10 = false;
          uVar1 = local_8b8[0];
          while (lVar13 = local_924, uVar12 = local_91c, uVar1 != '\0') {
            iVar6 = _ismbcdigit((int)(char)*puVar5);
            if (iVar6 != 0) {
              bVar10 = true;
              lVar13 = local_924;
              uVar12 = local_91c;
              break;
            }
            iVar6 = _ismbcspace((int)(char)*puVar5);
            lVar13 = local_924;
            uVar12 = local_91c;
            if (iVar6 != 0) break;
            puVar5 = (uchar *)CharNextA((LPCSTR)puVar5);
            uVar1 = *puVar5;
          }
          local_91c._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
          local_91c._0_4_ = (uint)uVar12;
          local_924._4_4_ = (int)((ulonglong)lVar13 >> 0x20);
          local_924._0_4_ = (uint)lVar13;
          uVar2 = local_908;
          if (((&stack0x00000000 != (undefined1 *)0x928) && (bVar10)) && (*puVar5 != '\0')) {
            if (local_91c._4_4_ < local_924._4_4_) goto LAB_00449aaa;
            if (local_924._4_4_ < local_91c._4_4_) {
LAB_00449a9d:
              local_92c = 1;
            }
            else {
              if ((uint)local_91c <= (uint)local_924) goto LAB_00449aaa;
              local_92c = 1;
            }
          }
        }
        else if (iVar6 == 3) {
          puVar5 = local_8b8;
          bVar10 = false;
          uVar1 = local_8b8[0];
          while (lVar13 = local_924, uVar12 = local_91c, uVar1 != '\0') {
            iVar6 = _ismbcdigit((int)(char)*puVar5);
            if (iVar6 != 0) {
              bVar10 = true;
              lVar13 = local_924;
              uVar12 = local_91c;
              break;
            }
            iVar6 = _ismbcspace((int)(char)*puVar5);
            lVar13 = local_924;
            uVar12 = local_91c;
            if (iVar6 != 0) break;
            puVar5 = (uchar *)CharNextA((LPCSTR)puVar5);
            uVar1 = *puVar5;
          }
          local_91c._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
          local_91c._0_4_ = (uint)uVar12;
          local_924._4_4_ = (int)((ulonglong)lVar13 >> 0x20);
          local_924._0_4_ = (uint)lVar13;
          uVar2 = local_908;
          if (((&stack0x00000000 != (undefined1 *)0x928) && (bVar10)) && (*puVar5 != '\0')) {
            if (local_91c._4_4_ <= local_924._4_4_) {
              if (local_91c._4_4_ < local_924._4_4_) goto LAB_00449a9d;
              if ((uint)local_91c < (uint)local_924) {
                local_92c = 1;
                goto LAB_00449d1a;
              }
            }
            goto LAB_00449aaa;
          }
        }
        else if (iVar6 == 5) {
          piVar9 = param_2 + 0x85;
          bVar10 = false;
          cVar3 = (char)param_2[0x85];
          while (lVar13 = local_924, uVar12 = local_91c, uVar2 = local_908, cVar3 != '\0') {
            iVar6 = _ismbcdigit((int)cVar3);
            if (iVar6 != 0) {
              bVar10 = true;
              lVar13 = local_924;
              uVar12 = local_91c;
              uVar2 = local_908;
              break;
            }
            iVar6 = _ismbcspace((int)(char)*piVar9);
            lVar13 = local_924;
            uVar12 = local_91c;
            uVar2 = local_908;
            if (iVar6 != 0) break;
            piVar9 = (int *)CharNextA((LPCSTR)piVar9);
            cVar3 = (char)*piVar9;
          }
          local_908._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
          local_908._0_4_ = (uint)uVar2;
          local_924._4_4_ = (int)((ulonglong)lVar13 >> 0x20);
          local_924._0_4_ = (uint)lVar13;
          if (((&stack0x00000000 != (undefined1 *)0x928) && (bVar10)) && ((char)*piVar9 != '\0')) {
            if ((local_910 < lVar13) && (local_924._4_4_ <= local_908._4_4_)) {
              if (local_924._4_4_ < local_908._4_4_) goto LAB_00449a9d;
              if ((uint)local_924 < (uint)local_908) {
                local_92c = 1;
                goto LAB_00449d1a;
              }
            }
            goto LAB_00449aaa;
          }
        }
        else {
          puVar5 = local_8b8;
          bVar10 = false;
          uVar1 = local_8b8[0];
          while (lVar13 = local_924, uVar12 = local_91c, uVar1 != '\0') {
            iVar6 = _ismbcdigit((int)(char)*puVar5);
            if (iVar6 != 0) {
              bVar10 = true;
              lVar13 = local_924;
              uVar12 = local_91c;
              break;
            }
            iVar6 = _ismbcspace((int)(char)*puVar5);
            lVar13 = local_924;
            uVar12 = local_91c;
            if (iVar6 != 0) break;
            puVar5 = (uchar *)CharNextA((LPCSTR)puVar5);
            uVar1 = *puVar5;
          }
          local_91c._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
          local_91c._0_4_ = (uint)uVar12;
          local_924._4_4_ = (int)((ulonglong)lVar13 >> 0x20);
          local_924._0_4_ = (uint)lVar13;
          uVar2 = local_908;
          if (((&stack0x00000000 != (undefined1 *)0x928) && (bVar10)) && (*puVar5 != '\0')) {
            if ((uint)local_91c == (uint)local_924) {
              bVar10 = local_91c._4_4_ == local_924._4_4_;
              goto LAB_00449a9b;
            }
LAB_00449aaa:
            local_92c = 0;
          }
        }
      }
      else {
        lVar13 = local_924;
        uVar12 = local_91c;
        uVar2 = local_908;
        if (iVar6 == 4) {
          iVar6 = param_2[2];
          if (iVar6 == 2) {
            puVar5 = local_8b8;
            bVar10 = false;
            uVar1 = local_8b8[0];
            while (lVar13 = local_924, uVar12 = local_91c, uVar1 != '\0') {
              iVar6 = _ismbcdigit((int)(char)*puVar5);
              if (iVar6 != 0) {
                bVar10 = true;
                lVar13 = local_924;
                uVar12 = local_91c;
                break;
              }
              iVar6 = _ismbcspace((int)(char)*puVar5);
              lVar13 = local_924;
              uVar12 = local_91c;
              if (iVar6 != 0) break;
              puVar5 = (uchar *)CharNextA((LPCSTR)puVar5);
              uVar1 = *puVar5;
            }
            uVar2 = local_908;
            if (((&stack0x00000000 != (undefined1 *)0x928) && (bVar10)) && (*puVar5 != '\0')) {
              if (local_8f8 <= (double)CONCAT44(uStack_8fc,local_900)) goto LAB_00449aaa;
              local_92c = 1;
            }
          }
          else if (iVar6 == 3) {
            puVar5 = local_8b8;
            bVar10 = false;
            uVar1 = local_8b8[0];
            while (lVar13 = local_924, uVar12 = local_91c, uVar1 != '\0') {
              iVar6 = _ismbcdigit((int)(char)*puVar5);
              if (iVar6 != 0) {
                bVar10 = true;
                lVar13 = local_924;
                uVar12 = local_91c;
                break;
              }
              iVar6 = _ismbcspace((int)(char)*puVar5);
              lVar13 = local_924;
              uVar12 = local_91c;
              if (iVar6 != 0) break;
              puVar5 = (uchar *)CharNextA((LPCSTR)puVar5);
              uVar1 = *puVar5;
            }
            uVar2 = local_908;
            if (((&stack0x00000000 != (undefined1 *)0x928) && (bVar10)) && (*puVar5 != '\0')) {
              bVar10 = local_8f8 < (double)CONCAT44(uStack_8fc,local_900);
LAB_00449a9b:
              uVar2 = local_908;
              if (bVar10) goto LAB_00449a9d;
              goto LAB_00449aaa;
            }
          }
          else if (iVar6 == 5) {
            piVar9 = param_2 + 0x85;
            bVar10 = false;
            cVar3 = (char)param_2[0x85];
            while (lVar13 = local_924, uVar12 = local_91c, cVar3 != '\0') {
              iVar6 = _ismbcdigit((int)cVar3);
              if (iVar6 != 0) {
                bVar10 = true;
                lVar13 = local_924;
                uVar12 = local_91c;
                break;
              }
              iVar6 = _ismbcspace((int)(char)*piVar9);
              lVar13 = local_924;
              uVar12 = local_91c;
              if (iVar6 != 0) break;
              piVar9 = (int *)CharNextA((LPCSTR)piVar9);
              cVar3 = (char)*piVar9;
            }
            uVar2 = local_908;
            if (((&stack0x00000000 != (undefined1 *)0x928) && (bVar10)) && ((char)*piVar9 != '\0'))
            {
              if (((double)CONCAT44(uStack_8fc,local_900) <= local_8d8) ||
                 (local_8e0 <= (double)CONCAT44(uStack_8fc,local_900))) goto LAB_00449aaa;
              local_92c = 1;
            }
          }
          else {
            puVar5 = local_8b8;
            bVar10 = false;
            uVar1 = local_8b8[0];
            while (lVar13 = local_924, uVar12 = local_91c, uVar1 != '\0') {
              iVar6 = _ismbcdigit((int)(char)*puVar5);
              if (iVar6 != 0) {
                bVar10 = true;
                lVar13 = local_924;
                uVar12 = local_91c;
                break;
              }
              iVar6 = _ismbcspace((int)(char)*puVar5);
              lVar13 = local_924;
              uVar12 = local_91c;
              if (iVar6 != 0) break;
              puVar5 = (uchar *)CharNextA((LPCSTR)puVar5);
              uVar1 = *puVar5;
            }
            uVar2 = local_908;
            if (((&stack0x00000000 != (undefined1 *)0x928) && (bVar10)) && (*puVar5 != '\0')) {
              if (local_8f8 != (double)CONCAT44(uStack_8fc,local_900)) goto LAB_00449aaa;
              local_92c = 1;
            }
          }
        }
      }
LAB_00449d1a:
      local_8ec = local_8ec + 1;
      local_924 = lVar13;
      local_91c = uVar12;
      local_908 = uVar2;
    } while (local_8ec < local_8cc);
  }
  return local_92c == local_8d0;
}


