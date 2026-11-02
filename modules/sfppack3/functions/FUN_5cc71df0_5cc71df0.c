/* Module: sfppack3.dll
   Function: FUN_5cc71df0
   Address: 5cc71df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc71df0(void)

{
  CHAR local_158 [260];
  OLECHAR local_54 [40];
  
  StringFromGUID2((GUID *)&stack0x00000004,local_54,0x27);
  wsprintfA(local_158,"CLSID\\%ls",local_54);
  FUN_5cc71bb2((HKEY)0x80000000,local_158);
  return 0;
}


