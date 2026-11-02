/* Module: sfxpfx1.dll
   Function: FUN_5c975db0
   Address: 5c975db0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c975db0(void)

{
  CHAR local_158 [260];
  OLECHAR local_54 [40];
  
  StringFromGUID2((GUID *)&stack0x00000004,local_54,0x27);
  wsprintfA(local_158,"CLSID\\%ls",local_54);
  FUN_5c975b72((HKEY)0x80000000,local_158);
  return 0;
}


