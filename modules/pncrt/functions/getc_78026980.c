/* Module: pncrt.dll
   Function: getc
   Address: 78026980
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl getc(FILE *_File)

{
  int iVar1;
  
                    /* 0x26980  626  getc */
  iVar1 = fgetc(_File);
  return iVar1;
}


