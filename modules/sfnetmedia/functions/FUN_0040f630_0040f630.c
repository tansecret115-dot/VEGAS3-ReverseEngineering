/* Module: sfnetmedia.dll
   Function: FUN_0040f630
   Address: 0040f630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040f630(int param_1)

{
  HWND pHVar1;
  undefined4 *puVar2;
  HANDLE pvVar3;
  LRESULT LVar4;
  uchar *puVar5;
  LPCSTR pCVar6;
  UINT UVar7;
  int iVar8;
  int iVar9;
  UINT UVar10;
  uint uVar11;
  tagRECT local_28;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fa);
  GetWindowRect(pHVar1,&local_28);
  MapWindowPoints((HWND)0x0,*(HWND *)(param_1 + 4),(LPPOINT)&local_28,2);
  SendMessageA(pHVar1,0x466,0,0);
  ShowWindow(pHVar1,0);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1fe);
  UVar10 = 0x3020;
  iVar9 = 0;
  iVar8 = 0;
  UVar7 = 0;
  pCVar6 = (LPCSTR)0x69;
  puVar2 = (undefined4 *)FUN_004012d0();
  pvVar3 = (HANDLE)FUN_00418050(puVar2,pCVar6,UVar7,iVar8,iVar9,UVar10);
  GetObjectA(pvVar3,0x18,local_18);
  MoveWindow(pHVar1,local_28.right - local_14,local_28.top,local_14,local_10,1);
  SendMessageA(pHVar1,0x172,0,(LPARAM)pvVar3);
  ShowWindow(pHVar1,5);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1ff);
  ShowWindow(pHVar1,5);
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f9);
  SendMessageA(pHVar1,0x406,0,1000);
  SendMessageA(pHVar1,0x402,1000,0);
  InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)0x0,0);
  UpdateWindow(*(HWND *)(param_1 + 4));
  if (*(int *)(param_1 + 0x1c) != 0) {
    WaitForSingleObject(*(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xda4),5000);
    pvVar3 = *(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xda4);
    if (pvVar3 != (HANDLE)0x0) {
      CloseHandle(pvVar3);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xda4) = 0;
    }
    pvVar3 = *(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xdac);
    if (pvVar3 != (HANDLE)0x0) {
      CloseHandle(pvVar3);
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xdac) = 0;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xdb4) = 0;
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),0x200);
  LVar4 = SendMessageA(pHVar1,0xf0,0,0);
  if (LVar4 != 0) {
    SendMessageA(*(HWND *)(param_1 + 4),0x10,0,0);
    return 0;
  }
  pHVar1 = GetDlgItem(*(HWND *)(param_1 + 4),2);
  uVar11 = 0x70;
  puVar2 = (undefined4 *)FUN_004012d0();
  puVar5 = (uchar *)FUN_00418380(puVar2,uVar11);
  FUN_004170b0(pHVar1,puVar5);
  return 0;
}


