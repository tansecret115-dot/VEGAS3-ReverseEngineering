/* Module: sftrans1.dll
   Function: FUN_004d5b30
   Address: 004d5b30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004d5b30(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined *local_8;
  
  iVar2 = 0;
  local_18 = 0;
  local_14 = DAT_0057ba80;
  local_c = &DAT_00555654;
  local_10 = DAT_0057ba78;
  local_8 = &DAT_0057ba60;
  do {
    switch((int)*param_1) {
    case 0:
    case 0x2d:
    case 0x2e:
switchD_004d5b7c_caseD_0:
      if (*param_1 != '\0') {
        iVar1 = FUN_004d5c30(0x400,0,param_1,&local_18,param_2,param_3 - iVar2);
        return iVar1 + iVar2;
      }
      *param_2 = '\0';
      return iVar2;
    default:
      iVar1 = _ismbcdigit((int)*param_1);
      if (iVar1 != 0) goto switchD_004d5b7c_caseD_0;
      break;
    case 0x30:
      if (param_1[1] == '.') goto switchD_004d5b7c_caseD_0;
    }
    if (param_3 <= iVar2) goto switchD_004d5b7c_caseD_0;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while( true );
}


