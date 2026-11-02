/* Module: vidcap30.exe
   Function: FUN_00409be0
   Address: 00409be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409be0(undefined4 *param_1)

{
  tagRECT local_10;
  
  GetClientRect((HWND)*param_1,&local_10);
  SendMessageA((HWND)*param_1,5,0,
               (local_10.bottom - local_10.top) * 0x10000 | local_10.right - local_10.left & 0xffffU
              );
  return;
}


