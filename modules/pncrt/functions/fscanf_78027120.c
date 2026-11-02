/* Module: pncrt.dll
   Function: fscanf
   Address: 78027120
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fscanf(FILE *_File,char *_Format,...)

{
  int iVar1;
  
                    /* 0x27120  619  fscanf */
  FUN_780094a0((uint)_File);
  iVar1 = FUN_78029600(_File,(byte *)_Format,(undefined4 *)&stack0x0000000c);
  FUN_78009510((uint)_File);
  return iVar1;
}


