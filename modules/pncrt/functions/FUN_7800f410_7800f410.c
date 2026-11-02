/* Module: pncrt.dll
   Function: FUN_7800f410
   Address: 7800f410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_7800f410(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    free((void *)param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}


