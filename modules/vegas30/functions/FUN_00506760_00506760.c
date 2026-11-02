/* Module: vegas30.exe
   Function: FUN_00506760
   Address: 00506760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00506760(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  HDWP pvVar2;
  HWND pHVar3;
  int iVar4;
  int local_28;
  int local_24;
  tagRECT local_20;
  tagRECT local_10;
  
  puVar1 = param_1;
  if (param_1[10] == 0) {
    iVar4 = 4;
  }
  else {
    iVar4 = 5;
  }
  pvVar2 = BeginDeferWindowPos(iVar4);
  pHVar3 = GetDlgItem((HWND)*param_1,0x435);
  GetWindowRect(pHVar3,&local_10);
  MapWindowPoints((HWND)0x0,(HWND)*param_1,(LPPOINT)&local_10,2);
  if ((*(byte *)(param_1 + 1) & 4) == 0) {
    pHVar3 = GetDlgItem((HWND)*param_1,1);
    GetWindowRect(pHVar3,&local_20);
    MapWindowPoints((HWND)0x0,(HWND)*param_1,(LPPOINT)&local_20,2);
    pvVar2 = DeferWindowPos(pvVar2,pHVar3,(HWND)0x0,
                            (((local_20.left - local_20.right) * 2 - param_1[8]) - param_1[7]) +
                            param_3,((local_20.top - param_1[7]) - local_20.bottom) + param_4,0,0,
                            0x115);
    pHVar3 = GetDlgItem((HWND)*param_1,2);
    GetWindowRect(pHVar3,&local_20);
    MapWindowPoints((HWND)0x0,(HWND)*param_1,(LPPOINT)&local_20,2);
    pvVar2 = DeferWindowPos(pvVar2,pHVar3,(HWND)0x0,
                            ((local_20.left - param_1[7]) - local_20.right) + param_3,
                            ((local_20.top - param_1[7]) - local_20.bottom) + param_4,0,0,0x115);
    iVar4 = ((local_20.top - param_1[6]) - param_1[7]) - local_20.bottom;
    param_1 = pvVar2;
  }
  else {
    iVar4 = -param_1[7];
    param_1 = pvVar2;
  }
  local_10.bottom = param_4 + iVar4;
  pHVar3 = GetDlgItem((HWND)*puVar1,0x435);
  param_1 = DeferWindowPos(param_1,pHVar3,(HWND)0x0,0,0,(param_3 - puVar1[7]) - local_10.left,
                           local_10.bottom - local_10.top,0x116);
  if ((HWND)puVar1[10] != (HWND)0x0) {
    SendMessageA((HWND)puVar1[10],0x453,0,(LPARAM)&local_28);
    param_1 = DeferWindowPos(param_1,(HWND)puVar1[10],(HWND)0x0,puVar1[7],local_10.bottom + 2,
                             local_28,local_24,0x14);
  }
  pHVar3 = GetDlgItem((HWND)*puVar1,0x476);
  GetWindowRect(pHVar3,&local_20);
  MapWindowPoints((HWND)0x0,(HWND)*puVar1,(LPPOINT)&local_20,2);
  pvVar2 = DeferWindowPos(param_1,pHVar3,(HWND)0x0,0,0,(param_3 - puVar1[7]) - local_10.left,
                          local_20.bottom - local_20.top,0x116);
  EndDeferWindowPos(pvVar2);
  return 1;
}


