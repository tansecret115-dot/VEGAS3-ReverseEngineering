/* Module: hhupd.exe
   Function: FUN_01002f20
   Address: 01002f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01002f20(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  if (param_2 != 0x10) {
    if (param_2 != 0x102) {
      if (param_2 == 0x110) {
        DAT_0100aa78 = param_1;
        pHVar2 = GetDesktopWindow();
        FUN_01003b58(param_1,pHVar2);
        if (DAT_0100a2f8 != 0) {
          LVar5 = 0xbb9;
          WVar4 = 0;
          UVar3 = 0x464;
          pHVar2 = GetDlgItem(param_1,0x83b);
          SendMessageA(pHVar2,UVar3,WVar4,LVar5);
          LVar5 = -0x10000;
          WVar4 = 0xffffffff;
          UVar3 = 0x465;
          pHVar2 = GetDlgItem(param_1,0x83b);
          SendMessageA(pHVar2,UVar3,WVar4,LVar5);
        }
        SetWindowTextA(param_1,&DAT_0100adf4);
        DAT_0100a358 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0100463e,(LPVOID)0x0,0,
                                    (LPDWORD)&DAT_0100a668);
        if (DAT_0100a358 != (HANDLE)0xffffffff) {
          return 1;
        }
        FUN_01003c23(param_1,0x4b8,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
        param_3 = 0;
LAB_01003079:
        EndDialog(param_1,param_3);
        return 1;
      }
      if (param_2 != 0x111) {
        if (param_2 != 0xfa1) {
          return 0;
        }
        TerminateThread(DAT_0100a358,0);
        goto LAB_01003079;
      }
      if (param_3 != 2) {
        return 1;
      }
      ResetEvent(DAT_0100aa7c);
      iVar1 = FUN_01003c23(DAT_0100aa78,0x4b2,"",(LPCSTR)0x0,0x20,4);
      if ((iVar1 != 6) && (iVar1 != 1)) {
        SetEvent(DAT_0100aa7c);
        return 1;
      }
      DAT_0100ae78 = 1;
      SetEvent(DAT_0100aa7c);
      FUN_010030ac();
      goto LAB_01003098;
    }
    if (param_3 != 0x1b) {
      return 1;
    }
  }
  DAT_0100ae78 = 1;
LAB_01003098:
  EndDialog(param_1,0);
  return 1;
}


