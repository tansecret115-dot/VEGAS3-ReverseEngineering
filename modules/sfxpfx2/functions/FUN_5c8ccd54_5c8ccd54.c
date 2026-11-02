/* Module: sfxpfx2.dll
   Function: FUN_5c8ccd54
   Address: 5c8ccd54
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c8ccd54(int param_1)

{
  FUN_5c8cd1ff(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_5c8ccca2((undefined4 *)(param_1 + 8));
  FUN_5c8ccca2((undefined4 *)(param_1 + 4));
  return;
}


