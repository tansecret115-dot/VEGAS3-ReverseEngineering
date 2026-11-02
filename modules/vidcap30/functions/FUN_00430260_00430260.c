/* Module: vidcap30.exe
   Function: FUN_00430260
   Address: 00430260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00430260(undefined4 *param_1)

{
  HWND hWnd;
  HWND pHVar1;
  uint uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    hWnd = (HWND)*param_1;
    pHVar1 = GetCapture();
    if ((((pHVar1 == hWnd) && (param_1[0x18] == 3)) && (param_1[0x1d] != 0)) &&
       (((uVar2 = param_1[0x1d] & 0x7f, uVar2 < (uint)param_1[0x2c] &&
         ((*(byte *)((int)param_1 + uVar2 * 0x20 + 0xcb) & 0x80) != 0)) &&
        ((*(byte *)((int)param_1 + uVar2 * 0x20 + 0xca) & 4) != 0)))) {
      SendMessageA(hWnd,0x111,*(ushort *)(param_1 + uVar2 * 8 + 0x31) | 0x2a0000,0);
    }
  }
  return;
}


