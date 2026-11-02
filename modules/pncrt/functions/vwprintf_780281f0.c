/* Module: pncrt.dll
   Function: vwprintf
   Address: 780281f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl vwprintf(wchar_t *_Format,va_list _ArgList)

{
  int iVar1;
  int iVar2;
  
                    /* 0x281f0  744  vwprintf */
  FUN_780094a0(0x7803f818);
  iVar1 = FUN_7800e8c0(&DAT_7803f818);
  iVar2 = FUN_780285a0((FILE *)&DAT_7803f818,_Format,(undefined4 *)_ArgList);
  FUN_7800e970(iVar1,&DAT_7803f818);
  FUN_78009510(0x7803f818);
  return iVar2;
}


