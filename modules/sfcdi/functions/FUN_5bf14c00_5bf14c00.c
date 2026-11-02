/* Module: sfcdi.dll
   Function: FUN_5bf14c00
   Address: 5bf14c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5bf14c00(tPARAMETERS_PRNCFG *param_1,int param_2,LPSTR param_3,uint param_4,uchar *param_5,
            uint param_6)

{
  LPSTR lpString2;
  
  if (param_3 != (LPSTR)0x0) {
    *param_3 = '\0';
  }
  if (param_5 != (uchar *)0x0) {
    *param_5 = '\0';
  }
  switch(param_2) {
  case -7:
  case -2:
  case -1:
    prn_LoadErrorString(param_2,param_3,param_4);
    return 0;
  case -6:
  case -5:
  case -4:
  case -3:
    if (param_3 != (LPSTR)0x0) {
      lpString2 = FUN_5bf283e0(DAT_5bf65fc4,0xdb);
      lstrcpynA(param_3,lpString2,param_4);
      param_3[param_4 - 1] = '\0';
    }
    if (param_5 != (uchar *)0x0) {
      prn_LoadErrorString(param_2,(char *)param_5,param_6 - 2);
      _mbscat(param_5,"\r\n");
      return 0;
    }
    break;
  default:
    prn_GetDriverErrorString(param_1,(tCDR_ERRORDATA *)(param_1 + 0x150),(char *)param_5,param_6);
    prn_LoadErrorString(*(int *)(param_1 + 0x196),param_3,param_4);
  }
  return 0;
}


