/* Module: pncrt.dll
   Function: FUN_7800a720
   Address: 7800a720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_7800a720(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  puVar1[1] = 0;
  *puVar1 = param_1;
  if (DAT_780421c0 != (undefined4 *)0x0) {
    *(undefined4 **)((int)DAT_780421cc + 4) = puVar1;
    DAT_780421cc = puVar1;
    return 0;
  }
  DAT_780421c0 = puVar1;
  DAT_780421cc = puVar1;
  return 0;
}


