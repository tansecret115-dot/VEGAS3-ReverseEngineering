/* Module: vfplugs.dll
   Function: FUN_00418e40
   Address: 00418e40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00418e40(HWND param_1,int param_2,LPCSTR param_3,int param_4)

{
  HWND hWnd;
  LONG LVar1;
  int iVar2;
  int *piVar3;
  tagRECT local_68;
  int local_58 [6];
  CHAR local_40 [63];
  undefined1 local_1;
  
  hWnd = param_1;
  LVar1 = GetWindowLongA(param_1,0);
  if (LVar1 == 0) {
    return 0;
  }
  if (*(int *)(LVar1 + 0x3c) == 0) {
    FUN_0044c3d0((int *)&param_1,0x58,4,4,0x40000004);
    *(HWND *)(LVar1 + 0x3c) = param_1;
    if (param_1 == (HWND)0x0) {
      return 0;
    }
  }
  param_1 = *(HWND *)(LVar1 + 0x3c);
  piVar3 = local_58;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_58[0] = param_2;
  lstrcpynA(local_40,param_3,0x40);
  local_1 = 0;
  iVar2 = FUN_0044ada0(&param_1->unused,-1,local_58,1);
  if (iVar2 != 0) {
    return 0;
  }
  GetClientRect(hWnd,&local_68);
  FUN_00418b80(hWnd);
  if (param_4 != 0) {
    InvalidateRect(hWnd,(RECT *)0x0,1);
  }
  return 1;
}


