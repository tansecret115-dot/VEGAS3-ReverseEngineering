/* Module: vegas30.exe
   Function: FUN_004fc5c0
   Address: 004fc5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fc5c0(int param_1)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  
  hWnd = *(HWND *)(param_1 + 200);
  if (hWnd != (HWND)0x0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar2 = uVar1 >> 3 & 4;
    if ((uVar1 & 4) == uVar2) {
      if ((uVar1 & 0x100) != 0) {
        SendMessageA(hWnd,0x40c,0,param_1 + 0xcc);
      }
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar1 & 0xfffffffb | uVar2;
      SendMessageA(hWnd,0x401,uVar2 >> 2,0);
      if ((*(byte *)(param_1 + 0xc) & 0x20) != 0) {
        *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x1c);
        SendMessageA(*(HWND *)(param_1 + 200),0x406,0,param_1 + 0xcc);
        SendMessageA(*(HWND *)(param_1 + 200),0x40c,0,param_1 + 0xcc);
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffeff;
        return;
      }
    }
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffeff;
  return;
}


