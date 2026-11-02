/* Module: mpegin.dll
   Function: FUN_10015651
   Address: 10015651
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10015651(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_1000e22b((undefined *)param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}


