/* Module: vidcap30.exe
   Function: FUN_005133b0
   Address: 005133b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005133b0(undefined4 *param_1,int param_2)

{
  HGLOBAL pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((undefined4 *)param_1[0x2d] == (undefined4 *)0x0) {
    return 0;
  }
  param_1[0x28] = 2;
  puVar3 = (undefined4 *)param_1[0x2d];
  for (iVar2 = (param_1[0x27] & 0x1fffffff) << 1; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(undefined4 *)param_1[0x2d] = param_1[0x24];
  *(undefined4 *)(param_1[0x2d] + 4) = param_1[0x23];
  if (param_1[6] == 0) {
    *(undefined4 *)(param_1[0x2d] + 8) = param_1[0x25];
  }
  else {
    *(undefined4 *)(param_1[0x2d] + 8) = param_1[8];
  }
  *(undefined4 *)(param_1[0x2d] + 0xc) = param_1[0x23];
  if ((LPCVOID)param_1[0x2e] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x2e]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x2e]);
    GlobalFree(pvVar1);
    param_1[0x2e] = 0;
  }
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if ((LPCVOID)param_1[0x2f] != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x2f]);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x2f]);
    GlobalFree(pvVar1);
    param_1[0x2f] = 0;
  }
  param_1[0x2b] = 0;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0x2c] = 0;
  if (param_2 != 0) {
    InvalidateRect((HWND)*param_1,(RECT *)0x0,1);
    UpdateWindow((HWND)*param_1);
  }
  return 1;
}


