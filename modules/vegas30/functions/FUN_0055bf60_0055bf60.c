/* Module: vegas30.exe
   Function: FUN_0055bf60
   Address: 0055bf60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0055bf60(HWND param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  HWND hWnd;
  
  switch(*(undefined4 *)(param_3 + 8)) {
  case 0xffffff35:
    if (param_2[0x1a] != 0) {
      iVar1 = param_2[1];
      iVar2 = *param_2;
      *(undefined4 *)(iVar2 + 0x2e60) = *(undefined4 *)(iVar1 + 0x2e60);
      *(undefined4 *)(iVar2 + 0x2e64) = *(undefined4 *)(iVar1 + 0x2e64);
      *(undefined4 *)(*param_2 + 0x2e5c) = *(undefined4 *)(param_2[1] + 0x2e5c);
      param_2[0x1a] = 0;
    }
    break;
  case 0xffffff36:
    FUN_0055bee0(param_1,param_2);
    SetWindowLongA(param_1,0,0);
    hWnd = GetParent(param_1);
    PostMessageA(hWnd,0x46b,0,0);
    return 1;
  case 0xffffff37:
    SetWindowLongA(param_1,0,0);
    return 1;
  case 0xffffff38:
    SetWindowLongA(param_1,0,0);
    return 0;
  }
  return 0;
}


