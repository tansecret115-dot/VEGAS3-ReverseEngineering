/* Module: pncrt.dll
   Function: SetUserHeapFree
   Address: 7800acc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl SetUserHeapFree(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0xacc0  52  SetUserHeapFree */
  uVar1 = DAT_780421d4;
  DAT_780421d4 = param_1;
  return uVar1;
}


