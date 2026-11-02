/* Module: pncrt.dll
   Function: FUN_78024050
   Address: 78024050
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78024050(byte *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  wchar_t *pwVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *_C;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  int iVar13;
  wchar_t *pwVar14;
  char *pcVar15;
  wchar_t *pwVar16;
  bool bVar17;
  longlong lVar18;
  char local_1cd;
  int local_1cc;
  char local_1c7;
  char local_1c6;
  char local_1c5;
  char local_1c4;
  char local_1c3;
  byte local_1c2;
  char local_1c1;
  int local_1c0;
  uint local_1bc;
  wchar_t *local_1b8;
  int local_1b4;
  int local_1b0;
  uint local_1ac;
  int local_1a8;
  int local_1a4;
  byte local_19e;
  undefined1 local_19d;
  undefined8 local_19c;
  undefined4 local_194;
  wchar_t local_18e;
  int local_18c;
  undefined4 *local_188;
  undefined4 local_184;
  byte local_180 [11];
  undefined1 local_175;
  char local_160;
  char local_15f [351];
  
  local_1c3 = '\0';
  local_1cc = 0;
  local_1b0 = 0;
  bVar6 = *param_1;
  _C = local_188;
  if (bVar6 == 0) {
    return 0;
  }
  do {
    iVar10 = 0;
    if ((int)__mb_cur_max < 2) {
      uVar7 = (byte)_pctype[(uint)bVar6 * 2] & 8;
    }
    else {
      uVar7 = _isctype((uint)bVar6,8);
    }
    pbVar12 = param_1;
    if (uVar7 != 0) {
      local_1cc = local_1cc + -1;
      uVar7 = FUN_78024c90(&local_1cc);
      FUN_7801e5c0(uVar7);
      pbVar12 = param_1 + 1;
      iVar8 = isspace((uint)*pbVar12);
      while (iVar8 != 0) {
        pbVar12 = pbVar12 + 1;
        iVar8 = isspace((uint)*pbVar12);
      }
    }
    if (*pbVar12 != 0x25) {
      local_1cc = local_1cc + 1;
      _C = (undefined4 *)thunk_FUN_7801e440();
      param_1 = pbVar12 + 1;
      if ((undefined4 *)(uint)*pbVar12 != _C) goto LAB_78024b5a;
      if ((_pctype[((uint)_C & 0xff) * 2 + 1] & 0x80) != 0) {
        local_1cc = local_1cc + 1;
        uVar7 = thunk_FUN_7801e440();
        bVar6 = *param_1;
        param_1 = pbVar12 + 2;
        if (bVar6 != uVar7) {
          local_1cc = local_1cc + -1;
          FUN_7801e5c0(uVar7);
          goto LAB_78024b5a;
        }
        local_1cc = local_1cc + -1;
      }
      goto LAB_78024b2e;
    }
    local_1a4 = 0;
    local_1bc = local_1bc & 0xffffff00;
    local_1a8 = 0;
    local_1b4 = 0;
    local_1c0 = 0;
    local_1c2 = 0;
    local_1c1 = '\0';
    local_1c5 = '\0';
    local_1cd = '\0';
    local_1c4 = '\0';
    local_1c7 = '\0';
    local_1c6 = '\x01';
    local_18c = 0;
    iVar8 = iVar10;
    do {
      param_1 = pbVar12 + 1;
      uVar7 = (uint)*param_1;
      if ((int)__mb_cur_max < 2) {
        uVar9 = (byte)_pctype[uVar7 * 2] & 4;
      }
      else {
        uVar9 = _isctype(uVar7,4);
        iVar10 = local_1c0;
      }
      if (uVar9 == 0) {
        switch(uVar7) {
        case 0x2a:
          local_1c5 = local_1c5 + '\x01';
          break;
        default:
switchD_780241aa_caseD_2b:
          local_1cd = local_1cd + '\x01';
          break;
        case 0x46:
        case 0x4e:
          break;
        case 0x49:
          if ((pbVar12[2] != 0x36) || (pbVar12[3] != 0x34)) goto switchD_780241aa_caseD_2b;
          param_1 = pbVar12 + 3;
          iVar8 = iVar8 + 1;
          local_19c = 0;
          break;
        case 0x4c:
          local_1c6 = local_1c6 + '\x01';
          break;
        case 0x68:
          local_1c6 = local_1c6 + -1;
          local_1c7 = local_1c7 + -1;
          break;
        case 0x6c:
          local_1c6 = local_1c6 + '\x01';
        case 0x77:
          local_1c7 = local_1c7 + '\x01';
        }
      }
      else {
        local_1b4 = local_1b4 + 1;
        iVar10 = (uVar7 - 0x30) + iVar10 * 10;
        local_1c0 = iVar10;
      }
      pbVar12 = param_1;
    } while (local_1cd == '\0');
    if (local_1c5 == '\0') {
      local_188 = param_2;
      local_1b8 = (wchar_t *)*param_2;
      param_2 = param_2 + 1;
    }
    bVar17 = false;
    if ((local_1c7 == '\0') && ((*param_1 == 0x53 || (local_1c7 = -1, *param_1 == 0x43)))) {
      local_1c7 = '\x01';
    }
    uVar7 = *param_1 | 0x20;
    local_1ac = uVar7;
    local_18c = iVar8;
    if (uVar7 != 0x6e) {
      if ((uVar7 == 99) || (uVar7 == 0x7b)) {
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)thunk_FUN_7801e440();
      }
      else {
        _C = (undefined4 *)FUN_78024c90(&local_1cc);
      }
    }
    pwVar14 = local_1b8;
    if ((local_1b4 != 0) && (local_1c0 == 0)) {
LAB_78024b5a:
      local_1cc = local_1cc + -1;
      FUN_7801e5c0((uint)_C);
      return local_1b0;
    }
    switch(uVar7) {
    case 99:
      if (local_1b4 == 0) {
        local_1b4 = 1;
        local_1c0 = local_1c0 + 1;
      }
      if ('\0' < local_1c7) {
        local_1c4 = '\x01';
      }
      pcVar11 = &DAT_78040cd4;
      goto LAB_78024324;
    case 100:
    case 0x6f:
    case 0x75:
      goto switchD_780242bf_caseD_64;
    case 0x65:
    case 0x66:
    case 0x67:
      pcVar11 = &local_160;
      if (_C == (undefined4 *)0x2d) {
        local_160 = '-';
        pcVar11 = local_15f;
LAB_780248fc:
        iVar10 = local_1c0 + -1;
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)thunk_FUN_7801e440();
      }
      else {
        iVar10 = local_1c0;
        if (_C == (undefined4 *)0x2b) goto LAB_780248fc;
      }
      iVar8 = local_1a8;
      if ((local_1b4 == 0) || (0x15d < iVar10)) {
        iVar10 = 0x15d;
      }
      while( true ) {
        if ((int)__mb_cur_max < 2) {
          uVar7 = (byte)_pctype[(int)_C * 2] & 4;
        }
        else {
          uVar7 = _isctype((int)_C,4);
        }
        iVar13 = iVar10;
        if ((uVar7 == 0) || (iVar13 = iVar10 + -1, iVar10 == 0)) break;
        *pcVar11 = (char)_C;
        pcVar11 = pcVar11 + 1;
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)thunk_FUN_7801e440();
        iVar10 = iVar13;
        iVar8 = iVar8 + 1;
      }
      iVar10 = iVar13;
      if ((DAT_7803f558 == (char)_C) && (iVar10 = iVar13 + -1, iVar13 != 0)) {
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)thunk_FUN_7801e440();
        *pcVar11 = DAT_7803f558;
        iVar13 = iVar13 + -1;
        while( true ) {
          pcVar11 = pcVar11 + 1;
          if ((int)__mb_cur_max < 2) {
            uVar7 = (byte)_pctype[(int)_C * 2] & 4;
          }
          else {
            uVar7 = _isctype((int)_C,4);
          }
          iVar10 = iVar13;
          if ((uVar7 == 0) || (iVar10 = iVar13 + -1, iVar13 == 0)) break;
          iVar8 = iVar8 + 1;
          *pcVar11 = (char)_C;
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)thunk_FUN_7801e440();
          iVar13 = iVar10;
        }
      }
      pcVar15 = pcVar11;
      if ((iVar8 != 0) &&
         (((_C == (undefined4 *)0x65 || (_C == (undefined4 *)0x45)) &&
          (iVar13 = iVar10 + -1, iVar10 != 0)))) {
        *pcVar11 = 'e';
        pcVar15 = pcVar11 + 1;
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)thunk_FUN_7801e440();
        if (_C == (undefined4 *)0x2d) {
          *pcVar15 = '-';
          pcVar15 = pcVar11 + 2;
LAB_78024a0f:
          iVar10 = iVar10 + -2;
          if (iVar13 != 0) goto LAB_78024a1a;
          iVar13 = 0;
        }
        else if (_C == (undefined4 *)0x2b) goto LAB_78024a0f;
        while( true ) {
          if ((int)__mb_cur_max < 2) {
            uVar7 = (byte)_pctype[(int)_C * 2] & 4;
          }
          else {
            uVar7 = _isctype((int)_C,4);
          }
          if ((uVar7 == 0) || (iVar10 = iVar13 + -1, iVar13 == 0)) break;
          iVar8 = iVar8 + 1;
          *pcVar15 = (char)_C;
          pcVar15 = pcVar15 + 1;
LAB_78024a1a:
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)thunk_FUN_7801e440();
          iVar13 = iVar10;
        }
      }
      local_1cc = local_1cc + -1;
      FUN_7801e5c0((uint)_C);
      if (iVar8 == 0) {
        return local_1b0;
      }
      if (local_1c5 == '\0') {
        local_1b0 = local_1b0 + 1;
        *pcVar15 = '\0';
        (*(code *)PTR___fptrap_7803fb38)();
      }
      break;
    default:
      if ((undefined4 *)(uint)*param_1 != _C) goto LAB_78024b5a;
      local_1c3 = local_1c3 + -1;
      if (local_1c5 == '\0') {
        param_2 = local_188;
      }
      break;
    case 0x69:
      uVar7 = 100;
      local_1ac = 100;
    case 0x78:
      if (_C == (undefined4 *)0x2d) {
        local_1c1 = '\x01';
LAB_78024552:
        local_1c0 = local_1c0 + -1;
        if ((local_1c0 == 0) && (local_1b4 != 0)) {
          bVar17 = true;
        }
        else {
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)thunk_FUN_7801e440();
        }
      }
      else if (_C == (undefined4 *)0x2b) goto LAB_78024552;
      if (_C == (undefined4 *)0x30) {
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)thunk_FUN_7801e440();
        if (((char)_C == 'x') || ((char)_C == 'X')) {
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)thunk_FUN_7801e440();
          uVar7 = 0x78;
          local_1ac = 0x78;
        }
        else {
          local_1a8 = 1;
          if (uVar7 == 0x78) {
            local_1cc = local_1cc + -1;
            FUN_7801e5c0((uint)_C);
            _C = (undefined4 *)0x30;
          }
          else {
            uVar7 = 0x6f;
            local_1ac = 0x6f;
          }
        }
      }
      goto LAB_7802460f;
    case 0x6e:
      iVar10 = local_1cc;
      if (local_1c5 != '\0') break;
      goto LAB_780248ae;
    case 0x70:
      local_1c6 = '\x01';
switchD_780242bf_caseD_64:
      if (_C == (undefined4 *)0x2d) {
        local_1c1 = '\x01';
LAB_780245ee:
        local_1c0 = local_1c0 + -1;
        if ((local_1c0 == 0) && (local_1b4 != 0)) {
          bVar17 = true;
        }
        else {
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)thunk_FUN_7801e440();
        }
      }
      else if (_C == (undefined4 *)0x2b) goto LAB_780245ee;
LAB_7802460f:
      iVar13 = local_1b4;
      iVar10 = local_1a4;
      lVar18 = local_19c;
      if (iVar8 == 0) {
        while (!bVar17) {
          if ((uVar7 == 0x78) || (uVar7 == 0x70)) {
            if ((int)__mb_cur_max < 2) {
              uVar9 = (byte)_pctype[(int)_C * 2] & 0x80;
            }
            else {
              uVar9 = _isctype((int)_C,0x80);
            }
            if (uVar9 != 0) {
              iVar10 = iVar10 << 4;
              _C = (undefined4 *)FUN_78024c40((uint)_C);
              goto LAB_780247f4;
            }
LAB_780247f0:
            bVar17 = true;
          }
          else {
            if ((int)__mb_cur_max < 2) {
              uVar9 = (byte)_pctype[(int)_C * 2] & 4;
            }
            else {
              uVar9 = _isctype((int)_C,4);
            }
            if (uVar9 == 0) goto LAB_780247f0;
            if (uVar7 == 0x6f) {
              if (0x37 < (int)_C) goto LAB_780247f0;
              iVar10 = iVar10 << 3;
            }
            else {
              iVar10 = iVar10 * 10;
            }
          }
LAB_780247f4:
          if (bVar17) {
            local_1cc = local_1cc + -1;
            FUN_7801e5c0((uint)_C);
          }
          else {
            local_1a8 = local_1a8 + 1;
            iVar10 = iVar10 + -0x30 + (int)_C;
            if ((local_1b4 == 0) || (local_1c0 = local_1c0 + -1, local_1c0 != 0)) {
              local_1cc = local_1cc + 1;
              _C = (undefined4 *)thunk_FUN_7801e440();
            }
            else {
              bVar17 = true;
            }
          }
        }
        local_1a4 = iVar10;
        if (local_1c1 != '\0') {
          local_1a4 = -iVar10;
        }
      }
      else {
        while( true ) {
          uVar7 = (uint)lVar18;
          iVar10 = (int)((ulonglong)lVar18 >> 0x20);
          if (bVar17) break;
          if (local_1ac == 0x78) {
            if ((int)__mb_cur_max < 2) {
              uVar7 = (byte)_pctype[(int)_C * 2] & 0x80;
            }
            else {
              uVar7 = _isctype((int)_C,0x80);
            }
            if (uVar7 != 0) {
              lVar18 = __allshl(4,iVar10);
              _C = (undefined4 *)FUN_78024c40((uint)_C);
              goto LAB_780246d9;
            }
LAB_780246d5:
            bVar17 = true;
          }
          else {
            if ((int)__mb_cur_max < 2) {
              uVar9 = (byte)_pctype[(int)_C * 2] & 4;
            }
            else {
              uVar9 = _isctype((int)_C,4);
            }
            if (uVar9 == 0) goto LAB_780246d5;
            if (local_1ac == 0x6f) {
              if (0x37 < (int)_C) goto LAB_780246d5;
              lVar18 = __allshl(3,iVar10);
            }
            else {
              lVar18 = __allmul(uVar7,iVar10,10,0);
            }
          }
LAB_780246d9:
          if (bVar17) {
            local_1cc = local_1cc + -1;
            FUN_7801e5c0((uint)_C);
          }
          else {
            puVar1 = _C + -0xc;
            local_1a8 = local_1a8 + 1;
            if ((iVar13 == 0) || (local_1c0 = local_1c0 + -1, local_1c0 != 0)) {
              local_1cc = local_1cc + 1;
              _C = (undefined4 *)thunk_FUN_7801e440();
              lVar18 = lVar18 + (int)puVar1;
            }
            else {
              bVar17 = true;
              lVar18 = lVar18 + (int)puVar1;
            }
          }
        }
        local_19c = lVar18;
        if (local_1c1 != '\0') {
          local_19c = CONCAT44(-(iVar10 + (uint)(uVar7 != 0)),-uVar7);
        }
      }
      iVar10 = local_1a8;
      if (local_1ac == 0x46) {
        iVar10 = 0;
      }
      if (iVar10 == 0) {
        return local_1b0;
      }
      if (local_1c5 == '\0') {
        local_1b0 = local_1b0 + 1;
        iVar10 = local_1a4;
        iVar8 = local_18c;
LAB_780248ae:
        if (iVar8 == 0) {
          if (local_1c6 == '\0') {
            *local_1b8 = (wchar_t)iVar10;
          }
          else {
            *(int *)local_1b8 = iVar10;
          }
        }
        else {
          *(undefined4 *)local_1b8 = (undefined4)local_19c;
          *(undefined4 *)(local_1b8 + 2) = local_19c._4_4_;
        }
      }
      break;
    case 0x73:
      if ('\0' < local_1c7) {
        local_1c4 = '\x01';
      }
      pcVar11 = s_____78040ccc;
LAB_78024324:
      local_1c2 = 0xff;
      pbVar12 = param_1;
LAB_78024329:
      param_1 = pbVar12;
      pbVar12 = local_180;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        pbVar12[0] = 0;
        pbVar12[1] = 0;
        pbVar12[2] = 0;
        pbVar12[3] = 0;
        pbVar12 = pbVar12 + 4;
      }
      if ((uVar7 == 0x7b) && (*pcVar11 == 0x5d)) {
        local_1bc = CONCAT31(local_1bc._1_3_,0x5d);
        pcVar11 = pcVar11 + 1;
        local_175 = 0x20;
      }
      bVar6 = *pcVar11;
      uVar9 = local_1bc;
      while (bVar6 != 0x5d) {
        pbVar12 = (byte *)(pcVar11 + 1);
        uVar3 = (uint)local_184 >> 8;
        local_184 = CONCAT31((int3)uVar3,bVar6);
        local_1bc._1_3_ = (undefined3)(uVar9 >> 8);
        if (((bVar6 == 0x2d) &&
            (local_1bc._0_1_ = (byte)uVar9, bVar4 = (byte)local_1bc, (byte)local_1bc != 0)) &&
           (bVar2 = *pbVar12, bVar2 != 0x5d)) {
          pbVar12 = (byte *)(pcVar11 + 2);
          uVar7 = (uint)local_194 >> 8;
          bVar6 = (byte)local_1bc;
          if (bVar2 <= (byte)local_1bc) {
            local_1bc = CONCAT31(local_1bc._1_3_,bVar2);
            bVar6 = bVar2;
            uVar9 = local_1bc;
            bVar2 = bVar4;
          }
          local_1bc = uVar9;
          local_194 = CONCAT31((int3)uVar7,bVar2);
          if (bVar6 <= bVar2) {
            uVar7 = local_1bc & 0xff;
            iVar10 = (bVar2 - uVar7) + 1;
            do {
              uVar9 = uVar7 >> 3;
              bVar6 = (byte)uVar7;
              uVar7 = uVar7 + 1;
              iVar10 = iVar10 + -1;
              local_180[uVar9] = local_180[uVar9] | '\x01' << (bVar6 & 7);
            } while (iVar10 != 0);
          }
          local_1bc = local_1bc & 0xffffff00;
          uVar7 = local_1ac;
        }
        else {
          local_1bc = CONCAT31(local_1bc._1_3_,bVar6);
          local_180[bVar6 >> 3] = local_180[bVar6 >> 3] | '\x01' << (bVar6 & 7);
        }
        pcVar11 = (char *)pbVar12;
        uVar9 = local_1bc;
        bVar6 = *pbVar12;
      }
      if (*pcVar11 == 0) {
        return local_1b0;
      }
      if (uVar7 == 0x7b) {
        param_1 = (byte *)pcVar11;
      }
      local_1cc = local_1cc + -1;
      local_1bc = uVar9;
      FUN_7801e5c0((uint)_C);
      pwVar16 = pwVar14;
      while( true ) {
        if ((local_1b4 != 0) &&
           (iVar10 = local_1c0 + -1, bVar17 = local_1c0 == 0, local_1c0 = iVar10, pwVar5 = pwVar16,
           bVar17)) goto LAB_780244f0;
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)thunk_FUN_7801e440();
        bVar6 = (byte)_C;
        if (((int)(char)(local_180[(int)_C >> 3] ^ local_1c2) & 1 << (bVar6 & 7)) == 0) break;
        if (local_1c5 == '\0') {
          if (local_1c4 == '\0') {
            *(byte *)pwVar16 = bVar6;
            pwVar16 = (wchar_t *)((int)pwVar16 + 1);
          }
          else {
            local_19e = bVar6;
            if ((_pctype[((uint)_C & 0xff) * 2 + 1] & 0x80) != 0) {
              local_1cc = local_1cc + 1;
              uVar9 = thunk_FUN_7801e440();
              local_19d = (undefined1)uVar9;
            }
            mbtowc(&local_18e,(char *)&local_19e,__mb_cur_max);
            *pwVar16 = local_18e;
            pwVar16 = pwVar16 + 1;
          }
        }
        else {
          pwVar14 = (wchar_t *)((int)pwVar14 + 1);
        }
      }
      local_1cc = local_1cc + -1;
      local_1b8 = pwVar16;
      FUN_7801e5c0((uint)_C);
      pwVar5 = local_1b8;
LAB_780244f0:
      local_1b8 = pwVar5;
      if (pwVar14 == pwVar16) {
        return local_1b0;
      }
      if ((local_1c5 == '\0') && (local_1b0 = local_1b0 + 1, uVar7 != 99)) {
        if (local_1c4 == '\0') {
          *(byte *)local_1b8 = 0;
        }
        else {
          *local_1b8 = L'\0';
        }
      }
      break;
    case 0x7b:
      if ('\0' < local_1c7) {
        local_1c4 = '\x01';
      }
      pbVar12 = param_1 + 1;
      pcVar11 = (char *)pbVar12;
      if (param_1[1] == 0x5e) {
        pcVar11 = (char *)(param_1 + 2);
        param_1 = pbVar12;
        goto LAB_78024324;
      }
      goto LAB_78024329;
    }
    local_1c3 = local_1c3 + '\x01';
    param_1 = param_1 + 1;
LAB_78024b2e:
    bVar6 = *param_1;
    if (bVar6 == 0) {
      return local_1b0;
    }
  } while( true );
}


