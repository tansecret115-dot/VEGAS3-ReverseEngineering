/* Module: sfcdi.dll
   Function: FUN_5bf14b50
   Address: 5bf14b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5bf14b50(tPARAMETERS_LDRCFG *param_1,int param_2,LPSTR param_3,uint param_4,uchar *param_5,
            uint param_6)

{
  LPSTR lpString2;
  
  if (param_3 != (LPSTR)0x0) {
    *param_3 = '\0';
  }
  if (param_5 != (uchar *)0x0) {
    *param_5 = '\0';
  }
  if ((param_2 < -6) || (-3 < param_2)) {
    ldr_GetDriverErrorString(param_1,(tCDR_ERRORDATA *)(param_1 + 0x150),(char *)param_5,param_6);
    ldr_LoadErrorString(*(int *)(param_1 + 0x196),param_3,param_4);
  }
  else {
    if (param_3 != (LPSTR)0x0) {
      lpString2 = FUN_5bf283e0(DAT_5bf65fc4,0xdb);
      lstrcpynA(param_3,lpString2,param_4);
      param_3[param_4 - 1] = '\0';
    }
    if (param_5 != (uchar *)0x0) {
      ldr_LoadErrorString(param_2,(char *)param_5,param_6 - 2);
      _mbscat(param_5,"\r\n");
      return 0;
    }
  }
  return 0;
}


