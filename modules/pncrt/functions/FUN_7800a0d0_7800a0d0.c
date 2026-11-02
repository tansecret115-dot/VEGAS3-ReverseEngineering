/* Module: pncrt.dll
   Function: FUN_7800a0d0
   Address: 7800a0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7800a0d0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar1[1] = 0;
  *puVar1 = param_1;
  if (DAT_78041fa4 != (undefined4 *)0x0) {
    *(undefined4 **)((int)DAT_78041fb0 + 4) = puVar1;
    DAT_78041fb0 = puVar1;
    return 0;
  }
  DAT_78041fa4 = puVar1;
  DAT_78041fb0 = puVar1;
  return 0;
}


