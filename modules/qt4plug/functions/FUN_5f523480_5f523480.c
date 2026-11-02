/* Module: qt4plug.dll
   Function: FUN_5f523480
   Address: 5f523480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f523480(void *this,LRESULT param_1,LRESULT param_2,int param_3)

{
  short sVar1;
  HWND pHVar2;
  WPARAM wParam;
  int iVar3;
  BOOL bEnable;
  
  pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3ea);
  wParam = SendMessageA(pHVar2,0x147,0,0);
  SendMessageA(pHVar2,0x150,wParam,0);
  FUN_5f580580();
  sVar1 = FUN_5f5805a0();
  if (sVar1 == 0) {
    FUN_5f5232a0(this,0,param_1);
    FUN_5f5233a0(this,0,param_2);
    sVar1 = FUN_5f5808e0();
    if (sVar1 == 0) {
      FUN_5f593c60();
      if (param_3 != 0) {
        iVar3 = FUN_5f5782f0();
        if ((iVar3 != 0) && (iVar3 = FUN_5f5782f0(), iVar3 != 0)) {
          FUN_5f578290();
        }
        FUN_5f57aed0();
        iVar3 = FUN_5f593c60();
        if (iVar3 == 0) {
          FUN_5f57b3d0();
          FUN_5f57b130();
          FUN_5f578250();
          FUN_5f57b0d0();
        }
        FUN_5f57b390();
      }
      FUN_5f580600();
    }
    bEnable = 0;
    pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f6);
    EnableWindow(pHVar2,bEnable);
  }
  return 1;
}


