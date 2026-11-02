/* Module: pncrt.dll
   Function: strtol
   Address: 78017cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


long __cdecl strtol(char *_Str,char **_EndPtr,int _Radix)

{
  uint uVar1;
  
                    /* 0x17cc0  722  strtol */
  uVar1 = FUN_78017ce0((byte *)_Str,_EndPtr,_Radix,0);
  return uVar1;
}


