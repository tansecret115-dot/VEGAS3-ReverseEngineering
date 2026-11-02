/* Module: vegas30k.dll
   Function: _SfDSFilter_GetPresetName@20
   Address: 01028f10
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDSFilter_GetPresetName_20
              (HKEY param_1,DWORD param_2,LPSTR param_3,LPDWORD param_4,DWORD param_5)

{
  int iVar1;
  
                    /* 0x28f10  805  _SfDSFilter_GetPresetName@20 */
  iVar1 = (int)param_1;
  if (param_1 == (HKEY)0x0) {
    return -0x7fffbffd;
  }
  param_1 = (HKEY)0x0;
  iVar1 = FUN_01028690(iVar1,&param_1,0,param_5);
  if (iVar1 == 0) {
    RegEnumValueA(param_1,param_2,param_3,param_4,(LPDWORD)0x0,&param_5,(LPBYTE)0x0,(LPDWORD)0x0);
    RegCloseKey(param_1);
    iVar1 = 0;
  }
  return iVar1;
}


