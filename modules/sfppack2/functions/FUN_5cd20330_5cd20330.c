/* Module: sfppack2.dll
   Function: FUN_5cd20330
   Address: 5cd20330
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd20330(uchar *param_1,BYTE *param_2,uint *param_3)

{
  BYTE *pBVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uchar uVar3;
  int *piVar4;
  uchar uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  uchar *puVar10;
  int iVar11;
  uchar *puVar12;
  uchar *puVar13;
  float10 fVar14;
  int local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined1 local_218 [4];
  uchar *local_214;
  uchar local_208 [260];
  uchar local_104 [260];
  
  puVar13 = param_1;
LAB_5cd20348:
  do {
    iVar6 = IsDBCSLeadByte(*param_2);
    while (iVar6 != 0) {
      *puVar13 = *param_2;
      puVar13[1] = param_2[1];
      pBVar1 = param_2 + 2;
      puVar13 = puVar13 + 2;
      param_2 = param_2 + 2;
      iVar6 = IsDBCSLeadByte(*pBVar1);
    }
    uVar5 = *param_2;
    if (uVar5 == '\0') {
      *puVar13 = '\0';
      lstrlenA((LPCSTR)param_1);
      return;
    }
    local_230 = 0;
    if (uVar5 != '$') {
      if (uVar5 == '%') {
LAB_5cd205ce:
        if (param_2[1] == '%') {
          param_2 = param_2 + 2;
          *puVar13 = '%';
          puVar13 = puVar13 + 1;
        }
        else {
          local_208[1] = param_2[1];
          puVar10 = param_2 + 1;
          local_208[0] = '%';
          puVar12 = local_208 + 2;
          iVar6 = 2;
          uVar5 = local_208[1];
          do {
            if (uVar5 == '\0') break;
            switch(uVar5) {
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
              uVar5 = puVar12[-2];
              uVar3 = puVar12[-1];
              param_2 = puVar10 + 1;
              *puVar12 = '\0';
              switch(uVar3) {
              case '!':
                uVar5 = *param_2;
                uVar9 = 0xffffffff;
                if (uVar5 == ',') {
                  uVar9 = 0x66;
                }
                else if (uVar5 == '.') {
                  uVar9 = 0x65;
                }
                else if (uVar5 == ':') {
                  uVar9 = 100;
                }
                iVar11 = FUN_5cd07e10(uVar9,puVar13);
                iVar6 = 0;
                if (iVar11 == 0) goto switchD_5cd209f6_caseD_46;
                param_2 = puVar10 + 2;
                puVar13 = puVar13 + iVar11;
                goto LAB_5cd20348;
              default:
                iVar6 = wsprintfA((LPSTR)puVar13,(LPCSTR)local_208);
                puVar13 = puVar13 + iVar6;
                param_3 = param_3 + 1;
                goto LAB_5cd20348;
              case '&':
                uVar9 = 0xffffffff;
                if (*param_2 == '.') {
                  uVar9 = 0x79;
                }
                else if (*param_2 == ':') {
                  uVar9 = 0x78;
                }
                iVar11 = FUN_5cd07e10(uVar9,puVar13);
                iVar6 = 0;
                if (iVar11 == 0) goto switchD_5cd209f6_caseD_46;
                param_2 = puVar10 + 2;
                puVar13 = puVar13 + iVar11;
                goto LAB_5cd20348;
              case '*':
                iVar6 = FUN_5cd07e10(0x18,puVar13);
                puVar13 = puVar13 + iVar6;
                goto LAB_5cd20348;
              case ',':
                iVar6 = FUN_5cd07e10(0x28,puVar13);
                puVar13 = puVar13 + iVar6;
                goto LAB_5cd20348;
              case ':':
                iVar6 = FUN_5cd07e10(0x3c,puVar13);
                puVar13 = puVar13 + iVar6;
                goto LAB_5cd20348;
              case 'E':
              case 'G':
              case 'e':
              case 'f':
              case 'g':
                puVar8 = param_3 + 2;
                iVar6 = sprintf((char *)local_104,(char *)local_208,*(undefined8 *)param_3);
                param_3 = puVar8;
                if (iVar6 < 1) goto switchD_5cd209f6_caseD_46;
                if ((local_230 == 0) || (uVar3 != 'f')) {
                  switch(uVar3) {
                  case 'E':
                  case 'e':
                    goto switchD_5cd209f6_caseD_45;
                  default:
                    goto switchD_5cd209f6_caseD_46;
                  case 'G':
                  case 'g':
                    goto switchD_5cd209f6_caseD_47;
                  case 'f':
                    goto switchD_5cd209f6_caseD_66;
                  }
                }
                iVar6 = lstrlenA((LPCSTR)local_104);
                iVar6 = FUN_5cd28f00((LPCSTR)local_104,(LPCSTR)puVar13,iVar6 << 1,0xffffffff);
                puVar13 = puVar13 + iVar6;
                goto LAB_5cd20348;
              case 'X':
              case 'd':
              case 'i':
              case 'o':
              case 'u':
              case 'x':
                goto switchD_5cd20680_caseD_58;
              case 'z':
                iVar6 = _ismbcdigit((int)(char)uVar5);
                if ((iVar6 != 0) && (local_208[1] == '.')) {
                  puVar12[-1] = '\0';
                  uVar7 = FUN_5cd29430(local_208 + 2);
                  if (uVar7 != 0) {
                    puVar8 = param_3 + 1;
                    uVar2 = *param_3;
                    if (uVar7 < 0x10) {
                      fVar14 = (float10)(int)uVar2 / (float10)*(double *)(&DAT_5cd63128 + uVar7 * 8)
                      ;
                    }
                    else {
                      fVar14 = (float10)_CIpow();
                      fVar14 = (float10)(int)uVar2 / fVar14;
                    }
                    wsprintfA((LPSTR)local_208,"%%.%df");
                    uStack_224 = (undefined4)((ulonglong)(double)fVar14 >> 0x20);
                    local_228 = SUB84((double)fVar14,0);
                    iVar6 = sprintf((char *)local_104,(char *)local_208,local_228,uStack_224);
                    param_3 = puVar8;
                    if (iVar6 < 1) goto switchD_5cd209f6_caseD_46;
                    iVar6 = lstrlenA((LPCSTR)local_104);
                    if (local_230 == 0) {
                      iVar6 = FUN_5cd28de0((LPCSTR)local_104,(LPCSTR)puVar13,iVar6 << 1);
                      puVar13 = puVar13 + iVar6;
                    }
                    else {
                      iVar6 = FUN_5cd28f00((LPCSTR)local_104,(LPCSTR)puVar13,iVar6 << 1,uVar7);
                      puVar13 = puVar13 + iVar6;
                    }
                    goto LAB_5cd20348;
                  }
                }
                param_3 = param_3 + 1;
                puVar12[-1] = 'd';
                iVar6 = sprintf((char *)local_104,(char *)local_208);
                if (iVar6 < 1) goto switchD_5cd209f6_caseD_46;
                if (local_230 == 0) {
                  _mbscpy(puVar13,local_104);
                  puVar13 = puVar13 + iVar6;
                }
                else {
                  iVar6 = lstrlenA((LPCSTR)local_104);
                  iVar6 = FUN_5cd28c10((LPCSTR)local_104,(LPCSTR)puVar13,iVar6 << 1);
                  puVar13 = puVar13 + iVar6;
                }
                goto LAB_5cd20348;
              }
            }
            uVar5 = puVar10[1];
            puVar10 = puVar10 + 1;
            *puVar12 = uVar5;
            puVar12 = puVar12 + 1;
            iVar6 = iVar6 + 1;
          } while (iVar6 != 0x104);
          lstrcpynA((LPSTR)puVar13,(LPCSTR)local_208,iVar6 + 1);
          puVar13[iVar6] = '\0';
          param_2 = puVar10;
switchD_5cd209f6_caseD_46:
          puVar13 = puVar13 + iVar6;
        }
      }
      else {
        *puVar13 = uVar5;
        param_2 = param_2 + 1;
        puVar13 = puVar13 + 1;
      }
      goto LAB_5cd20348;
    }
    if (param_2[1] == '$') {
      param_2 = param_2 + 2;
      *puVar13 = '$';
      puVar13 = puVar13 + 1;
    }
    else {
      if (param_2[1] != '(') {
        local_230 = 1;
        goto LAB_5cd205ce;
      }
      puVar12 = local_208;
      iVar11 = 0;
      puVar10 = param_2 + 2;
      iVar6 = _ismbcdigit((int)(char)param_2[2]);
      piVar4 = DAT_5cd67c98;
      if (((iVar6 == 0) && (uVar5 = *puVar10, uVar5 != '-')) && (uVar5 != '.')) {
        if (uVar5 != '\0') {
          while (uVar5 != ')') {
            *puVar12 = uVar5;
            puVar12 = puVar12 + 1;
            puVar10 = puVar10 + 1;
            iVar11 = iVar11 + 1;
            if ((iVar11 == 0x104) || (uVar5 = *puVar10, uVar5 == '\0')) break;
          }
        }
        param_2 = param_2 + iVar11 + 2;
        if (*puVar10 == ')') {
          lpCriticalSection = (LPCRITICAL_SECTION)(DAT_5cd67c98 + 3);
          EnterCriticalSection(lpCriticalSection);
          param_2 = param_2 + 1;
          local_214 = local_208;
          *puVar12 = '\0';
          iVar6 = FUN_5cd310d0(piVar4,local_218,(undefined4 *)0x0,-1,&LAB_5cd20190);
          if (iVar6 < 0) {
            *puVar13 = '$';
            puVar13[1] = '(';
            puVar13 = puVar13 + 2;
            lstrcpynA((LPSTR)puVar13,(LPCSTR)local_208,iVar11 + 1);
            puVar13[iVar11] = '\0';
            puVar13[iVar11] = ')';
            puVar13 = puVar13 + iVar11 + 1;
            LeaveCriticalSection(lpCriticalSection);
          }
          else {
            iVar6 = *(int *)(piVar4[2] + iVar6 * 4);
            iVar11 = *(int *)(iVar6 + 8);
            if (iVar11 == 1) {
              *puVar13 = **(uchar **)(iVar6 + 0xc);
              puVar13 = puVar13 + *(int *)(iVar6 + 8);
              LeaveCriticalSection(lpCriticalSection);
            }
            else {
              lstrcpynA((LPSTR)puVar13,*(LPCSTR *)(iVar6 + 0xc),iVar11 + 1);
              puVar13[iVar11] = '\0';
              puVar13 = puVar13 + *(int *)(iVar6 + 8);
              LeaveCriticalSection(lpCriticalSection);
            }
          }
        }
        else {
          *puVar13 = '$';
          puVar13[1] = '(';
          puVar13 = puVar13 + 2;
          lstrcpynA((LPSTR)puVar13,(LPCSTR)local_208,iVar11 + 1);
          puVar13[iVar11] = '\0';
          puVar13 = puVar13 + iVar11;
        }
      }
      else {
        local_208[0] = *puVar10;
        puVar12 = local_208;
        iVar6 = 1;
        while( true ) {
          puVar12 = puVar12 + 1;
          puVar10 = puVar10 + 1;
          iVar11 = _ismbcdigit((int)(char)*puVar10);
          if (((iVar11 == 0) && (*puVar10 != '.')) && (*puVar10 != ',')) break;
          *puVar12 = *puVar10;
          iVar6 = iVar6 + 1;
        }
        param_2 = param_2 + iVar6 + 2;
        if (*puVar10 == ')') {
          param_2 = param_2 + 1;
          *puVar12 = '\0';
          iVar6 = lstrlenA((LPCSTR)local_208);
          iVar6 = FUN_5cd28f00((LPCSTR)local_208,(LPCSTR)puVar13,iVar6 << 1,0xffffffff);
          puVar13 = puVar13 + iVar6;
        }
        else {
          *puVar13 = '$';
          puVar13[1] = '(';
          puVar13 = puVar13 + 2;
          lstrcpynA((LPSTR)puVar13,(LPCSTR)local_208,iVar6 + 1);
          puVar13[iVar6] = '\0';
          puVar13 = puVar13 + iVar6;
        }
      }
    }
  } while( true );
switchD_5cd20680_caseD_58:
  if ((local_208[1] == 'I') && (local_208[2] == '6')) {
    if (uVar5 == '%') {
      iVar6 = FUN_5cd290e0(*param_3,param_3[1],puVar13,local_230);
      puVar13 = puVar13 + iVar6;
      param_3 = param_3 + 2;
      goto LAB_5cd20348;
    }
    uVar7 = *param_3;
    param_3 = param_3 + 2;
    iVar6 = sprintf((char *)local_104,(char *)local_208,uVar7);
  }
  else {
    if (uVar5 == '%') {
      if (uVar3 == 'd') {
LAB_5cd2070d:
        if (uVar3 != 'u') {
          iVar6 = FUN_5cd29030(*param_3,puVar13,local_230);
          puVar13 = puVar13 + iVar6;
          param_3 = param_3 + 1;
          goto LAB_5cd20348;
        }
      }
      else if (uVar3 != 'u') {
        if (uVar3 != 'i') goto LAB_5cd20764;
        goto LAB_5cd2070d;
      }
      iVar6 = FUN_5cd291e0(*param_3,puVar13,local_230);
      puVar13 = puVar13 + iVar6;
      param_3 = param_3 + 1;
      goto LAB_5cd20348;
    }
LAB_5cd20764:
    param_3 = param_3 + 1;
    iVar6 = sprintf((char *)local_104,(char *)local_208);
  }
  if (iVar6 < 1) goto switchD_5cd209f6_caseD_46;
  if ((local_230 == 0) || (((uVar3 != 'd' && (uVar3 != 'u')) && (uVar3 != 'i'))))
  goto switchD_5cd209f6_caseD_45;
  iVar6 = lstrlenA((LPCSTR)local_104);
  iVar6 = FUN_5cd28c10((LPCSTR)local_104,(LPCSTR)puVar13,iVar6 << 1);
  puVar13 = puVar13 + iVar6;
  goto LAB_5cd20348;
switchD_5cd209f6_caseD_47:
  iVar11 = 0;
  if (0 < iVar6) goto LAB_5cd20a1c;
  goto switchD_5cd209f6_caseD_66;
  while (iVar11 = iVar11 + 1, iVar11 < iVar6) {
LAB_5cd20a1c:
    if ((local_104[iVar11] == 'e') || (local_104[iVar11] == 'E')) goto switchD_5cd209f6_caseD_45;
  }
switchD_5cd209f6_caseD_66:
  iVar6 = lstrlenA((LPCSTR)local_104);
  iVar6 = FUN_5cd28de0((LPCSTR)local_104,(LPCSTR)puVar13,iVar6 << 1);
  puVar13 = puVar13 + iVar6;
  goto LAB_5cd20348;
switchD_5cd209f6_caseD_45:
  _mbscpy(puVar13,local_104);
  puVar13 = puVar13 + iVar6;
  goto LAB_5cd20348;
}


