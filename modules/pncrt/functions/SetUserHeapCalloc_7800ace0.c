/* Module: pncrt.dll
   Function: SetUserHeapCalloc
   Address: 7800ace0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl SetUserHeapCalloc(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0xace0  51  SetUserHeapCalloc */
  uVar1 = DAT_780421dc;
  DAT_780421dc = param_1;
  return uVar1;
}


