/* Module: vidcap30.exe
   Function: FUN_00439310
   Address: 00439310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00439310(int param_1,undefined4 param_2,UINT param_3,WPARAM param_4,LPARAM param_5)

{
  switch(param_4) {
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x27:
    if (*(int *)(param_1 + 0x1bf8) != 0) {
      SendMessageA(*(HWND *)(param_1 + 8),0x111,*(ushort *)(param_1 + 0x1c04) | 0x30000,0);
      *(undefined4 *)(param_1 + 0x1bf8) = 0;
      return;
    }
    break;
  default:
    DefWindowProcA(*(HWND *)(param_1 + 8),param_3,param_4,param_5);
  }
  return;
}


