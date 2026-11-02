/* Module: pncrt.dll
   Function: _unlink
   Address: 780199c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _unlink(char *_Filename)

{
  int iVar1;
  
                    /* 0x199c0  487  _unlink */
  iVar1 = remove(_Filename);
  return iVar1;
}


