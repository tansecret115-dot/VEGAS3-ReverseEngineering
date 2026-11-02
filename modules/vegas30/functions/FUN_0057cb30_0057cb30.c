/* Module: vegas30.exe
   Function: FUN_0057cb30
   Address: 0057cb30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0057cb30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0057cef0();
  if (-1 < iVar1) {
    iVar1 = FUN_0057cf80();
    if (iVar1 < 0) {
      FUN_0057d0a0();
      return iVar1;
    }
    iVar1 = FUN_0057d0e0();
    if (iVar1 < 0) {
      FUN_0057d060();
      FUN_0057d0a0();
      return iVar1;
    }
    FUN_0040dde0(DAT_0064762c);
    if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
      DestroyWindow(*(HWND *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
    }
    uVar2 = _SfGetString_8(DAT_00647204,0x6e67);
    uVar2 = FUN_0057c690(*(undefined4 *)(param_1 + 4),uVar2);
    *(undefined4 *)(param_1 + 8) = uVar2;
    iVar1 = FUN_0057cfc0(1);
    if (iVar1 < 0) {
      if (*(HWND *)(param_1 + 8) != (HWND)0x0) {
        DestroyWindow(*(HWND *)(param_1 + 8));
        *(undefined4 *)(param_1 + 8) = 0;
      }
      FUN_0057d060();
      FUN_0057d0a0();
      FUN_0040dea0(DAT_0064762c);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}


