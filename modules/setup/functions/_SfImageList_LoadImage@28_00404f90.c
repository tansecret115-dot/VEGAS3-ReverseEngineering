/* Module: Setup.exe
   Function: _SfImageList_LoadImage@28
   Address: 00404f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfImageList_LoadImage_28
               (undefined4 *param_1,LPCSTR param_2,int param_3,int param_4,COLORREF param_5,
               UINT param_6,UINT param_7)

{
                    /* 0x4f90  195  _SfImageList_LoadImage@28 */
  if (param_1 == (undefined4 *)0x0) {
    ImageList_LoadImageA((HINSTANCE)0x0,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  ImageList_LoadImageA((HINSTANCE)*param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}


