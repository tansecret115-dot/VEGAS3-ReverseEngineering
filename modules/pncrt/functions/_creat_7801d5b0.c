/* Module: pncrt.dll
   Function: _creat
   Address: 7801d5b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _creat(char *_Filename,int _PermissionMode)

{
  int iVar1;
  
                    /* 0x1d5b0  197  _creat */
  iVar1 = _open(_Filename,0x302,_PermissionMode);
  return iVar1;
}


