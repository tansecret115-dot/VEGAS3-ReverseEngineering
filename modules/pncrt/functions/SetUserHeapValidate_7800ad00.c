/* Module: pncrt.dll
   Function: SetUserHeapValidate
   Address: 7800ad00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl SetUserHeapValidate(undefined4 param_1)

{
  undefined4 uVar1;
  
                    /* 0xad00  55  SetUserHeapValidate */
  uVar1 = DAT_780421e4;
  DAT_780421e4 = param_1;
  return uVar1;
}


