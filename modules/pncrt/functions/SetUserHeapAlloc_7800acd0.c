/* Module: pncrt.dll
   Function: SetUserHeapAlloc
   Address: 7800acd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl SetUserHeapAlloc(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0xacd0  50  SetUserHeapAlloc */
  uVar1 = DAT_780421d8;
  DAT_780421d8 = param_1;
  return uVar1;
}


