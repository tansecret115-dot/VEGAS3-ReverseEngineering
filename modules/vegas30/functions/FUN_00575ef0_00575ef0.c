/* Module: vegas30.exe
   Function: FUN_00575ef0
   Address: 00575ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_00575ef0(HWND param_1,uint param_2)

{
  HWND hWnd;
  uint uVar1;
  int iVar2;
  
  hWnd = GetDlgItem(param_1,0x434);
  uVar1 = SendMessageA(hWnd,0x146,0,0);
  if (param_2 < uVar1) {
    iVar2 = SendMessageA(hWnd,0x150,param_2,0);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    return (HWND)(iVar2 % 1000);
  }
  return param_1;
}


