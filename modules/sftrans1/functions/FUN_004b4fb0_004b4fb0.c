/* Module: sftrans1.dll
   Function: FUN_004b4fb0
   Address: 004b4fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b4fb0(HWND param_1,undefined4 param_2,LPCSTR param_3,int param_4)

{
  HWND hWnd;
  LONG LVar1;
  int iVar2;
  undefined4 *puVar3;
  tagRECT local_68;
  undefined4 local_58 [6];
  CHAR local_40 [63];
  undefined1 local_1;
  
  hWnd = param_1;
  LVar1 = GetWindowLongA(param_1,0);
  if (LVar1 == 0) {
    return 0;
  }
  if (*(int *)(LVar1 + 0x3c) == 0) {
    FUN_004dd740(&param_1,0x58,4,4,0x40000004,0,0,0);
    *(HWND *)(LVar1 + 0x3c) = param_1;
    if (param_1 == (HWND)0x0) {
      return 0;
    }
  }
  param_1 = *(HWND *)(LVar1 + 0x3c);
  puVar3 = local_58;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_58[0] = param_2;
  lstrcpynA(local_40,param_3,0x40);
  local_1 = 0;
  iVar2 = FUN_004dc110(param_1,0xffffffff,local_58,1);
  if (iVar2 != 0) {
    return 0;
  }
  GetClientRect(hWnd,&local_68);
  FUN_004b4cf0(hWnd,0,local_68.right - local_68.left,local_68.bottom - local_68.top);
  if (param_4 != 0) {
    InvalidateRect(hWnd,(RECT *)0x0,1);
  }
  return 1;
}


