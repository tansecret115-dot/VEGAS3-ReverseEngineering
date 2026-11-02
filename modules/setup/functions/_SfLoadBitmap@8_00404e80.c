/* Module: Setup.exe
   Function: _SfLoadBitmap@8
   Address: 00404e80
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadBitmap_8(undefined4 *param_1,LPCSTR param_2)

{
                    /* 0x4e80  251  _SfLoadBitmap@8 */
  if (param_1 != (undefined4 *)0x0) {
    LoadBitmapA((HINSTANCE)*param_1,param_2);
    return;
  }
  LoadBitmapA((HINSTANCE)0x0,param_2);
  return;
}


