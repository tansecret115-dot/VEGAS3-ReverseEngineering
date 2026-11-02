/* Module: vidcap30.exe
   Function: FUN_0040b220
   Address: 0040b220
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040b220(int param_1,UINT param_2,WPARAM param_3,LPARAM param_4)

{
  if (((*(uint *)(param_1 + 0xc) & 0x100000) == 0) || ((*(uint *)(param_1 + 0xc) & 4) != 0)) {
    if (param_2 == 0xa3) {
      SendMessageA(*(HWND *)(param_1 + 8),0x603,0,0);
    }
  }
  else {
    if (param_2 == 0xa0) {
      FUN_0040b120(param_1,param_3 == 2);
    }
    if (((*(int *)(param_1 + 0x4c) == 4) || (param_3 == 2)) ||
       ((9 < (int)param_3 && ((int)param_3 < 0x12)))) {
      FUN_0040ae40(param_1,param_2,param_3,param_4);
      return;
    }
  }
  DefWindowProcA(*(HWND *)(param_1 + 8),param_2,param_3,param_4);
  return;
}


