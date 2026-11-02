/* Module: mpegin.dll
   Function: FUN_10011351
   Address: 10011351
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_10011351(undefined *param_1)

{
  if (DAT_1001b410 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1001b410), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000e22b(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000e22b(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000e22b(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000e22b(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000e22b(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000e22b(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1001bb10) {
        FUN_1000e22b(*(undefined **)(param_1 + 0x50));
      }
      FUN_1000e22b(param_1);
    }
    TlsSetValue(DAT_1001b410,(LPVOID)0x0);
    return;
  }
  return;
}


