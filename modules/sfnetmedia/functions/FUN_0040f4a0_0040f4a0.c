/* Module: sfnetmedia.dll
   Function: FUN_0040f4a0
   Address: 0040f4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040f4a0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  uchar *puVar3;
  int iVar4;
  HWND pHVar5;
  HANDLE pvVar6;
  uint uVar7;
  
  bVar1 = FUN_00413a10((LPCSTR)(*(int *)(param_1 + 0x1c) + 0xa2b));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0xdb8) == 0) {
      uVar7 = 0x6d;
      puVar2 = (undefined4 *)FUN_004012d0();
      puVar3 = (uchar *)FUN_00418380(puVar2,uVar7);
      iVar4 = FUN_00415bc0(*(HWND *)(*(int *)(param_1 + 0x1c) + 0xda0),0x24,puVar3);
      if (iVar4 == 7) {
        *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0xa2b) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xdb4) = 0x80004004;
        SendMessageA(*(HWND *)(param_1 + 4),0x10,0,0);
        return 0;
      }
    }
    remove((char *)(*(int *)(param_1 + 0x1c) + 0xa2b));
  }
  pHVar5 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f7);
  FUN_004170b0(pHVar5,(uchar *)(*(int *)(param_1 + 0x1c) + 0xa2b));
  pvVar6 = *(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xdac);
  if (pvVar6 != (HANDLE)0x0) {
    CloseHandle(pvVar6);
  }
  pvVar6 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xdac) = pvVar6;
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xdac) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0xa2b) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xdb4) = 0x80004005;
    SendMessageA(*(HWND *)(param_1 + 4),0x10,0,0);
  }
  pvVar6 = *(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xda4);
  if (pvVar6 != (HANDLE)0x0) {
    CloseHandle(pvVar6);
  }
  pvVar6 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_0040f070,
                        *(LPVOID *)(param_1 + 0x1c),0,
                        (LPDWORD)((int)*(LPVOID *)(param_1 + 0x1c) + 0xda8));
  *(HANDLE *)(*(int *)(param_1 + 0x1c) + 0xda4) = pvVar6;
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xda4) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0xa2b) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xdb4) = 0x80004005;
    SendMessageA(*(HWND *)(param_1 + 4),0x10,0,0);
  }
  return 0;
}


