/* Module: vegas30.exe
   Function: FUN_0057fe30
   Address: 0057fe30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0057fe30(undefined4 *param_1,size_t param_2,uchar *param_3,size_t *param_4)

{
  uchar uVar1;
  bool bVar2;
  size_t *psVar3;
  uchar uVar4;
  uchar *_Ptr;
  int iVar5;
  uint uVar6;
  size_t *psVar7;
  size_t *psVar8;
  size_t sVar9;
  bool bVar10;
  int local_14;
  size_t local_10;
  
  psVar3 = param_4;
  local_14 = 0;
  if (param_2 == -1) {
    bVar2 = false;
    uVar1 = *param_3;
    psVar8 = param_4;
    _Ptr = param_3;
    while (uVar1 != '\0') {
      uVar1 = *_Ptr;
      uVar4 = uVar1;
      if (uVar1 != '%') {
LAB_0057fe83:
        if (uVar4 == '$') {
          _Ptr = _mbsinc(_Ptr);
          uVar4 = *_Ptr;
          if (uVar4 != '$') goto LAB_0057fea1;
        }
        sVar9 = _mbclen(_Ptr);
        local_14 = local_14 + sVar9;
        goto LAB_005801a4;
      }
      _Ptr = _mbsinc(_Ptr);
      uVar4 = *_Ptr;
      if (uVar4 == '%') goto LAB_0057fe83;
LAB_0057fea1:
      if (uVar1 == '$') {
        bVar2 = true;
      }
      sVar9 = 0;
      param_4 = (size_t *)0x0;
      param_2 = 0;
      if (uVar4 == '\0') {
LAB_0057ff01:
        param_2 = atoi((char *)_Ptr);
        uVar1 = *_Ptr;
        while ((psVar7 = psVar8, uVar1 != '\0' &&
               (iVar5 = _ismbcdigit((int)(char)uVar1), iVar5 != 0))) {
          _Ptr = _mbsinc(_Ptr);
          uVar1 = *_Ptr;
        }
      }
      else {
        do {
          if (uVar4 == '#') {
            local_14 = local_14 + 2;
          }
          else if (uVar4 == '*') {
            param_2 = *psVar8;
            psVar8 = psVar8 + 1;
          }
          else if ((((uVar4 != '-') && (uVar4 != '+')) && (uVar4 != '0')) && (uVar4 != ' ')) break;
          _Ptr = _mbsinc(_Ptr);
          uVar4 = *_Ptr;
        } while (uVar4 != '\0');
        psVar7 = psVar8;
        if (param_2 == 0) goto LAB_0057ff01;
      }
      local_10 = 0;
      if (*_Ptr == '.') {
        _Ptr = _mbsinc(_Ptr);
        if (*_Ptr == '*') {
          local_10 = *psVar7;
          psVar7 = psVar7 + 1;
          _Ptr = _mbsinc(_Ptr);
        }
        else {
          local_10 = atoi((char *)_Ptr);
          uVar1 = *_Ptr;
          while ((uVar1 != '\0' && (iVar5 = _ismbcdigit((int)(char)uVar1), iVar5 != 0))) {
            _Ptr = _mbsinc(_Ptr);
            uVar1 = *_Ptr;
          }
        }
      }
      uVar6 = 0;
      switch(*_Ptr) {
      case 'F':
      case 'L':
      case 'N':
        break;
      default:
        goto switchD_0057ffb1_caseD_47;
      case 'I':
        _Ptr = _mbsinc(_Ptr);
        if ((*_Ptr == '6') && (_Ptr = _mbsinc(_Ptr), *_Ptr == '4')) {
          _Ptr = _mbsinc(_Ptr);
          param_4 = (size_t *)0x40;
        }
        param_4 = (size_t *)((int)param_4 + 2);
        goto switchD_0057ffb1_caseD_47;
      case 'h':
        uVar6 = 0x10000;
        break;
      case 'l':
        uVar6 = 0x20000;
      }
      _Ptr = _mbsinc(_Ptr);
switchD_0057ffb1_caseD_47:
      uVar6 = (int)(char)*_Ptr | uVar6;
      psVar8 = psVar7;
      if ((int)uVar6 < 0x10064) {
        if (uVar6 != 0x10063) {
          if ((int)uVar6 < 0x74) {
            if (uVar6 == 0x73) {
              sVar9 = lstrlenA((LPCSTR)*psVar7);
              goto LAB_005800f7;
            }
            if (uVar6 != 0x43) {
              if (uVar6 != 0x53) {
                bVar10 = uVar6 == 99;
                goto LAB_0058007a;
              }
              goto LAB_005800e7;
            }
          }
          else if (uVar6 != 0x10043) {
            if (uVar6 == 0x10053) goto LAB_005800cc;
            goto LAB_00580080;
          }
        }
LAB_00580105:
        sVar9 = 2;
LAB_00580117:
        psVar8 = psVar7 + 1;
        if ((int)sVar9 <= (int)param_2) {
          sVar9 = param_2;
        }
        if ((local_10 != 0) && ((int)local_10 <= (int)sVar9)) {
          sVar9 = local_10;
        }
      }
      else {
        if ((int)uVar6 < 0x20054) {
          if (uVar6 != 0x20053) {
            if (uVar6 == 0x10073) {
LAB_005800cc:
              sVar9 = lstrlenA((LPCSTR)*psVar7);
              goto LAB_005800f7;
            }
            bVar10 = uVar6 == 0x20043;
LAB_0058007a:
            if (!bVar10) goto LAB_00580080;
            goto LAB_00580105;
          }
LAB_005800e7:
          sVar9 = wcslen((wchar_t *)*psVar7);
LAB_005800f7:
          if ((int)sVar9 < 1) {
            sVar9 = 1;
          }
          else {
            psVar8 = psVar7 + 1;
            if (sVar9 == 0) goto LAB_00580080;
          }
          goto LAB_00580117;
        }
        if (uVar6 == 0x20063) goto LAB_00580105;
        if (uVar6 == 0x20073) goto LAB_005800e7;
LAB_00580080:
        if (bVar2) {
          param_4 = (size_t *)((int)param_4 + 0x10);
        }
        switch(*_Ptr) {
        case '(':
          param_4 = (size_t *)((int)param_4 + 0x80);
          break;
        case ',':
          sVar9 = 4;
          break;
        case 'G':
        case 'e':
        case 'f':
        case 'g':
          psVar8 = psVar8 + 2;
          sVar9 = 0x80;
          if (0x7f < (int)(local_10 + param_2)) {
            sVar9 = local_10 + param_2;
          }
          break;
        case 'X':
        case 'd':
        case 'i':
        case 'o':
        case 'u':
        case 'x':
          psVar8 = psVar8 + 1;
          sVar9 = 0x20;
          if (0x1f < (int)(local_10 + param_2)) {
            sVar9 = local_10 + param_2;
          }
          break;
        case 'n':
          psVar8 = psVar8 + 1;
          break;
        case 'p':
          psVar8 = psVar8 + 1;
          sVar9 = 0x20;
          if (0x1f < (int)(param_2 + local_10)) {
            sVar9 = param_2 + local_10;
          }
        }
      }
      local_14 = local_14 + sVar9 + (int)param_4;
LAB_005801a4:
      _Ptr = _mbsinc(_Ptr);
      uVar1 = *_Ptr;
    }
  }
  else {
    local_14 = param_2;
  }
  FUN_00580f90(local_14);
  _SfVPrintF_12(*param_1,param_3,psVar3);
  FUN_00581000(0xffffffff);
  FUN_00581050();
  return;
}


