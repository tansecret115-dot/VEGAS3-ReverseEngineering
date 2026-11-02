/* Module: pncrt.dll
   Function: fsetpos
   Address: 78027240
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  
                    /* 0x27240  621  fsetpos */
  iVar1 = FUN_7802a3e0((int *)_File,(int)*_Pos,*(undefined4 *)((int)_Pos + 4),0);
  return iVar1;
}


