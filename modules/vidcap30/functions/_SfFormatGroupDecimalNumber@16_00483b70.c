/* Module: vidcap30.exe
   Function: _SfFormatGroupDecimalNumber@16
   Address: 00483b70
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfFormatGroupDecimalNumber_16(char *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined *local_8;
  
                    /* 0x83b70  385  _SfFormatGroupDecimalNumber@16 */
  if (param_4 == -1) {
    cVar1 = *param_1;
    pcVar3 = param_1;
    if (cVar1 != '\0') {
      do {
        if (cVar1 == '.') {
          param_4 = 0;
        }
        else if (param_4 != -1) {
          param_4 = param_4 + 1;
        }
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (param_4 != -1) goto LAB_00483ba9;
    }
    param_4 = 0;
  }
LAB_00483ba9:
  local_14 = DAT_005c18d0;
  local_c = &DAT_005c18bc;
  local_10 = DAT_005c18c8;
  local_8 = &DAT_005c18b0;
  iVar4 = 0;
  local_18 = param_4;
  do {
    switch((int)*param_1) {
    case 0:
    case 0x2d:
    case 0x2e:
switchD_00483bea_caseD_0:
      if (*param_1 != '\0') {
        iVar2 = FUN_00483980(0x400,0,param_1,&local_18,param_2,param_3 - iVar4);
        return iVar2 + iVar4;
      }
      *param_2 = '\0';
      return iVar4;
    default:
      iVar2 = _ismbcdigit((int)*param_1);
      if (iVar2 != 0) goto switchD_00483bea_caseD_0;
      break;
    case 0x30:
      if (param_1[1] == '.') goto switchD_00483bea_caseD_0;
    }
    if (param_3 <= iVar4) goto switchD_00483bea_caseD_0;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
  } while( true );
}


