/* Module: sfnetmedia.dll
   Function: FUN_0040f310
   Address: 0040f310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040f310(int param_1)

{
  HANDLE pvVar1;
  undefined4 *puVar2;
  uchar *puVar3;
  HWND pHVar4;
  UINT Msg;
  uint uVar5;
  WPARAM wParam;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  if (((iVar6 != 0) && (*(int *)(iVar6 + 0xda4) != 0)) &&
     (*(HANDLE *)(iVar6 + 0xdac) != (HANDLE)0x0)) {
    SetEvent(*(HANDLE *)(iVar6 + 0xdac));
    WaitForSingleObject(*(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xda4),2000);
    pvVar1 = *(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xda4);
    if (pvVar1 != (HANDLE)0x0) {
      CloseHandle(pvVar1);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xda4) = 0;
    }
    pvVar1 = *(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xdac);
    if (pvVar1 != (HANDLE)0x0) {
      CloseHandle(pvVar1);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xdac) = 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x1c);
  if (iVar6 != 0) {
    if ((*(int *)(iVar6 + 0xdb4) < 0) && (*(int *)(iVar6 + 0xdb4) != -0x7fffbffc)) {
      uVar5 = 0x6f;
      puVar2 = (undefined4 *)FUN_004012d0();
      puVar3 = (uchar *)FUN_00418380(puVar2,uVar5);
      FUN_00415bc0(*(HWND *)(*(int *)(param_1 + 0x1c) + 0xda0),0x10,puVar3);
      iVar6 = *(int *)(param_1 + 0x1c);
      pHVar4 = *(HWND *)(iVar6 + 0xda0);
    }
    else {
      pHVar4 = *(HWND *)(iVar6 + 0xda0);
    }
    wParam = 0;
    Msg = 0xf91;
    pHVar4 = GetParent(pHVar4);
    SendMessageA(pHVar4,Msg,wParam,iVar6);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  DestroyWindow(*(HWND *)(param_1 + 4));
  return 0;
}


