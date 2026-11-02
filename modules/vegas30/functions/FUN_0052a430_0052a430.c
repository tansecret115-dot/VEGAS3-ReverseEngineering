/* Module: vegas30.exe
   Function: FUN_0052a430
   Address: 0052a430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052a430(int param_1,HWND param_2)

{
  if ((*(int *)(param_1 + 8) != 0) && (param_2 != (HWND)0x0)) {
    if (*(HWND *)(param_1 + 0x8c) != (HWND)0x0) {
      SetParent(*(HWND *)(param_1 + 0x8c),param_2);
      SendMessageA(*(HWND *)(param_1 + 0xb0),0x601,0,*(LPARAM *)(param_1 + 0x8c));
    }
    *(HWND *)(param_1 + 8) = param_2;
  }
  return 0;
}


