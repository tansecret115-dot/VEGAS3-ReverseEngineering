/* Module: pncrt.dll
   Function: _cprintf
   Address: 780235c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _cprintf(char *_Format,...)

{
  int iVar1;
  
                    /* 0x235c0  195  _cprintf */
  iVar1 = FUN_780235e0(_Format,(undefined4 *)&stack0x00000008);
  return iVar1;
}


