/* Module: wmfdist2.exe
   Function: FUN_0100296d
   Address: 0100296d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0100296d(HMODULE param_1,undefined4 param_2)

{
  bool bVar1;
  DWORD DVar2;
  HRSRC hResInfo;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  UINT UVar5;
  CHAR local_10c [260];
  HGLOBAL local_8;
  
  DAT_0100b6dc = param_1;
  puVar4 = &DAT_0100ade0;
  for (iVar3 = 0x23f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &DAT_0100aaa0;
  for (iVar3 = 0xcb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = &DAT_0100b720;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_8 = (HGLOBAL)0x0;
  _DAT_0100b08c = 1;
  DVar2 = FUN_01003fe8("TITLE",(undefined4 *)&DAT_0100adf4,0x7f);
  if ((DVar2 == 0) || (0x80 < DVar2)) {
    UVar5 = 0x4b1;
  }
  else {
    DAT_0100aa8c = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCSTR)0x0);
    SetEvent(DAT_0100aa8c);
    DVar2 = FUN_01003fe8("EXTRACTOPT",(undefined4 *)&DAT_0100b6d4,4);
    if (DVar2 == 0) {
LAB_01002a2a:
      FUN_01003e44((HWND)0x0,0x4b1,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
      DAT_0100b704 = 0x80070714;
      return 0;
    }
    if ((DAT_0100b6d4 & 0xc0) != 0) {
      DVar2 = FUN_01003fe8("INSTANCECHECK",(undefined4 *)local_10c,0x104);
      if (DVar2 == 0) goto LAB_01002a2a;
      DAT_0100aa90 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,1,local_10c);
      if ((DAT_0100aa90 != (HANDLE)0x0) && (DVar2 = GetLastError(), DVar2 == 0xb7)) {
        if ((DAT_0100b6d4 & 0x80) != 0) {
          FUN_01003e44((HWND)0x0,0x54b,&DAT_0100adf4,(LPCSTR)0x0,0x10,0);
LAB_01002a9f:
          CloseHandle(DAT_0100aa90);
          DAT_0100b704 = 0x800700b7;
          return 0;
        }
        iVar3 = FUN_01003e44((HWND)0x0,0x524,&DAT_0100adf4,(LPCSTR)0x0,0x20,4);
        if (iVar3 != 6) goto LAB_01002a9f;
      }
    }
    DAT_0100b824 = 0;
    iVar3 = FUN_010053dd(param_2);
    if (iVar3 != 0) {
      if (DAT_0100aaba != '\0') {
        FUN_01002095(&DAT_0100aaba);
        return 0;
      }
      hResInfo = FindResourceA(param_1,"VERCHECK",(LPCSTR)0xa);
      if (hResInfo != (HRSRC)0x0) {
        local_8 = LoadResource(param_1,hResInfo);
      }
      if (DAT_0100a2f8 != 0) {
        Ordinal_17();
      }
      if (DAT_0100aaa4 != 0) {
        return 1;
      }
      bVar1 = FUN_01003296((int)local_8);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        return 0;
      }
      if (((DAT_0100bc04 != 1) && (DAT_0100bc04 != 2)) && (DAT_0100bc04 != 3)) {
        return 1;
      }
      if ((DAT_0100b6d5 & 1) == 0) {
        return 1;
      }
      if (((byte)DAT_0100aab8 & 1) != 0) {
        return 1;
      }
      iVar3 = FUN_010016e7();
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_01005b0f(DAT_0100b6dc,(LPCSTR)0x7d6,(HWND)0x0,FUN_01001813,0x547,0x83e);
      if (iVar3 != 0x83d) {
        return 0;
      }
      return 1;
    }
    UVar5 = 0x520;
  }
  FUN_01003e44((HWND)0x0,UVar5,(LPCSTR)0x0,(LPCSTR)0x0,0x10,0);
  return 0;
}


