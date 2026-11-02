/* Module: aviplug.dll
   Function: FUN_5f93e510
   Address: 5f93e510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f93e510(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[0x25] != -1) {
      if ((param_1[0x26] != 0) && (*(int *)(param_1[7] + 0x18) != 0)) {
        FUN_5f93f330((DWORD)param_1);
      }
      CloseHandle((HANDLE)param_1[0x25]);
      param_1[0x25] = 0xffffffff;
    }
    if ((int *)param_1[0x10] != (int *)0x0) {
      iVar1 = *(int *)param_1[0x10];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_5f93e4c0((undefined4 *)
                     (*(int *)(param_1[0x10] + 4) * iVar1 + *(int *)(param_1[0x10] + 8)));
      }
      FUN_5f9796e0((int *)param_1[0x10]);
      param_1[0x10] = 0;
    }
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    if ((LPVOID)*param_1 != (LPVOID)0x0) {
      VirtualFree((LPVOID)*param_1,0,0x8000);
      *param_1 = 0;
    }
    param_1[1] = 0;
    if ((LPVOID)param_1[0x12] != (LPVOID)0x0) {
      VirtualFree((LPVOID)param_1[0x12],0,0x8000);
      param_1[0x12] = 0;
    }
    param_1[0x13] = 0;
    if ((LPVOID)param_1[0xd] != (LPVOID)0x0) {
      VirtualFree((LPVOID)param_1[0xd],0,0x8000);
      param_1[0xd] = 0;
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return 0;
  }
  return 0;
}


