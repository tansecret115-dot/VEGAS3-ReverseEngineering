/* Module: vidcap30.exe
   Function: FUN_00408cb0
   Address: 00408cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00408cb0(undefined4 *param_1,int param_2)

{
  HWND pHVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 != DAT_005bb7d0) {
    pHVar1 = GetFocus();
    DAT_005bb7d0 = param_2;
    uVar2 = 3;
    if (param_2 == 0) {
      uVar2 = DAT_005ba55c;
    }
    param_1[0x12] = uVar2;
    FUN_00404c90(param_1,0);
    InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
    UpdateWindow((HWND)*param_1);
    if (param_2 != 0) {
      iVar3 = FUN_00404b90(pHVar1);
      if ((iVar3 != 0) && (((byte)*(undefined4 *)(iVar3 + 0xc) & 3) == 3)) {
        SetFocus(*(HWND *)(param_1[0x1b] + 8));
        param_1[0x22] = 0;
      }
    }
  }
  return;
}


