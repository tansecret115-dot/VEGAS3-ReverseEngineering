/* Module: wavplug.dll
   Function: FUN_5f38cb00
   Address: 5f38cb00
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG __fastcall FUN_5f38cb00(int *param_1)

{
  if ((HANDLE)param_1[0x86] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[0x86]);
    param_1[0x86] = -1;
  }
  if (param_1[0x88] != 0) {
    InterlockedDecrement(param_1 + 0x88);
  }
  (**(code **)(*param_1 + 8))(param_1);
  return param_1[0x88];
}


