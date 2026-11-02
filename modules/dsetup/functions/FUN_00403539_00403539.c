/* Module: dsetup.dll
   Function: FUN_00403539
   Address: 00403539
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00403539(undefined *param_1)

{
  if (DAT_00408050 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_00408050), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_0040310c(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_0040310c(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_0040310c(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_0040310c(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_0040310c(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_0040310c(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_0040a428) {
        FUN_0040310c(*(undefined **)(param_1 + 0x50));
      }
      FUN_0040310c(param_1);
    }
    TlsSetValue(DAT_00408050,(LPVOID)0x0);
    return;
  }
  return;
}


