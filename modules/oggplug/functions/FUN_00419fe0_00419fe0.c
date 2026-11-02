/* Module: oggplug.dll
   Function: FUN_00419fe0
   Address: 00419fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00419fe0(LPCSTR param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  int iVar2;
  NUMBERFMTA local_18;
  
  iVar2 = 0;
  local_18.NumDigits = 0;
  local_18.LeadingZero = DAT_00511090;
  local_18.lpDecimalSep = "";
  local_18.Grouping = DAT_00511088;
  local_18.lpThousandSep = &DAT_00511070;
  do {
    switch((int)*param_1) {
    case 0:
    case 0x2d:
    case 0x2e:
switchD_0041a02c_caseD_0:
      if (*param_1 != '\0') {
        iVar1 = FUN_0041a0e0(0x400,0,param_1,&local_18,param_2,param_3 - iVar2);
        return iVar1 + iVar2;
      }
      *param_2 = '\0';
      return iVar2;
    default:
      iVar1 = _ismbcdigit((int)*param_1);
      if (iVar1 != 0) goto switchD_0041a02c_caseD_0;
      break;
    case 0x30:
      if (param_1[1] == '.') goto switchD_0041a02c_caseD_0;
    }
    if (param_3 <= iVar2) goto switchD_0041a02c_caseD_0;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}


