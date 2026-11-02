/* Module: pncrt.dll
   Function: strtoul
   Address: 78017f70
   Source: Ghidra pseudocode (Stage 10 batch) */


ulong __cdecl strtoul(char *_Str,char **_EndPtr,int _Radix)

{
  uint uVar1;
  
                    /* 0x17f70  723  strtoul */
  uVar1 = FUN_78017ce0((byte *)_Str,_EndPtr,_Radix,1);
  return uVar1;
}


