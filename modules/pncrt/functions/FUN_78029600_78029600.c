/* Module: pncrt.dll
   Function: FUN_78029600
   Address: 78029600
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_78029600(FILE *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  wchar_t *pwVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *_C;
  byte bVar8;
  byte *pbVar9;
  int iVar10;
  char *pcVar11;
  wchar_t *pwVar12;
  char *pcVar13;
  wchar_t *pwVar14;
  bool bVar15;
  longlong lVar16;
  FILE *pFVar17;
  char local_1cd;
  int local_1cc;
  char local_1c7;
  char local_1c6;
  char local_1c5;
  int local_1c4;
  char local_1c0;
  char local_1bf;
  char local_1be;
  byte local_1bd;
  uint local_1bc;
  wchar_t *local_1b8;
  uint local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  byte local_19e;
  undefined1 local_19d;
  undefined8 local_19c;
  undefined4 local_194;
  wchar_t local_18e;
  undefined4 *local_18c;
  int local_188;
  undefined4 local_184;
  byte local_180 [11];
  undefined1 local_175;
  char local_160;
  char local_15f [351];
  
  local_1bf = '\0';
  local_1cc = 0;
  local_1ac = 0;
  bVar8 = *param_2;
  _C = local_18c;
  do {
    if (bVar8 == 0) {
LAB_7802a256:
      if ((_C == (undefined4 *)0xffffffff) && ((local_1ac == 0 && (local_1bf == '\0')))) {
        local_1ac = -1;
      }
      return local_1ac;
    }
    iVar10 = 0;
    if ((int)__mb_cur_max < 2) {
      uVar5 = (byte)_pctype[(uint)bVar8 * 2] & 8;
    }
    else {
      uVar5 = _isctype((uint)bVar8,8);
    }
    if (uVar5 != 0) {
      local_1cc = local_1cc + -1;
      pFVar17 = param_1;
      uVar5 = FUN_7802a390(&local_1cc,param_1);
      FUN_7802a370(uVar5,(int *)pFVar17);
      param_2 = param_2 + 1;
      iVar6 = isspace((uint)*param_2);
      while (iVar6 != 0) {
        param_2 = param_2 + 1;
        iVar6 = isspace((uint)*param_2);
      }
    }
    if (*param_2 != 0x25) {
      local_1cc = local_1cc + 1;
      _C = (undefined4 *)FUN_7802a340(param_1);
      if ((undefined4 *)(uint)*param_2 != _C) goto LAB_7802a23d;
      pbVar9 = param_2 + 1;
      if ((_pctype[((uint)_C & 0xff) * 2 + 1] & 0x80) != 0) {
        local_1cc = local_1cc + 1;
        uVar5 = FUN_7802a340(param_1);
        if (param_2[1] != uVar5) {
          local_1cc = local_1cc + -1;
          FUN_7802a370(uVar5,(int *)param_1);
          goto LAB_7802a23d;
        }
        local_1cc = local_1cc + -1;
        pbVar9 = param_2 + 2;
      }
      goto LAB_7802a203;
    }
    local_1a4 = 0;
    local_1b4 = local_1b4 & 0xffffff00;
    local_1a8 = 0;
    local_1b0 = 0;
    local_1c4 = 0;
    local_1bd = 0;
    local_1be = '\0';
    local_1c5 = '\0';
    local_1cd = '\0';
    local_1c0 = '\0';
    local_1c7 = '\0';
    local_1c6 = '\x01';
    local_188 = 0;
    do {
      pbVar9 = param_2 + 1;
      uVar5 = (uint)*pbVar9;
      if ((int)__mb_cur_max < 2) {
        uVar7 = (byte)_pctype[uVar5 * 2] & 4;
      }
      else {
        uVar7 = _isctype(uVar5,4);
      }
      if (uVar7 == 0) {
        switch(uVar5) {
        case 0x2a:
          local_1c5 = local_1c5 + '\x01';
          break;
        default:
switchD_78029780_caseD_2b:
          local_1cd = local_1cd + '\x01';
          break;
        case 0x46:
        case 0x4e:
          break;
        case 0x49:
          if ((param_2[2] != 0x36) || (param_2[3] != 0x34)) goto switchD_78029780_caseD_2b;
          iVar10 = iVar10 + 1;
          local_19c = 0;
          pbVar9 = param_2 + 3;
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
        local_1b0 = local_1b0 + 1;
        local_1c4 = (uVar5 - 0x30) + local_1c4 * 10;
      }
      param_2 = pbVar9;
    } while (local_1cd == '\0');
    puVar3 = param_3;
    if (local_1c5 == '\0') {
      local_1b8 = (wchar_t *)*param_3;
      puVar3 = param_3 + 1;
      local_18c = param_3;
    }
    param_3 = puVar3;
    bVar15 = false;
    if ((local_1c7 == '\0') && ((*param_2 == 0x53 || (local_1c7 = -1, *param_2 == 0x43)))) {
      local_1c7 = '\x01';
    }
    local_1bc = *param_2 | 0x20;
    local_188 = iVar10;
    if (local_1bc != 0x6e) {
      if ((local_1bc == 99) || (local_1bc == 0x7b)) {
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)FUN_7802a340(param_1);
      }
      else {
        _C = (undefined4 *)FUN_7802a390(&local_1cc,param_1);
      }
    }
    pwVar12 = local_1b8;
    uVar5 = local_1bc;
    if ((local_1b0 != 0) && (local_1c4 == 0)) {
LAB_7802a23d:
      local_1cc = local_1cc + -1;
      FUN_7802a370((uint)_C,(int *)param_1);
      goto LAB_7802a256;
    }
    switch(local_1bc) {
    case 99:
      if (local_1b0 == 0) {
        local_1b0 = 1;
        local_1c4 = local_1c4 + 1;
      }
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pcVar11 = &DAT_78040ce4;
      goto LAB_780298fe;
    case 100:
    case 0x6f:
    case 0x75:
      goto switchD_78029898_caseD_64;
    case 0x65:
    case 0x66:
    case 0x67:
      pcVar11 = &local_160;
      if (_C == (undefined4 *)0x2d) {
        local_160 = '-';
        pcVar11 = local_15f;
LAB_78029f43:
        local_1c4 = local_1c4 + -1;
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)FUN_7802a340(param_1);
      }
      else if (_C == (undefined4 *)0x2b) goto LAB_78029f43;
      iVar10 = local_1a8;
      if ((local_1b0 == 0) || (0x15d < local_1c4)) {
        local_1c4 = 0x15d;
      }
      while( true ) {
        if ((int)__mb_cur_max < 2) {
          uVar5 = (byte)_pctype[(int)_C * 2] & 4;
        }
        else {
          uVar5 = _isctype((int)_C,4);
        }
        if ((uVar5 == 0) ||
           (iVar6 = local_1c4 + -1, bVar15 = local_1c4 == 0, local_1c4 = iVar6, bVar15)) break;
        *pcVar11 = (char)_C;
        pcVar11 = pcVar11 + 1;
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)FUN_7802a340(param_1);
        iVar10 = iVar10 + 1;
      }
      if ((DAT_7803f558 == (char)_C) &&
         (iVar6 = local_1c4 + -1, bVar15 = local_1c4 != 0, local_1c4 = iVar6, bVar15)) {
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)FUN_7802a340(param_1);
        *pcVar11 = DAT_7803f558;
        while( true ) {
          pcVar11 = pcVar11 + 1;
          if ((int)__mb_cur_max < 2) {
            uVar5 = (byte)_pctype[(int)_C * 2] & 4;
          }
          else {
            uVar5 = _isctype((int)_C,4);
          }
          if ((uVar5 == 0) ||
             (iVar6 = local_1c4 + -1, bVar15 = local_1c4 == 0, local_1c4 = iVar6, bVar15)) break;
          *pcVar11 = (char)_C;
          iVar10 = iVar10 + 1;
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)FUN_7802a340(param_1);
        }
      }
      pcVar13 = pcVar11;
      if ((iVar10 != 0) &&
         (((_C == (undefined4 *)0x65 || (_C == (undefined4 *)0x45)) &&
          (iVar6 = local_1c4 + -1, bVar15 = local_1c4 != 0, local_1c4 = iVar6, bVar15)))) {
        *pcVar11 = 'e';
        pcVar13 = pcVar11 + 1;
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)FUN_7802a340(param_1);
        if (_C == (undefined4 *)0x2d) {
          *pcVar13 = '-';
          pcVar13 = pcVar11 + 2;
LAB_7802a09e:
          iVar6 = local_1c4 + -1;
          if (local_1c4 != 0) goto LAB_7802a0b3;
        }
        else if (_C == (undefined4 *)0x2b) goto LAB_7802a09e;
        while( true ) {
          if ((int)__mb_cur_max < 2) {
            uVar5 = (byte)_pctype[(int)_C * 2] & 4;
          }
          else {
            uVar5 = _isctype((int)_C,4);
          }
          if ((uVar5 == 0) ||
             (iVar6 = local_1c4 + -1, bVar15 = local_1c4 == 0, local_1c4 = iVar6, bVar15)) break;
          iVar10 = iVar10 + 1;
          *pcVar13 = (char)_C;
          pcVar13 = pcVar13 + 1;
LAB_7802a0b3:
          local_1c4 = iVar6;
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)FUN_7802a340(param_1);
        }
      }
      local_1cc = local_1cc + -1;
      FUN_7802a370((uint)_C,(int *)param_1);
      if (iVar10 == 0) goto LAB_7802a256;
      if (local_1c5 == '\0') {
        local_1ac = local_1ac + 1;
        *pcVar13 = '\0';
        (*(code *)PTR___fptrap_7803fb38)();
      }
      break;
    default:
      if ((undefined4 *)(uint)*param_2 != _C) goto LAB_7802a23d;
      local_1bf = local_1bf + -1;
      if (local_1c5 == '\0') {
        param_3 = local_18c;
      }
      break;
    case 0x69:
      local_1bc = 100;
    case 0x78:
      uVar5 = local_1bc;
      if (_C == (undefined4 *)0x2d) {
        local_1be = '\x01';
LAB_78029b52:
        local_1c4 = local_1c4 + -1;
        if ((local_1c4 == 0) && (local_1b0 != 0)) {
          bVar15 = true;
        }
        else {
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)FUN_7802a340(param_1);
        }
      }
      else if (_C == (undefined4 *)0x2b) goto LAB_78029b52;
      if (_C == (undefined4 *)0x30) {
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)FUN_7802a340(param_1);
        if (((char)_C == 'x') || ((char)_C == 'X')) {
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)FUN_7802a340(param_1);
          uVar5 = 0x78;
          local_1bc = 0x78;
        }
        else {
          local_1a8 = 1;
          if (uVar5 == 0x78) {
            local_1cc = local_1cc + -1;
            FUN_7802a370((uint)_C,(int *)param_1);
            _C = (undefined4 *)0x30;
          }
          else {
            uVar5 = 0x6f;
            local_1bc = 0x6f;
          }
        }
      }
      goto LAB_78029c34;
    case 0x6e:
      iVar6 = local_1cc;
      if (local_1c5 != '\0') break;
      goto LAB_78029ef5;
    case 0x70:
      local_1c6 = '\x01';
switchD_78029898_caseD_64:
      if (_C == (undefined4 *)0x2d) {
        local_1be = '\x01';
LAB_78029c0a:
        local_1c4 = local_1c4 + -1;
        if ((local_1c4 == 0) && (local_1b0 != 0)) {
          bVar15 = true;
        }
        else {
          local_1cc = local_1cc + 1;
          _C = (undefined4 *)FUN_7802a340(param_1);
        }
      }
      else if (_C == (undefined4 *)0x2b) goto LAB_78029c0a;
LAB_78029c34:
      iVar6 = local_1a4;
      lVar16 = local_19c;
      if (iVar10 == 0) {
        while (!bVar15) {
          if ((uVar5 == 0x78) || (uVar5 == 0x70)) {
            if ((int)__mb_cur_max < 2) {
              uVar7 = (byte)_pctype[(int)_C * 2] & 0x80;
            }
            else {
              uVar7 = _isctype((int)_C,0x80);
            }
            if (uVar7 != 0) {
              iVar6 = iVar6 << 4;
              _C = (undefined4 *)FUN_78024c40((uint)_C);
              goto LAB_78029e2a;
            }
LAB_78029e26:
            bVar15 = true;
          }
          else {
            if ((int)__mb_cur_max < 2) {
              uVar7 = (byte)_pctype[(int)_C * 2] & 4;
            }
            else {
              uVar7 = _isctype((int)_C,4);
            }
            if (uVar7 == 0) goto LAB_78029e26;
            if (uVar5 == 0x6f) {
              if (0x37 < (int)_C) goto LAB_78029e26;
              iVar6 = iVar6 << 3;
            }
            else {
              iVar6 = iVar6 * 10;
            }
          }
LAB_78029e2a:
          if (bVar15) {
            local_1cc = local_1cc + -1;
            FUN_7802a370((uint)_C,(int *)param_1);
          }
          else {
            local_1a8 = local_1a8 + 1;
            iVar6 = iVar6 + -0x30 + (int)_C;
            if ((local_1b0 == 0) || (local_1c4 = local_1c4 + -1, local_1c4 != 0)) {
              local_1cc = local_1cc + 1;
              _C = (undefined4 *)FUN_7802a340(param_1);
            }
            else {
              bVar15 = true;
            }
          }
        }
        local_1a4 = iVar6;
        if (local_1be != '\0') {
          local_1a4 = -iVar6;
        }
      }
      else {
        while( true ) {
          uVar5 = (uint)lVar16;
          iVar10 = (int)((ulonglong)lVar16 >> 0x20);
          if (bVar15) break;
          if (local_1bc == 0x78) {
            if ((int)__mb_cur_max < 2) {
              uVar5 = (byte)_pctype[(int)_C * 2] & 0x80;
            }
            else {
              uVar5 = _isctype((int)_C,0x80);
            }
            if (uVar5 != 0) {
              lVar16 = __allshl(4,iVar10);
              _C = (undefined4 *)FUN_78024c40((uint)_C);
              goto LAB_78029d01;
            }
LAB_78029cfd:
            bVar15 = true;
          }
          else {
            if ((int)__mb_cur_max < 2) {
              uVar7 = (byte)_pctype[(int)_C * 2] & 4;
            }
            else {
              uVar7 = _isctype((int)_C,4);
            }
            if (uVar7 == 0) goto LAB_78029cfd;
            if (local_1bc == 0x6f) {
              if (0x37 < (int)_C) goto LAB_78029cfd;
              lVar16 = __allshl(3,iVar10);
            }
            else {
              lVar16 = __allmul(uVar5,iVar10,10,0);
            }
          }
LAB_78029d01:
          if (bVar15) {
            local_1cc = local_1cc + -1;
            FUN_7802a370((uint)_C,(int *)param_1);
          }
          else {
            puVar3 = _C + -0xc;
            local_1a8 = local_1a8 + 1;
            if ((local_1b0 == 0) || (local_1c4 = local_1c4 + -1, local_1c4 != 0)) {
              local_1cc = local_1cc + 1;
              _C = (undefined4 *)FUN_7802a340(param_1);
              lVar16 = lVar16 + (int)puVar3;
            }
            else {
              bVar15 = true;
              lVar16 = lVar16 + (int)puVar3;
            }
          }
        }
        local_19c = lVar16;
        if (local_1be != '\0') {
          local_19c = CONCAT44(-(iVar10 + (uint)(uVar5 != 0)),-uVar5);
        }
      }
      iVar10 = local_1a8;
      if (local_1bc == 0x46) {
        iVar10 = 0;
      }
      if (iVar10 == 0) goto LAB_7802a256;
      if (local_1c5 == '\0') {
        local_1ac = local_1ac + 1;
        iVar6 = local_1a4;
        iVar10 = local_188;
LAB_78029ef5:
        if (iVar10 == 0) {
          if (local_1c6 == '\0') {
            *local_1b8 = (wchar_t)iVar6;
          }
          else {
            *(int *)local_1b8 = iVar6;
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
        local_1c0 = '\x01';
      }
      pcVar11 = s_____78040cdc;
LAB_780298fe:
      local_1bd = 0xff;
      pbVar9 = param_2;
LAB_78029903:
      param_2 = pbVar9;
      pbVar9 = local_180;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
        pbVar9 = pbVar9 + 4;
      }
      if ((local_1bc == 0x7b) && (*pcVar11 == 0x5d)) {
        local_1b4 = CONCAT31(local_1b4._1_3_,0x5d);
        pcVar11 = pcVar11 + 1;
        local_175 = 0x20;
      }
      bVar8 = *pcVar11;
      uVar5 = local_1b4;
      while (bVar8 != 0x5d) {
        pbVar9 = (byte *)(pcVar11 + 1);
        uVar7 = (uint)local_184 >> 8;
        local_184 = CONCAT31((int3)uVar7,bVar8);
        local_1b4._1_3_ = (undefined3)(uVar5 >> 8);
        if (((bVar8 == 0x2d) &&
            (local_1b4._0_1_ = (byte)uVar5, bVar2 = (byte)local_1b4, (byte)local_1b4 != 0)) &&
           (bVar1 = *pbVar9, bVar1 != 0x5d)) {
          pbVar9 = (byte *)(pcVar11 + 2);
          uVar7 = (uint)local_194 >> 8;
          bVar8 = (byte)local_1b4;
          if (bVar1 <= (byte)local_1b4) {
            local_1b4 = CONCAT31(local_1b4._1_3_,bVar1);
            bVar8 = bVar1;
            uVar5 = local_1b4;
            bVar1 = bVar2;
          }
          local_1b4 = uVar5;
          local_194 = CONCAT31((int3)uVar7,bVar1);
          if (bVar8 <= bVar1) {
            uVar5 = local_1b4 & 0xff;
            iVar10 = (bVar1 - uVar5) + 1;
            do {
              uVar7 = uVar5 >> 3;
              bVar8 = (byte)uVar5;
              uVar5 = uVar5 + 1;
              iVar10 = iVar10 + -1;
              local_180[uVar7] = local_180[uVar7] | '\x01' << (bVar8 & 7);
            } while (iVar10 != 0);
          }
          local_1b4 = local_1b4 & 0xffffff00;
        }
        else {
          local_1b4 = CONCAT31(local_1b4._1_3_,bVar8);
          local_180[bVar8 >> 3] = local_180[bVar8 >> 3] | '\x01' << (bVar8 & 7);
        }
        pcVar11 = (char *)pbVar9;
        uVar5 = local_1b4;
        bVar8 = *pbVar9;
      }
      if (*pcVar11 == 0) goto LAB_7802a256;
      if (local_1bc == 0x7b) {
        param_2 = (byte *)pcVar11;
      }
      local_1cc = local_1cc + -1;
      local_1b4 = uVar5;
      FUN_7802a370((uint)_C,(int *)param_1);
      pwVar14 = pwVar12;
      while( true ) {
        if ((local_1b0 != 0) &&
           (iVar10 = local_1c4 + -1, bVar15 = local_1c4 == 0, local_1c4 = iVar10, pwVar4 = pwVar14,
           bVar15)) goto LAB_78029aec;
        local_1cc = local_1cc + 1;
        _C = (undefined4 *)FUN_7802a340(param_1);
        if ((_C == (undefined4 *)0xffffffff) ||
           (bVar8 = (byte)_C,
           ((int)(char)(local_180[(int)_C >> 3] ^ local_1bd) & 1 << (bVar8 & 7)) == 0)) break;
        if (local_1c5 == '\0') {
          if (local_1c0 == '\0') {
            *(byte *)pwVar14 = bVar8;
            pwVar14 = (wchar_t *)((int)pwVar14 + 1);
          }
          else {
            local_19e = bVar8;
            if ((_pctype[((uint)_C & 0xff) * 2 + 1] & 0x80) != 0) {
              local_1cc = local_1cc + 1;
              uVar5 = FUN_7802a340(param_1);
              local_19d = (undefined1)uVar5;
            }
            mbtowc(&local_18e,(char *)&local_19e,__mb_cur_max);
            *pwVar14 = local_18e;
            pwVar14 = pwVar14 + 1;
          }
        }
        else {
          pwVar12 = (wchar_t *)((int)pwVar12 + 1);
        }
      }
      local_1cc = local_1cc + -1;
      local_1b8 = pwVar14;
      FUN_7802a370((uint)_C,(int *)param_1);
      pwVar4 = local_1b8;
LAB_78029aec:
      local_1b8 = pwVar4;
      if (pwVar12 == pwVar14) goto LAB_7802a256;
      if ((local_1c5 == '\0') && (local_1ac = local_1ac + 1, local_1bc != 99)) {
        if (local_1c0 == '\0') {
          *(byte *)local_1b8 = 0;
        }
        else {
          *local_1b8 = L'\0';
        }
      }
      break;
    case 0x7b:
      if ('\0' < local_1c7) {
        local_1c0 = '\x01';
      }
      pbVar9 = param_2 + 1;
      pcVar11 = (char *)pbVar9;
      if (*pbVar9 == 0x5e) {
        pcVar11 = (char *)(param_2 + 2);
        param_2 = pbVar9;
        goto LAB_780298fe;
      }
      goto LAB_78029903;
    }
    local_1bf = local_1bf + '\x01';
    pbVar9 = param_2 + 1;
LAB_7802a203:
    param_2 = pbVar9;
    if ((_C == (undefined4 *)0xffffffff) && ((*param_2 != 0x25 || (param_2[1] != 0x6e))))
    goto LAB_7802a256;
    bVar8 = *param_2;
  } while( true );
}


