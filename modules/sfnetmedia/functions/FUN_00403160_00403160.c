/* Module: sfnetmedia.dll
   Function: FUN_00403160
   Address: 00403160
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00403160(DWORD param_1,WORD param_2,WORD param_3,WORD param_4,WORD param_5,HANDLE param_6,
                 ushort param_7,undefined2 param_8,ushort param_9,ushort param_10,uint param_11,
                 uint param_12,uint param_13,undefined4 *param_14,uint param_15,undefined4 *param_16
                 ,int param_17,undefined4 param_18,undefined4 param_19,int param_20)

{
  SHORT SVar1;
  HANDLE hHandle;
  HCURSOR pHVar2;
  DWORD DVar3;
  int iVar4;
  LSTATUS LVar5;
  INT_PTR IVar6;
  undefined *puVar7;
  int extraout_ECX;
  undefined4 uVar8;
  time_t tVar9;
  ushort uStack0000000a;
  ushort uStack0000000e;
  ushort uStack00000012;
  WORD WStack00000016;
  ushort uStack0000001e;
  ushort uStack00000022;
  ushort uStack00000026;
  undefined2 uStack0000002a;
  BYTE in_stack_0000006c;
  HWND in_stack_000010b8;
  LPCSTR pCVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  WORD *pWVar16;
  uint uVar17;
  
  FUN_004323c0();
  hHandle = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,"SfNetMedia Shared Refresh Guard");
  if (hHandle == (HANDLE)0x0) {
    return;
  }
  param_6 = hHandle;
  pHVar2 = (HCURSOR)FUN_0041b280(0x7f02);
  pHVar2 = SetCursor(pHVar2);
  DVar3 = WaitForSingleObject(hHandle,3000);
  if (DVar3 == 0x102) {
    SetCursor(pHVar2);
    CloseHandle(hHandle);
    return;
  }
  SetCursor(pHVar2);
  uVar8 = 0;
  uVar17 = 1;
  uVar14 = 0x16d;
  uVar13 = 0;
  uVar11 = 0x3ea;
  DVar3 = FUN_00401310();
  param_11 = FUN_0041a0c0(DVar3,uVar11,uVar13,uVar14,uVar17);
  param_2 = 0;
  uStack0000000a = 0;
  param_3 = 0;
  uStack0000000e = 0;
  param_4 = 0;
  uStack00000012 = 0;
  param_5 = 0;
  WStack00000016 = 0;
  GetSystemTime((LPSYSTEMTIME)&param_2);
  puVar15 = &param_7;
  param_7 = 0;
  uStack0000001e = 0;
  uVar13 = 0x10;
  param_8 = 0;
  uStack00000022 = 0;
  param_9 = 0;
  uStack00000026 = 0;
  uVar11 = 0x3e9;
  param_10 = 0;
  uStack0000002a = 0;
  iVar4 = FUN_00401310();
  uVar11 = FUN_0041a270(iVar4,uVar11,(LPBYTE)puVar15,uVar13);
  if (uVar11 == 0x10) {
    if (0x76b < param_2) {
      param_12 = (uint)param_5;
      param_13 = (uint)uStack00000012;
      param_14 = (undefined4 *)(uint)param_4;
      param_15 = (uint)uStack0000000e;
      param_16 = (undefined4 *)(uStack0000000a - 1);
      param_17 = param_2 - 0x76c;
      param_20 = -1;
      mktime((tm *)&param_12);
    }
    if (param_7 < 0x76c) {
      iVar4 = 0;
    }
    else {
      param_12 = (uint)param_10;
      param_13 = (uint)uStack00000026;
      param_14 = (undefined4 *)(uint)param_9;
      param_15 = (uint)uStack00000022;
      param_16 = (undefined4 *)(uStack0000001e - 1);
      param_17 = param_7 - 0x76c;
      param_20 = -1;
      tVar9 = mktime((tm *)&param_12);
      iVar4 = (int)tVar9;
    }
    FUN_00403fd0(&stack0x00000000,(int *)&param_1,iVar4);
    if (0 < **(int **)(extraout_ECX + 0x10)) {
      SVar1 = GetAsyncKeyState(0x11);
      if ((SVar1 < 0) && (SVar1 = GetAsyncKeyState(0x10), SVar1 < 0)) {
        uVar8 = 1;
      }
      else {
        SVar1 = GetAsyncKeyState(0x11);
        if ((SVar1 < 0) ||
           ((SVar1 = GetAsyncKeyState(0x10), -1 < SVar1 && ((int)param_1 / 0x15180 < (int)param_11))
           )) goto LAB_004034f7;
      }
    }
  }
  in_stack_0000006c = '\0';
  param_1 = 0x823;
  LVar5 = RegQueryValueExA(*(HKEY *)(extraout_ECX + 0x2c),"NetMediaProviders",(LPDWORD)0x0,
                           (LPDWORD)&stack0x00000000,&stack0x0000006c,&param_1);
  if ((LVar5 == 0) && (iVar4 = lstrlenA((LPCSTR)&stack0x0000006c), iVar4 != 0)) {
    FUN_004156f0(&stack0x00000890,(BYTE *)"%s?Product=%s");
    FUN_00410e10(&param_12,&stack0x00000890,uVar8,(undefined4 *)(extraout_ECX + 0x10));
    param_14 = &param_12;
    param_15 = GetCurrentThreadId();
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
    param_16 = DAT_004418a0;
    DAT_004418a0 = &param_14;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0044186c);
    IVar6 = DialogBoxParamA(DAT_00441840,(LPCSTR)0xcc,in_stack_000010b8,FUN_00405060,0);
    if (IVar6 == 1) {
      iVar4 = FUN_00410c90(*(int **)(extraout_ECX + 0x10));
      *(int *)(extraout_ECX + 0x14) = iVar4;
      pWVar16 = &param_2;
      DVar3 = 0x10;
      uVar11 = 0x3e9;
      iVar4 = FUN_00401310();
      FUN_0041a420(iVar4,uVar11,(BYTE *)pWVar16,DVar3);
    }
    FUN_00410e50(&param_12);
    ReleaseMutex(param_6);
    CloseHandle(param_6);
    return;
  }
  pcVar12 = "Could not read NetMediaProviders key from registry.  ev = %d  type = %d  cb = %d";
  uVar8 = 0x255;
  pCVar10 = "netmedia.cpp";
  uVar11 = 1;
  puVar7 = FUN_004012b0();
  FUN_004124f0((int)puVar7,uVar11,pCVar10,uVar8,pcVar12);
LAB_004034f7:
  ReleaseMutex(param_6);
  CloseHandle(param_6);
  return;
}


