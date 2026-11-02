/* Module: Setup.exe
   Function: _SfLoadImage@24
   Address: 00404f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadImage_24(undefined4 *param_1,LPCSTR param_2,UINT param_3,int param_4,int param_5,
                    UINT param_6)

{
                    /* 0x4f30  255  _SfLoadImage@24 */
  if (param_1 != (undefined4 *)0x0) {
    LoadImageA((HINSTANCE)*param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  LoadImageA((HINSTANCE)0x0,param_2,param_3,param_4,param_5,param_6);
  return;
}


