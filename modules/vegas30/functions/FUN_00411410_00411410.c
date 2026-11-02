/* Module: vegas30.exe
   Function: FUN_00411410
   Address: 00411410
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411410(undefined4 *param_1,int param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != DAT_0064aa4c) {
    pHVar1 = GetFocus();
    DAT_0064aa4c = param_2;
    uVar2 = 3;
    if (param_2 == 0) {
      uVar2 = DAT_006477dc;
    }
    param_1[0x11] = uVar2;
    FUN_0040c190(param_1,0);
    InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
    UpdateWindow((HWND)*param_1);
    if (param_2 != 0) {
      iVar3 = FUN_0040c090(pHVar1);
      if ((iVar3 != 0) && (((byte)*(undefined4 *)(iVar3 + 0xc) & 3) == 3)) {
        SetFocus(*(HWND *)(param_1[0x2a] + 8));
        param_1[0x27] = 0;
      }
    }
  }
  return;
}


