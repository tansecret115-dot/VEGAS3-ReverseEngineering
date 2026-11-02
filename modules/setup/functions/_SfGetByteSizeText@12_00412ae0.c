/* Module: Setup.exe
   Function: _SfGetByteSizeText@12
   Address: 00412ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SfGetByteSizeText_12(uint param_1,int param_2,uchar *param_3)

{
                    /* 0x12ae0  138  _SfGetByteSizeText@12 */
  if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x400)))) {
    wsprintfA((LPSTR)param_3,"%d");
    return;
  }
  if (param_2 < 1) {
    if ((param_2 < 0) || (param_1 < 0xfa000)) {
      SfPrintF(param_3,(BYTE *)"$.2fKB");
      return;
    }
    if ((param_2 < 1) && ((param_2 < 0 || (param_1 < 0x3d090000)))) {
      SfPrintF(param_3,(BYTE *)"$.2fMB");
      return;
    }
  }
  SfPrintF(param_3,(BYTE *)"$.2fGB");
  return;
}


