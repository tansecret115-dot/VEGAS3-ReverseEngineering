/* Module: vidcap30.exe
   Function: _SfVPrintF@12
   Address: 00477a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfVPrintF_12(uchar *param_1,BYTE *param_2,int *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BYTE BVar1;
  BYTE BVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  BYTE *pBVar8;
  int iVar9;
  BYTE *pBVar10;
  uchar *puVar11;
  float10 fVar12;
  int local_230;
  undefined4 local_228;
  undefined1 local_218 [4];
  BYTE *local_214;
  BYTE local_208 [260];
  uchar local_104 [260];
  
                    /* 0x77a70  655  _SfVPrintF@12 */
  puVar11 = param_1;
LAB_00477a88:
  do {
    iVar3 = IsDBCSLeadByte(*param_2);
    while (iVar3 != 0) {
      *puVar11 = *param_2;
      puVar11[1] = param_2[1];
      pBVar8 = param_2 + 2;
      puVar11 = puVar11 + 2;
      param_2 = param_2 + 2;
      iVar3 = IsDBCSLeadByte(*pBVar8);
    }
    BVar2 = *param_2;
    if (BVar2 == '\0') {
      *puVar11 = '\0';
      lstrlenA((LPCSTR)param_1);
      return;
    }
    local_230 = 0;
    if (BVar2 != '$') {
      if (BVar2 == '%') {
LAB_00477d0e:
        if (param_2[1] == '%') {
          param_2 = param_2 + 2;
          *puVar11 = '%';
          puVar11 = puVar11 + 1;
        }
        else {
          local_208[1] = param_2[1];
          pBVar8 = param_2 + 1;
          local_208[0] = '%';
          pBVar10 = local_208 + 2;
          iVar3 = 2;
          BVar2 = local_208[1];
          do {
            if (BVar2 == '\0') break;
            switch(BVar2) {
            case '!':
            case '&':
            case '*':
            case ',':
            case ':':
            case 'E':
            case 'G':
            case 'X':
            case 'c':
            case 'd':
            case 'e':
            case 'f':
            case 'g':
            case 'i':
            case 'o':
            case 's':
            case 'u':
            case 'x':
            case 'z':
              BVar2 = pBVar10[-2];
              BVar1 = pBVar10[-1];
              param_2 = pBVar8 + 1;
              *pBVar10 = '\0';
              switch(BVar1) {
              case '!':
                BVar2 = *param_2;
                uVar7 = 0xffffffff;
                if (BVar2 == ',') {
                  uVar7 = 0x66;
                }
                else if (BVar2 == '.') {
                  uVar7 = 0x65;
                }
                else if (BVar2 == ':') {
                  uVar7 = 100;
                }
                iVar4 = _SfGetInat_8(uVar7,puVar11);
                iVar3 = 0;
                if (iVar4 == 0) goto switchD_00478139_caseD_46;
                param_2 = pBVar8 + 2;
                puVar11 = puVar11 + iVar4;
                goto LAB_00477a88;
              default:
                iVar3 = wsprintfA((LPSTR)puVar11,(LPCSTR)local_208);
                puVar11 = puVar11 + iVar3;
                param_3 = param_3 + 1;
                goto LAB_00477a88;
              case '&':
                uVar7 = 0xffffffff;
                if (*param_2 == '.') {
                  uVar7 = 0x79;
                }
                else if (*param_2 == ':') {
                  uVar7 = 0x78;
                }
                iVar4 = _SfGetInat_8(uVar7,puVar11);
                iVar3 = 0;
                if (iVar4 == 0) goto switchD_00478139_caseD_46;
                param_2 = pBVar8 + 2;
                puVar11 = puVar11 + iVar4;
                goto LAB_00477a88;
              case '*':
                iVar3 = _SfGetInat_8(0x18,puVar11);
                puVar11 = puVar11 + iVar3;
                goto LAB_00477a88;
              case ',':
                iVar3 = _SfGetInat_8(0x28,puVar11);
                puVar11 = puVar11 + iVar3;
                goto LAB_00477a88;
              case ':':
                iVar3 = _SfGetInat_8(0x3c,puVar11);
                puVar11 = puVar11 + iVar3;
                goto LAB_00477a88;
              case 'E':
              case 'G':
              case 'e':
              case 'f':
              case 'g':
                piVar6 = param_3 + 2;
                iVar3 = sprintf((char *)local_104,(char *)local_208,*(undefined8 *)param_3);
                param_3 = piVar6;
                if (iVar3 < 1) goto switchD_00478139_caseD_46;
                if ((local_230 == 0) || (BVar1 != 'f')) {
                  switch(BVar1) {
                  case 'E':
                  case 'e':
                    goto switchD_00478139_caseD_45;
                  default:
                    goto switchD_00478139_caseD_46;
                  case 'G':
                  case 'g':
                    goto switchD_00478139_caseD_47;
                  case 'f':
                    goto switchD_00478139_caseD_66;
                  }
                }
                iVar3 = lstrlenA((LPCSTR)local_104);
                iVar3 = _SfFormatGroupDecimalNumber_16(local_104,puVar11,iVar3 << 1,0xffffffff);
                puVar11 = puVar11 + iVar3;
                goto LAB_00477a88;
              case 'X':
              case 'd':
              case 'i':
              case 'o':
              case 'u':
              case 'x':
                goto switchD_00477dc0_caseD_58;
              case 'z':
                iVar3 = _ismbcdigit((int)(char)BVar2);
                if ((iVar3 != 0) && (local_208[1] == '.')) {
                  pBVar10[-1] = '\0';
                  uVar5 = _SfTextToDWordToken_8(local_208 + 2);
                  if (uVar5 != 0) {
                    piVar6 = param_3 + 1;
                    iVar3 = *param_3;
                    if (uVar5 < 0x10) {
                      fVar12 = (float10)iVar3 / (float10)*(double *)(&DAT_005b6690 + uVar5 * 8);
                    }
                    else {
                      fVar12 = (float10)_CIpow();
                      fVar12 = (float10)iVar3 / fVar12;
                    }
                    wsprintfA((LPSTR)local_208,"%%.%df");
                    local_228 = SUB84((double)fVar12,0);
                    iVar3 = sprintf((char *)local_104,(char *)local_208,local_228);
                    param_3 = piVar6;
                    if (iVar3 < 1) goto switchD_00478139_caseD_46;
                    iVar3 = lstrlenA((LPCSTR)local_104);
                    if (local_230 == 0) {
                      iVar3 = _SfFormatDecimalNumber_12(local_104,puVar11,iVar3 << 1);
                      puVar11 = puVar11 + iVar3;
                    }
                    else {
                      iVar3 = _SfFormatGroupDecimalNumber_16(local_104,puVar11,iVar3 << 1,uVar5);
                      puVar11 = puVar11 + iVar3;
                    }
                    goto LAB_00477a88;
                  }
                }
                param_3 = param_3 + 1;
                pBVar10[-1] = 'd';
                iVar3 = sprintf((char *)local_104,(char *)local_208);
                if (iVar3 < 1) goto switchD_00478139_caseD_46;
                if (local_230 == 0) {
                  _mbscpy(puVar11,local_104);
                  puVar11 = puVar11 + iVar3;
                }
                else {
                  iVar3 = lstrlenA((LPCSTR)local_104);
                  iVar3 = _SfFormatNumber_12(local_104,puVar11,iVar3 << 1);
                  puVar11 = puVar11 + iVar3;
                }
                goto LAB_00477a88;
              }
            }
            BVar2 = pBVar8[1];
            pBVar8 = pBVar8 + 1;
            *pBVar10 = BVar2;
            pBVar10 = pBVar10 + 1;
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0x104);
          lstrcpynA((LPSTR)puVar11,(LPCSTR)local_208,iVar3 + 1);
          puVar11[iVar3] = '\0';
          param_2 = pBVar8;
switchD_00478139_caseD_46:
          puVar11 = puVar11 + iVar3;
        }
      }
      else {
        *puVar11 = BVar2;
        param_2 = param_2 + 1;
        puVar11 = puVar11 + 1;
      }
      goto LAB_00477a88;
    }
    if (param_2[1] == '$') {
      param_2 = param_2 + 2;
      *puVar11 = '$';
      puVar11 = puVar11 + 1;
    }
    else {
      if (param_2[1] != '(') {
        local_230 = 1;
        goto LAB_00477d0e;
      }
      pBVar10 = local_208;
      iVar9 = 0;
      pBVar8 = param_2 + 2;
      iVar4 = _ismbcdigit((int)(char)param_2[2]);
      iVar3 = DAT_005c1938;
      if (((iVar4 == 0) && (BVar2 = *pBVar8, BVar2 != '-')) && (BVar2 != '.')) {
        if (BVar2 != '\0') {
          while (BVar2 != ')') {
            *pBVar10 = BVar2;
            pBVar10 = pBVar10 + 1;
            pBVar8 = pBVar8 + 1;
            iVar9 = iVar9 + 1;
            if ((iVar9 == 0x104) || (BVar2 = *pBVar8, BVar2 == '\0')) break;
          }
        }
        param_2 = param_2 + iVar9 + 2;
        if (*pBVar8 == ')') {
          lpCriticalSection = (LPCRITICAL_SECTION)(DAT_005c1938 + 0xc);
          EnterCriticalSection(lpCriticalSection);
          param_2 = param_2 + 1;
          local_214 = local_208;
          *pBVar10 = '\0';
          iVar4 = _SfList_FindSortedItemRange_20(iVar3,local_218,0,0x4778d0ffffffff);
          if (iVar4 < 0) {
            *puVar11 = '$';
            puVar11[1] = '(';
            puVar11 = puVar11 + 2;
            lstrcpynA((LPSTR)puVar11,(LPCSTR)local_208,iVar9 + 1);
            puVar11[iVar9] = '\0';
            puVar11[iVar9] = ')';
            puVar11 = puVar11 + iVar9 + 1;
            LeaveCriticalSection(lpCriticalSection);
          }
          else {
            iVar3 = *(int *)(*(int *)(iVar3 + 8) + iVar4 * 4);
            iVar4 = *(int *)(iVar3 + 8);
            if (iVar4 == 1) {
              *puVar11 = **(uchar **)(iVar3 + 0xc);
              puVar11 = puVar11 + *(int *)(iVar3 + 8);
              LeaveCriticalSection(lpCriticalSection);
            }
            else {
              lstrcpynA((LPSTR)puVar11,*(LPCSTR *)(iVar3 + 0xc),iVar4 + 1);
              puVar11[iVar4] = '\0';
              puVar11 = puVar11 + *(int *)(iVar3 + 8);
              LeaveCriticalSection(lpCriticalSection);
            }
          }
        }
        else {
          *puVar11 = '$';
          puVar11[1] = '(';
          puVar11 = puVar11 + 2;
          lstrcpynA((LPSTR)puVar11,(LPCSTR)local_208,iVar9 + 1);
          puVar11[iVar9] = '\0';
          puVar11 = puVar11 + iVar9;
        }
      }
      else {
        local_208[0] = *pBVar8;
        pBVar10 = local_208;
        iVar3 = 1;
        while( true ) {
          pBVar10 = pBVar10 + 1;
          pBVar8 = pBVar8 + 1;
          iVar4 = _ismbcdigit((int)(char)*pBVar8);
          if (((iVar4 == 0) && (*pBVar8 != '.')) && (*pBVar8 != ',')) break;
          *pBVar10 = *pBVar8;
          iVar3 = iVar3 + 1;
        }
        param_2 = param_2 + iVar3 + 2;
        if (*pBVar8 == ')') {
          param_2 = param_2 + 1;
          *pBVar10 = '\0';
          iVar3 = lstrlenA((LPCSTR)local_208);
          iVar3 = _SfFormatGroupDecimalNumber_16(local_208,puVar11,iVar3 << 1,0xffffffff);
          puVar11 = puVar11 + iVar3;
        }
        else {
          *puVar11 = '$';
          puVar11[1] = '(';
          puVar11 = puVar11 + 2;
          lstrcpynA((LPSTR)puVar11,(LPCSTR)local_208,iVar3 + 1);
          puVar11[iVar3] = '\0';
          puVar11 = puVar11 + iVar3;
        }
      }
    }
  } while( true );
switchD_00477dc0_caseD_58:
  if ((local_208[1] == 'I') && (local_208[2] == '6')) {
    if (BVar2 == '%') {
      iVar3 = _SfLongLongToText_16(*param_3,param_3[1],puVar11,local_230);
      puVar11 = puVar11 + iVar3;
      param_3 = param_3 + 2;
      goto LAB_00477a88;
    }
    iVar3 = *param_3;
    param_3 = param_3 + 2;
    iVar3 = sprintf((char *)local_104,(char *)local_208,iVar3);
  }
  else {
    if (BVar2 == '%') {
      if (BVar1 == 'd') {
LAB_00477e4d:
        if (BVar1 != 'u') {
          iVar3 = _SfLongToText_12(*param_3,puVar11,local_230);
          puVar11 = puVar11 + iVar3;
          param_3 = param_3 + 1;
          goto LAB_00477a88;
        }
      }
      else if (BVar1 != 'u') {
        if (BVar1 != 'i') goto LAB_00477ea4;
        goto LAB_00477e4d;
      }
      iVar3 = _SfDWordToText_12(*param_3,puVar11,local_230);
      puVar11 = puVar11 + iVar3;
      param_3 = param_3 + 1;
      goto LAB_00477a88;
    }
LAB_00477ea4:
    param_3 = param_3 + 1;
    iVar3 = sprintf((char *)local_104,(char *)local_208);
  }
  if (iVar3 < 1) goto switchD_00478139_caseD_46;
  if ((local_230 == 0) || (((BVar1 != 'd' && (BVar1 != 'u')) && (BVar1 != 'i'))))
  goto switchD_00478139_caseD_45;
  iVar3 = lstrlenA((LPCSTR)local_104);
  iVar3 = _SfFormatNumber_12(local_104,puVar11,iVar3 << 1);
  puVar11 = puVar11 + iVar3;
  goto LAB_00477a88;
switchD_00478139_caseD_47:
  iVar4 = 0;
  if (0 < iVar3) goto LAB_0047815f;
  goto switchD_00478139_caseD_66;
  while (iVar4 = iVar4 + 1, iVar4 < iVar3) {
LAB_0047815f:
    if ((local_104[iVar4] == 'e') || (local_104[iVar4] == 'E')) goto switchD_00478139_caseD_45;
  }
switchD_00478139_caseD_66:
  iVar3 = lstrlenA((LPCSTR)local_104);
  iVar3 = _SfFormatDecimalNumber_12(local_104,puVar11,iVar3 << 1);
  puVar11 = puVar11 + iVar3;
  goto LAB_00477a88;
switchD_00478139_caseD_45:
  _mbscpy(puVar11,local_104);
  puVar11 = puVar11 + iVar3;
  goto LAB_00477a88;
}


