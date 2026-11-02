/* Module: vegas30k.dll
   Function: _SfDSFilter_GetPresetCount@12
   Address: 01028eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDSFilter_GetPresetCount_12(HKEY param_1,LPDWORD param_2,undefined4 param_3)

{
  int iVar1;
  
                    /* 0x28eb0  804  _SfDSFilter_GetPresetCount@12 */
  iVar1 = (int)param_1;
  if (param_1 == (HKEY)0x0) {
    return -0x7fffbffd;
  }
  param_1 = (HKEY)0x0;
  iVar1 = FUN_01028690(iVar1,&param_1,0,param_3);
  if (iVar1 == 0) {
    RegQueryInfoKeyA(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,
                     (LPDWORD)0x0,param_2,(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
    RegCloseKey(param_1);
    iVar1 = 0;
  }
  return iVar1;
}


