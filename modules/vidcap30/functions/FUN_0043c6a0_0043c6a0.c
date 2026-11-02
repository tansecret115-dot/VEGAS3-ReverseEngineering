/* Module: vidcap30.exe
   Function: FUN_0043c6a0
   Address: 0043c6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043c6a0(int param_1)

{
  tagRECT local_10;
  
  GetClientRect(*(HWND *)(param_1 + 8),&local_10);
  FUN_0043fe90(param_1,param_1 + 0x1ae8);
  FUN_00440040(param_1,param_1 + 0x1ae8,param_1 + 0x1aec);
  FUN_0043efc0(param_1);
  SendMessageA(*(HWND *)(param_1 + 8),5,0,
               (local_10.bottom - local_10.top) * 0x10000 | local_10.right - local_10.left & 0xffffU
              );
  FUN_00411120(0);
  return 0;
}


