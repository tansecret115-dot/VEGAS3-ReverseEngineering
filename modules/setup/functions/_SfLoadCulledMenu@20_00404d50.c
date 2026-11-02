/* Module: Setup.exe
   Function: _SfLoadCulledMenu@20
   Address: 00404d50
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU _SfLoadCulledMenu_20(undefined4 *param_1,LPCSTR param_2,UINT *param_3,int param_4,int param_5)

{
  HMENU pHVar1;
  
                    /* 0x4d50  252  _SfLoadCulledMenu@20 */
  pHVar1 = (HMENU)_SfLoadMenu_8(param_1,param_2);
  if (pHVar1 != (HMENU)0x0) {
    _SfCullMenu_16(pHVar1,param_3,param_4,param_5);
  }
  return pHVar1;
}


