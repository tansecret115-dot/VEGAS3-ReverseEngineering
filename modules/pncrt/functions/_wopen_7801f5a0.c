/* Module: pncrt.dll
   Function: _wopen
   Address: 7801f5a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _wopen(wchar_t *_Filename,int _OpenFlag,...)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  
                    /* 0x1f5a0  538  _wopen */
  iVar1 = _wsopen(_Filename,_OpenFlag,0x40,in_stack_0000000c);
  return iVar1;
}


