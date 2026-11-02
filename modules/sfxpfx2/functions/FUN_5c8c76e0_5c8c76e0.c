/* Module: sfxpfx2.dll
   Function: FUN_5c8c76e0
   Address: 5c8c76e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8c76e0(void)

{
  CHAR local_158 [260];
  OLECHAR local_54 [40];
  
  StringFromGUID2((GUID *)&stack0x00000004,local_54,0x27);
  wsprintfA(local_158,"CLSID\\%ls",local_54);
  FUN_5c8c74a2((HKEY)0x80000000,local_158);
  return 0;
}


