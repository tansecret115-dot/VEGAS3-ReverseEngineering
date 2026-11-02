/* Module: vegas30k.dll
   Function: _SfFormatDecimalNumber@12
   Address: 01093860
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfFormatDecimalNumber_12(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined *local_8;
  
                    /* 0x93860  935  _SfFormatDecimalNumber@12 */
  local_18 = -1;
  cVar2 = *param_1;
  pcVar3 = param_1;
  if (cVar2 != '\0') {
    do {
      if (cVar2 == '.') {
        local_18 = 0;
      }
      else if (local_18 != -1) {
        local_18 = local_18 + 1;
      }
      cVar2 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    if (local_18 != -1) goto LAB_01093894;
  }
  local_18 = 0;
LAB_01093894:
  iVar4 = 0;
  local_14 = DAT_0120e7c0;
  local_c = &DAT_0120e7ac;
  local_10 = 0;
  local_8 = &DAT_0120e7a0;
  do {
    switch((int)*param_1) {
    case 0:
    case 0x2d:
    case 0x2e:
switchD_010938cf_caseD_0:
      if (*param_1 != '\0') {
        iVar1 = FUN_01093790(0x400,0,param_1,&local_18,param_2,param_3 - iVar4);
        return iVar1 + iVar4;
      }
      *param_2 = '\0';
      return iVar4;
    default:
      iVar1 = _ismbcdigit((int)*param_1);
      if (iVar1 != 0) goto switchD_010938cf_caseD_0;
      break;
    case 0x30:
      if (param_1[1] == '.') goto switchD_010938cf_caseD_0;
    }
    if (param_3 <= iVar4) goto switchD_010938cf_caseD_0;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
  } while( true );
}


