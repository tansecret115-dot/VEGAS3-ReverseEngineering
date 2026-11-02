/* Module: sftrkfx1.dll
   Function: FUN_5cbef880
   Address: 5cbef880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbef880(void)

{
  CHAR local_158 [260];
  OLECHAR local_54 [40];
  
  StringFromGUID2((GUID *)&stack0x00000004,local_54,0x27);
  wsprintfA(local_158,"CLSID\\%ls",local_54);
  FUN_5cbef642((HKEY)0x80000000,local_158);
  return 0;
}


