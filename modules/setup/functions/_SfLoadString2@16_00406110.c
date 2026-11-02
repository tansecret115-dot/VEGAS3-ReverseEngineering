/* Module: Setup.exe
   Function: _SfLoadString2@16
   Address: 00406110
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfLoadString2_16(undefined4 *param_1,uint param_2,LPSTR param_3,int param_4)

{
  LPCSTR lpString2;
  
                    /* 0x6110  259  _SfLoadString2@16 */
  if (param_3 != (LPSTR)0x0) {
    *param_3 = '\0';
    lpString2 = _SfGetString2_8(param_1,param_2);
    if (lpString2 != (LPCSTR)0x0) {
      lstrcpynA(param_3,lpString2,param_4);
      param_3[param_4 + -1] = '\0';
      return param_4;
    }
  }
  return 0;
}


