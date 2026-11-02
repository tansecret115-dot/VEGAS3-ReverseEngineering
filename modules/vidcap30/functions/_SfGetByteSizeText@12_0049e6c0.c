/* Module: vidcap30.exe
   Function: _SfGetByteSizeText@12
   Address: 0049e6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfGetByteSizeText_12(uint param_1,int param_2,LPSTR param_3)

{
  double local_10;
  
                    /* 0x9e6c0  390  _SfGetByteSizeText@12 */
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x400)))) {
    wsprintfA(param_3,"%d");
    return;
  }
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < 0xfa000)) {
      local_10 = (double)CONCAT44(param_2,param_1) * _DAT_005996c8;
      if (local_10 < _DAT_0058a8f0) {
        local_10 = 0.01;
      }
      SfPrintF(param_3,"$.2fKB",local_10._0_4_,(int)((ulonglong)local_10 >> 0x20));
      return;
    }
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x3d090000)))) {
      SfPrintF(param_3,"$.2fMB",(double)CONCAT44(param_2,param_1) * _DAT_005996b8);
      return;
    }
  }
  SfPrintF(param_3,"$.2fGB",(double)CONCAT44(param_2,param_1) * _DAT_005996a8);
  return;
}


