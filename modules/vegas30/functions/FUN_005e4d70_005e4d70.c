/* Module: vegas30.exe
   Function: FUN_005e4d70
   Address: 005e4d70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_005e4d70(int param_1)

{
  HWND lParam;
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0x80004003;
  }
  lParam = GetDlgItem(*(HWND *)(param_1 + 0x10),0x4b2);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x111,0x20004b2,(LPARAM)lParam);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x24))
                    (*(int **)(param_1 + 0x28),param_1 + 0x30,0x30);
  return uVar1;
}


