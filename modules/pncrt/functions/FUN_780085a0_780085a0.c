/* Module: pncrt.dll
   Function: FUN_780085a0
   Address: 780085a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_780085a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_78041ac4 != (code *)0x0) {
    uVar1 = (*DAT_78041ac4)(param_1);
    return uVar1;
  }
  return 0;
}


