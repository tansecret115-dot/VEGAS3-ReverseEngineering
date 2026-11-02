/* Module: pncrt.dll
   Function: vprintf
   Address: 78028080
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl vprintf(char *_Format,va_list _ArgList)

{
  int iVar1;
  int iVar2;
  
                    /* 0x28080  741  vprintf */
  FUN_780094a0(0x7803f818);
  iVar1 = FUN_7800e8c0(&DAT_7803f818);
  iVar2 = FUN_7800e9b0((FILE *)&DAT_7803f818,_Format,(undefined4 *)_ArgList);
  FUN_7800e970(iVar1,&DAT_7803f818);
  FUN_78009510(0x7803f818);
  return iVar2;
}


