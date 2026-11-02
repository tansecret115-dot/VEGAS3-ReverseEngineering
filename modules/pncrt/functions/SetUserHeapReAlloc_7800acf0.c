/* Module: pncrt.dll
   Function: SetUserHeapReAlloc
   Address: 7800acf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl SetUserHeapReAlloc(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0xacf0  53  SetUserHeapReAlloc */
  uVar1 = DAT_780421e0;
  DAT_780421e0 = param_1;
  return uVar1;
}


