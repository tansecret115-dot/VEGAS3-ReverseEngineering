/* Module: mcplug.dll
   Function: FUN_00415880
   Address: 00415880
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415880(HWND param_1,int param_2)

{
  undefined4 *puVar1;
  LPSTR lpString;
  HWND hWnd;
  uint uVar2;
  
  puVar1 = (undefined4 *)0x0;
  if (param_2 == 1) {
    puVar1 = &DAT_00487a94;
  }
  else if (param_2 == 2) {
    puVar1 = &DAT_00487acc;
  }
  if (DAT_00487a88 != 0) {
    FUN_00415920(param_1);
    return;
  }
  if (puVar1[8] != 0) {
    if (puVar1[10] == 2) {
      uVar2 = 0x1b62;
    }
    else {
      if (puVar1[10] != 3) goto LAB_00415907;
      uVar2 = 0x1b63;
    }
    lpString = FUN_00419470(DAT_00487a6c,uVar2);
    hWnd = GetDlgItem(param_1,0x40c);
    SetWindowTextA(hWnd,lpString);
    FUN_00415950(param_1);
    return;
  }
LAB_00415907:
  FUN_00415920(param_1);
  return;
}


