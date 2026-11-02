/* Module: vidcap30.exe
   Function: _SfFormatNumber@12
   Address: 00483880
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfFormatNumber_12(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *local_c;
  undefined *local_8;
  
                    /* 0x83880  386  _SfFormatNumber@12 */
  iVar2 = 0;
  local_18 = 0;
  local_14 = DAT_005c18d0;
  local_c = &DAT_00586c70;
  local_10 = DAT_005c18c8;
  local_8 = &DAT_005c18b0;
  do {
    switch((int)*param_1) {
    case 0:
    case 0x2d:
    case 0x2e:
switchD_004838cc_caseD_0:
      if (*param_1 != '\0') {
        iVar1 = FUN_00483980(0x400,0,param_1,&local_18,param_2,param_3 - iVar2);
        return iVar1 + iVar2;
      }
      *param_2 = '\0';
      return iVar2;
    default:
      iVar1 = _ismbcdigit((int)*param_1);
      if (iVar1 != 0) goto switchD_004838cc_caseD_0;
      break;
    case 0x30:
      if (param_1[1] == '.') goto switchD_004838cc_caseD_0;
    }
    if (param_3 <= iVar2) goto switchD_004838cc_caseD_0;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}


