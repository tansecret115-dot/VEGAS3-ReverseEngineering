/* Module: pncrt.dll
   Function: ungetc
   Address: 78027dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl ungetc(int _Ch,FILE *_File)

{
  uint uVar1;
  
                    /* 0x27dd0  737  ungetc */
  FUN_780094a0((uint)_File);
  uVar1 = FUN_78027e00(_Ch,(int *)_File);
  FUN_78009510((uint)_File);
  return uVar1;
}


