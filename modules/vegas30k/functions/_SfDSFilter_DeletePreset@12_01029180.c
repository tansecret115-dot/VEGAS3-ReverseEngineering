/* Module: vegas30k.dll
   Function: _SfDSFilter_DeletePreset@12
   Address: 01029180
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfDSFilter_DeletePreset_12(int param_1,LPCSTR param_2,undefined4 param_3)

{
  int iVar1;
  LSTATUS LVar2;
  HKEY local_40c;
  DWORD local_408;
  DWORD local_404;
  BYTE local_400 [1024];
  
                    /* 0x29180  802  _SfDSFilter_DeletePreset@12 */
  if (param_1 == 0) {
    return -0x7fffbffd;
  }
  local_40c = (HKEY)0x0;
  iVar1 = FUN_01028690(param_1,&local_40c,0,param_3);
  if (iVar1 == 0) {
    local_408 = 0x400;
    LVar2 = RegQueryValueExA(local_40c,param_2,(LPDWORD)0x0,&local_404,local_400,&local_408);
    if (LVar2 == 0) {
      if (local_404 == 1) {
        DeleteFileA((LPCSTR)local_400);
      }
      RegDeleteValueA(local_40c,param_2);
    }
    RegCloseKey(local_40c);
    iVar1 = 0;
  }
  return iVar1;
}


