/* Module: pncrt.dll
   Function: _umask
   Address: 78022760
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _umask(int _Mode)

{
  int iVar1;
  
                    /* 0x22760  485  _umask */
  iVar1 = DAT_78041dd8;
  DAT_78041dd8 = _Mode & 0x180;
  return iVar1;
}


