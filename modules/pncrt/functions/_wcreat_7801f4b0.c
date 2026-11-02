/* Module: pncrt.dll
   Function: _wcreat
   Address: 7801f4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wcreat(wchar_t *_Filename,int _PermissionMode)

{
  int iVar1;
  
                    /* 0x1f4b0  498  _wcreat */
  iVar1 = _wopen(_Filename,0x302,_PermissionMode);
  return iVar1;
}


