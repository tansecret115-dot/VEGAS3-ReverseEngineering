/* Module: pncrt.dll
   Function: fwrite
   Address: 78027490
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl fwrite(void *_Str,size_t _Size,size_t _Count,FILE *_File)

{
  uint uVar1;
  
                    /* 0x27490  624  fwrite */
  FUN_780094a0((uint)_File);
  uVar1 = FUN_780274d0(_Str,_Size,_Count,_File);
  FUN_78009510((uint)_File);
  return uVar1;
}


