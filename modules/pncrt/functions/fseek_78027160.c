/* Module: pncrt.dll
   Function: fseek
   Address: 78027160
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl fseek(FILE *_File,long _Offset,int _Origin)

{
  int iVar1;
  
                    /* 0x27160  620  fseek */
  FUN_780094a0((uint)_File);
  iVar1 = FUN_780271a0((int *)_File,_Offset,_Origin);
  FUN_78009510((uint)_File);
  return iVar1;
}


