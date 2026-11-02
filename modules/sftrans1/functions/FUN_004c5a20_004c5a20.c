/* Module: sftrans1.dll
   Function: FUN_004c5a20
   Address: 004c5a20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004c5a20(HWND param_1,WPARAM param_2)

{
  UINT UVar1;
  HWND hWnd;
  int iVar2;
  CHAR local_34 [52];
  
  UVar1 = GetACP();
  if (UVar1 != 0x4e4) {
    hWnd = GetWindow(param_1,5);
    if (param_2 == 0) {
      param_2 = FUN_004e4320(0x11);
    }
    for (; hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      iVar2 = GetClassNameA(hWnd,local_34,0x32);
      if ((iVar2 != 0) &&
         ((iVar2 = lstrcmpiA(local_34,"Edit"), iVar2 == 0 ||
          (iVar2 = lstrcmpiA(local_34,"ComboBox"), iVar2 == 0)))) {
        SendMessageA(hWnd,0x30,param_2,1);
      }
    }
    return 1;
  }
  return 0;
}


