/* Module: sftrans1.dll
   Function: FUN_004d5e20
   Address: 004d5e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004d5e20(char *param_1,char *param_2,int param_3,int param_4)

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
      if (param_4 != -1) goto LAB_004d5e59;
    }
    param_4 = 0;
  }
LAB_004d5e59:
  local_14 = DAT_0057ba80;
  local_c = &DAT_0057ba6c;
  local_10 = DAT_0057ba78;
  local_8 = &DAT_0057ba60;
  iVar4 = 0;
  local_18 = param_4;
  do {
    switch((int)*param_1) {
    case 0:
    case 0x2d:
    case 0x2e:
switchD_004d5e9a_caseD_0:
      if (*param_1 != '\0') {
        iVar2 = FUN_004d5c30(0x400,0,param_1,&local_18,param_2,param_3 - iVar4);
        return iVar2 + iVar4;
      }
      *param_2 = '\0';
      return iVar4;
    default:
      iVar2 = _ismbcdigit((int)*param_1);
      if (iVar2 != 0) goto switchD_004d5e9a_caseD_0;
      break;
    case 0x30:
      if (param_1[1] == '.') goto switchD_004d5e9a_caseD_0;
    }
    if (param_3 <= iVar4) goto switchD_004d5e9a_caseD_0;
    *param_2 = *param_1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    iVar4 = iVar4 + 1;
  } while( true );
}


