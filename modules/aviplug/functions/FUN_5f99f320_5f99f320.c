/* Module: aviplug.dll
   Function: FUN_5f99f320
   Address: 5f99f320
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f99f320(LPCSTR param_1,LPCSTR param_2,int param_3,UINT param_4)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  int iVar4;
  NUMBERFMTA local_18;
  
  if (param_4 == 0xffffffff) {
    cVar1 = *param_1;
    pCVar3 = param_1;
    if (cVar1 != '\0') {
      do {
        if (cVar1 == '.') {
          param_4 = 0;
        }
        else if (param_4 != 0xffffffff) {
          param_4 = param_4 + 1;
        }
        cVar1 = pCVar3[1];
        pCVar3 = pCVar3 + 1;
      } while (cVar1 != '\0');
      if (param_4 != 0xffffffff) goto LAB_5f99f359;
    }
    param_4 = 0;
  }
LAB_5f99f359:
  local_18.LeadingZero = DAT_5f9f5b70;
  local_18.lpDecimalSep = &DAT_5f9f5b5c;
  local_18.Grouping = DAT_5f9f5b68;
  local_18.lpThousandSep = &DAT_5f9f5b50;
  iVar4 = 0;
  local_18.NumDigits = param_4;
  do {
    switch((int)*param_1) {
    case 0:
    case 0x2d:
    case 0x2e:
switchD_5f99f39a_caseD_0:
      if (*param_1 != '\0') {
        iVar2 = FUN_5f99f130(0x400,0,param_1,&local_18,param_2,param_3 - iVar4);
        return iVar2 + iVar4;
      }
      *param_2 = '\0';
      return iVar4;
    default:
      iVar2 = _ismbcdigit((int)*param_1);
      if (iVar2 != 0) goto switchD_5f99f39a_caseD_0;
      break;
    case 0x30:
      if (param_1[1] == '.') goto switchD_5f99f39a_caseD_0;
    }
    if (param_3 <= iVar4) goto switchD_5f99f39a_caseD_0;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
  } while( true );
}


