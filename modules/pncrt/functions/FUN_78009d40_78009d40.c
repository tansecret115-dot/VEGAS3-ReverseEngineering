/* Module: pncrt.dll
   Function: FUN_78009d40
   Address: 78009d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78009d40(LPVOID param_1)

{
  if (DAT_7803d248 != 0xffffffff) {
    if (((param_1 != (LPVOID)0x0) || (param_1 = TlsGetValue(DAT_7803d248), param_1 != (LPVOID)0x0))
       && (DAT_780421d4 == 0)) {
      if (*(void **)((int)param_1 + 0x24) != (void *)0x0) {
        free(*(void **)((int)param_1 + 0x24));
      }
      if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
        free(*(void **)((int)param_1 + 0x28));
      }
      if (*(void **)((int)param_1 + 0x30) != (void *)0x0) {
        free(*(void **)((int)param_1 + 0x30));
      }
      if (*(void **)((int)param_1 + 0x38) != (void *)0x0) {
        free(*(void **)((int)param_1 + 0x38));
      }
      if (*(void **)((int)param_1 + 0x40) != (void *)0x0) {
        free(*(void **)((int)param_1 + 0x40));
      }
      if (*(void **)((int)param_1 + 0x44) != (void *)0x0) {
        free(*(void **)((int)param_1 + 0x44));
      }
      if (*(undefined4 **)((int)param_1 + 0x50) != &DAT_7803f770) {
        free(*(undefined4 **)((int)param_1 + 0x50));
      }
      free(param_1);
    }
    TlsSetValue(DAT_7803d248,(LPVOID)0x0);
    return;
  }
  return;
}


