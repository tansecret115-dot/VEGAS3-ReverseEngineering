/* Module: vegas30.exe
   Function: FUN_0058f340
   Address: 0058f340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058f340(undefined4 *param_1)

{
  HMODULE hModule;
  uint uVar1;
  HANDLE pvVar2;
  HGLOBAL hMem;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint local_8;
  
  *param_1 = 0;
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    PTR_FUN_00645d24 = GetProcAddress(hModule,"CancelIo");
  }
  if (PTR_FUN_00645d24 == (undefined *)0x0) {
    PTR_FUN_00645d24 = FUN_0058e000;
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0065ab18);
  puVar4 = &DAT_0065a250;
  for (iVar3 = 0x232; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (DAT_006484e8 < 0x1000) {
    uVar1 = 0x1000;
  }
  else {
    uVar1 = DAT_006484e8;
    if (0x100000 < DAT_006484e8) {
      uVar1 = 0x100000;
    }
  }
  DAT_0065a25c = uVar1 + 0xfff & 0xfffff000;
  uVar1 = DAT_006484f0 / DAT_0065a25c;
  local_8 = DAT_006484f4 / DAT_0065a25c;
  if (local_8 < 0x10) {
    local_8 = 0x10;
  }
  else if (0x4000 < local_8) {
    local_8 = 0x4000;
  }
  if (uVar1 == 0) {
    DAT_0065a254 = 1;
  }
  else {
    DAT_0065a254 = local_8;
    if (uVar1 <= local_8) {
      DAT_0065a254 = uVar1;
    }
  }
  DAT_0065a2d4 = DAT_006484e4;
  if (0x40 < DAT_006484e4) {
    DAT_0065a2d4 = 0x40;
  }
  _DAT_0065a2d8 = 0;
  _DAT_0065a258 = local_8;
  iVar3 = FUN_0058ef50(&DAT_0065a250);
  if (-1 < iVar3) {
    iVar3 = _SfQueueInitialize_4(&DAT_0065a2b0);
    if (iVar3 == 0) {
      return -0x7ffb1ffd;
    }
    uVar6 = 0;
    if (0 < (int)DAT_0065a2d4) {
      puVar5 = &DAT_0065a2e0;
      puVar4 = &DAT_0065a9e0;
      do {
        pvVar2 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
        if (pvVar2 == (HANDLE)0x0) break;
        *(HANDLE *)(puVar5 + 8) = pvVar2;
        *puVar4 = pvVar2;
        _SfQueueInsert_8(&DAT_0065a2b0,puVar5);
        uVar6 = uVar6 + 1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 0x1c;
      } while ((int)uVar6 < (int)DAT_0065a2d4);
    }
    DAT_0065a2d4 = uVar6;
    _DAT_0065a2dc = uVar6;
    iVar3 = _SfQueueInitialize_4(&DAT_0065aae0);
    if (iVar3 != 0) {
      _DAT_0065ab10 = 0;
      _DAT_0065ab14 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
      if (_DAT_0065ab14 != (HANDLE)0x0) {
        _DAT_0065ab04 =
             CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_0058f580,&DAT_0065a250,0,
                          (LPDWORD)&DAT_0065ab08);
      }
    }
    if (DAT_006484ec / DAT_0065a25c <= local_8) {
      local_8 = DAT_006484ec / DAT_0065a25c;
    }
    uVar6 = 0;
    if (local_8 != 0) {
      do {
        FUN_0058efd0(&DAT_0065a250);
        uVar6 = uVar6 + uVar1;
      } while (uVar6 < local_8);
    }
    hMem = GlobalAlloc(0x42,0xa2640);
    DAT_0065ab40 = GlobalLock(hMem);
    iVar3 = 0;
    *param_1 = &DAT_0065a250;
  }
  return iVar3;
}


