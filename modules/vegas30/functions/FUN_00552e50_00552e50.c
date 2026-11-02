/* Module: vegas30.exe
   Function: FUN_00552e50
   Address: 00552e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00552e50(HWND param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  HWND hWnd;
  
  iVar1 = *(int *)(param_3 + 8);
  if (iVar1 == -0xca) {
    FUN_00552c40(param_1,param_2);
    SetWindowLongA(param_1,0,0);
    hWnd = GetParent(param_1);
    PostMessageA(hWnd,0x46b,0,0);
    return 1;
  }
  if (iVar1 != -0xc9) {
    if (iVar1 == -200) {
      SetWindowLongA(param_1,0,0);
    }
    return 0;
  }
  SetWindowLongA(param_1,0,0);
  return 1;
}


