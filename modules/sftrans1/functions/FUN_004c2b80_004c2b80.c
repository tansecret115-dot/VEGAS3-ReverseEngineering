/* Module: sftrans1.dll
   Function: FUN_004c2b80
   Address: 004c2b80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c2b80(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  HWND hWnd;
  
  if (param_2 != 0) {
    iVar1 = FUN_004c2540(param_1,param_3,param_4);
    if (iVar1 == 5) {
      FUN_004c24c0(param_1,*(undefined4 *)(param_1 + 0x18),1);
      (**(code **)(param_1 + 200))
                (param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0xc4),4,
                 *(undefined4 *)(param_1 + 0x1c));
      return;
    }
  }
  if ((*param_1 & 8) == 0) {
    SetFocus(*(HWND *)(param_1 + 0x28));
  }
  if ((*(uint *)(param_1 + 0xc) & 0x80000) != 0) {
    hWnd = *(HWND *)(param_1 + 0x30);
    if (hWnd == (HWND)0x0) {
      hWnd = GetParent(*(HWND *)(param_1 + 0x28));
    }
    SendMessageA(hWnd,0x111,*(ushort *)(param_1 + 0x2c) | 0x30000,*(LPARAM *)(param_1 + 0x28));
  }
  FUN_004c2700(param_1,param_3,param_4,9);
  return;
}


