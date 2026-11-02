/* Module: vegas30k.dll
   Function: FUN_01139040
   Address: 01139040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01139040(HWND param_1)

{
  undefined4 *puVar1;
  HWND hWnd;
  CHAR *lpString;
  int nMaxCount;
  CHAR local_300 [256];
  WCHAR local_200 [255];
  undefined2 local_2;
  
  puVar1 = (undefined4 *)GetWindowLongA(param_1,8);
  lpString = local_300;
  nMaxCount = 0x100;
  hWnd = GetDlgItem(param_1,0x424);
  GetWindowTextA(hWnd,lpString,nMaxCount);
  MultiByteToWideChar(0,1,local_300,-1,local_200,0x100);
  local_2 = 0;
  (**(code **)(*(int *)*puVar1 + 0x6c))((int *)*puVar1,3,local_200);
  return;
}


