/* Module: 50comupd.exe
   Function: FUN_01002be2
   Address: 01002be2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01002be2(HWND param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  HWND pHVar2;
  INT_PTR nResult;
  code *pcVar3;
  
  if (param_2 == 0xf) {
    if (DAT_0100aa84 == 0) {
      _DAT_0100a870 = SendDlgItemMessageA(param_1,0x834,0xb1,0xffffffff,0);
      DAT_0100aa84 = 1;
    }
LAB_01002c4b:
    uVar1 = 0;
  }
  else {
    if (param_2 == 0x10) {
LAB_01002c0c:
      nResult = 0;
LAB_01002c0e:
      EndDialog(param_1,nResult);
    }
    else if (param_2 == 0x110) {
      pHVar2 = GetDesktopWindow();
      FUN_01003c1d(param_1,pHVar2);
      SetDlgItemTextA(param_1,0x834,DAT_0100bc00);
      SetWindowTextA(param_1,&DAT_0100adf4);
      SetForegroundWindow(param_1);
      pcVar3 = FUN_01002baa;
      pHVar2 = GetDlgItem(param_1,0x834);
      FUN_01002b86(pHVar2,(LONG)pcVar3);
    }
    else {
      if (param_2 != 0x111) goto LAB_01002c4b;
      if (param_3 == 6) {
        nResult = 1;
        goto LAB_01002c0e;
      }
      if (param_3 == 7) goto LAB_01002c0c;
    }
    uVar1 = 1;
  }
  return uVar1;
}


