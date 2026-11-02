/* Module: vegas30k.dll
   Function: FUN_01060b00
   Address: 01060b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01060b00(int param_1,int param_2)

{
  FUN_01060890();
  if ((param_2 == 0) && (*(int *)(param_1 + 0x28) != 0)) {
    return 1;
  }
  FUN_010609f0();
  if (*(HANDLE *)(param_1 + 600) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 600));
    *(undefined4 *)(param_1 + 600) = 0xffffffff;
  }
  return 0;
}


