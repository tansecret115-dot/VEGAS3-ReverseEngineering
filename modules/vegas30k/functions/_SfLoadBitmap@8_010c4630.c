/* Module: vegas30k.dll
   Function: _SfLoadBitmap@8
   Address: 010c4630
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfLoadBitmap_8(undefined4 *param_1,LPCSTR param_2)

{
                    /* 0xc4630  1088  _SfLoadBitmap@8 */
  if (param_1 != (undefined4 *)0x0) {
    LoadBitmapA((HINSTANCE)*param_1,param_2);
    return;
  }
  LoadBitmapA((HINSTANCE)0x0,param_2);
  return;
}


