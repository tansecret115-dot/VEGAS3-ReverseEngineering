/* Module: pncrt.dll
   Function: fread
   Address: 78026f40
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  uint uVar1;
  
                    /* 0x26f40  615  fread */
  FUN_780094a0((uint)_File);
  uVar1 = FUN_78026f80(_DstBuf,_ElementSize,_Count,_File);
  FUN_78009510((uint)_File);
  return uVar1;
}


