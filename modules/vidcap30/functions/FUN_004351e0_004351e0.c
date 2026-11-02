/* Module: vidcap30.exe
   Function: FUN_004351e0
   Address: 004351e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004351e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_005bb838;
  if (((param_2 != 0) && (param_1 != 0)) && (DAT_005bba94 == 0)) {
    if ((*(byte *)(param_1 + 0x1ae8) & 4) == 0) {
      FUN_0043b8d0(param_1,3,1);
    }
    SetWindowTextA(*(HWND *)(param_1 + 0x14dc),*(LPCSTR *)(param_2 + 0x10));
    SetWindowTextA(*(HWND *)(param_1 + 0x14e0),*(LPCSTR *)(*(int *)(param_2 + 4) + 0xc));
    SetWindowTextA(*(HWND *)(param_1 + 0x14e8),*(LPCSTR *)(param_2 + 0x3c));
    SetWindowTextA(*(HWND *)(param_1 + 0x14e4),*(LPCSTR *)(param_2 + 0x18));
    FUN_0042eb40(uVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
    FUN_0042ebf0(uVar1,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
    FUN_00441b30(param_1);
  }
  return;
}


