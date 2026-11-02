/* Module: sfppack2.dll
   Function: FUN_5cd28de0
   Address: 5cd28de0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd28de0(LPCSTR param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  char cVar2;
  LPCSTR pCVar3;
  int iVar4;
  NUMBERFMTA local_18;
  
  local_18.NumDigits = 0xffffffff;
  cVar2 = *param_1;
  pCVar3 = param_1;
  if (cVar2 != '\0') {
    do {
      if (cVar2 == '.') {
        local_18.NumDigits = 0;
      }
      else if (local_18.NumDigits != 0xffffffff) {
        local_18.NumDigits = local_18.NumDigits + 1;
      }
      cVar2 = pCVar3[1];
      pCVar3 = pCVar3 + 1;
    } while (cVar2 != '\0');
    if (local_18.NumDigits != 0xffffffff) goto LAB_5cd28e14;
  }
  local_18.NumDigits = 0;
LAB_5cd28e14:
  iVar4 = 0;
  local_18.LeadingZero = DAT_5cd67c30;
  local_18.lpDecimalSep = &DAT_5cd67c1c;
  local_18.Grouping = 0;
  local_18.lpThousandSep = &DAT_5cd67c10;
  do {
    switch((int)*param_1) {
    case 0:
    case 0x2d:
    case 0x2e:
switchD_5cd28e4f_caseD_0:
      if (*param_1 != '\0') {
        iVar1 = FUN_5cd28d10(0x400,0,param_1,&local_18,param_2,param_3 - iVar4);
        return iVar1 + iVar4;
      }
      *param_2 = '\0';
      return iVar4;
    default:
      iVar1 = _ismbcdigit((int)*param_1);
      if (iVar1 != 0) goto switchD_5cd28e4f_caseD_0;
      break;
    case 0x30:
      if (param_1[1] == '.') goto switchD_5cd28e4f_caseD_0;
    }
    if (param_3 <= iVar4) goto switchD_5cd28e4f_caseD_0;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
  } while( true );
}


