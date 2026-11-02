/* Module: sftrans1.dll
   Function: FUN_0052d0d0
   Address: 0052d0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_0052d0d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            LPARAM param_6,WPARAM param_7,undefined4 param_8,LPARAM param_9,LPARAM param_10,
            undefined4 param_11)

{
  HWND hWnd;
  uint uVar1;
  
  FUN_0052d340(param_8,param_2,param_3,param_5);
  if (*(HWND *)(param_1 + 0x10) == (HWND)0x0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xc) = param_11;
  *(undefined4 *)(param_1 + 0x14) = param_8;
  *(LPARAM *)(param_1 + 4) = param_9;
  *(LPARAM *)(param_1 + 8) = param_10;
  if (param_4 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x10),0x454,0,param_4);
  }
  SendMessageA(*(HWND *)(param_1 + 0x10),0x434,0,param_10);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x430,0,param_9);
  SendMessageA(*(HWND *)(param_1 + 0x10),0x414,param_7,param_6);
  hWnd = (HWND)SendMessageA(*(HWND *)(param_1 + 0x10),0x423,0,0);
  uVar1 = GetWindowLongA(hWnd,-0x10);
  SetWindowLongA(hWnd,-0x10,uVar1 | 1);
  return *(undefined4 *)(param_1 + 0x10);
}


