/* Module: qt4plug.dll
   Function: FUN_5f523670
   Address: 5f523670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f523670(int param_1)

{
  short sVar1;
  HWND hWnd;
  WPARAM wParam;
  int iVar2;
  undefined4 uStack_20;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x3ea);
  wParam = SendMessageA(hWnd,0x147,0,0);
  if (wParam != 0xffffffff) {
    SendMessageA(hWnd,0x150,wParam,0);
    FUN_5f580580();
    sVar1 = FUN_5f5808e0();
    if (sVar1 == 0) {
      uStack_20 = 0;
      iVar2 = FUN_5f5782f0();
      if (iVar2 != 0) {
        uStack_20 = FUN_5f5782f0();
        if (uStack_20 != 0) {
          FUN_5f57aed0();
          sVar1 = FUN_5f578190();
          if (sVar1 == 0) {
            FUN_5f57b130();
            FUN_5f593cb0();
            FUN_5f57b0d0();
          }
          FUN_5f57b390();
        }
      }
      iVar2 = FUN_5f593cb0();
      if (iVar2 == 0) {
        FUN_5f57aed0();
        iVar2 = FUN_5f593c60();
        if (iVar2 == 0) {
          FUN_5f57b3d0();
          FUN_5f57b130();
          if (uStack_20 == 0) {
            FUN_5f578250();
          }
          else {
            FUN_5f578170();
          }
          FUN_5f57b0d0();
        }
        FUN_5f57b390();
      }
      FUN_5f580600();
    }
  }
  return 1;
}


