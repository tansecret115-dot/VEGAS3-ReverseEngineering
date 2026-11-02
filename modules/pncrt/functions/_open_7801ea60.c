/* Module: pncrt.dll
   Function: _open
   Address: 7801ea60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _open(char *_Filename,int _OpenFlag,...)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  
                    /* 0x1ea60  401  _open */
  iVar1 = _sopen(_Filename,_OpenFlag,0x40,in_stack_0000000c);
  return iVar1;
}


