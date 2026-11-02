/* Module: vidpcore.dll
   Function: FUN_5dec4c50
   Address: 5dec4c50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5dec4c50(char *param_1,char *param_2,int param_3)

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
    if (local_18 != -1) goto LAB_5dec4c84;
  }
  local_18 = 0;
LAB_5dec4c84:
  iVar4 = 0;
  local_14 = DAT_5df430d0;
  local_c = &DAT_5df430bc;
  local_10 = 0;
  local_8 = &DAT_5df430b0;
  do {
    switch((int)*param_1) {
    case 0:
    case 0x2d:
    case 0x2e:
switchD_5dec4cbf_caseD_0:
      if (*param_1 != '\0') {
        iVar1 = FUN_5dec4b80(0x400,0,param_1,&local_18,param_2,param_3 - iVar4);
        return iVar1 + iVar4;
      }
      *param_2 = '\0';
      return iVar4;
    default:
      iVar1 = _ismbcdigit((int)*param_1);
      if (iVar1 != 0) goto switchD_5dec4cbf_caseD_0;
      break;
    case 0x30:
      if (param_1[1] == '.') goto switchD_5dec4cbf_caseD_0;
    }
    if (param_3 <= iVar4) goto switchD_5dec4cbf_caseD_0;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
  } while( true );
}


