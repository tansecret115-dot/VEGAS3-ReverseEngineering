/* Module: encn3260.dll
   Function: FUN_664a1150
   Address: 664a1150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a1150(int param_1,LONG *param_2)

{
  HWND pHVar1;
  tagRECT *lpPoints;
  UINT cPoints;
  tagRECT local_14;
  
  if ((*(byte *)(param_1 + 0x5c) & 0x20) == 0) {
    pHVar1 = *(HWND *)(param_1 + 0x10d);
  }
  else {
    pHVar1 = *(HWND *)(param_1 + 0xed);
  }
  if (pHVar1 != (HWND)0x0) {
    if (*(int *)(param_1 + 0x48) != 0) {
      GetWindowRect(pHVar1,&local_14);
      lpPoints = &local_14;
      cPoints = 2;
      pHVar1 = GetParent(pHVar1);
      MapWindowPoints((HWND)0x0,pHVar1,(LPPOINT)lpPoints,cPoints);
      *param_2 = local_14.left;
      param_2[1] = local_14.top;
      *(LONG *)(param_1 + 0xd9) = local_14.left;
      *(LONG *)(param_1 + 0xdd) = param_2[1];
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd9) = 0;
    *(undefined4 *)(param_1 + 0xdd) = 0;
    *param_2 = *(LONG *)(param_1 + 0xd9);
    param_2[1] = *(LONG *)(param_1 + 0xdd);
  }
  return 0;
}


