/* Module: pncrt.dll
   Function: SetUserHeapSize
   Address: 7800ad10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl SetUserHeapSize(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0xad10  54  SetUserHeapSize */
  uVar1 = DAT_780421e8;
  DAT_780421e8 = param_1;
  return uVar1;
}


