/* Module: sfxpfx2.dll
   Function: FUN_5c8c7802
   Address: 5c8c7802
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c8c7802(uint param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  int iVar3;
  int *piVar4;
  undefined **ppuVar5;
  uint uVar6;
  WCHAR *lpWideCharStr;
  int cchWideChar;
  WCHAR local_31c [260];
  CHAR local_114 [260];
  int local_10;
  int *local_c;
  int *local_8;
  
  uVar6 = 0;
  DVar2 = GetModuleFileNameA(DAT_5c8eeb90,local_114,0x104);
  if (DVar2 == 0) {
    DVar2 = GetLastError();
    uVar6 = -(uint)(DVar2 != 0) & (DVar2 & 0xffff | 0x80070000);
  }
  else {
    lpWideCharStr = local_31c;
    cchWideChar = 0x208;
    iVar3 = lstrlenA(local_114);
    MultiByteToWideChar(0,0,local_114,iVar3 + 1,lpWideCharStr,cchWideChar);
    if (param_1 != 0) {
      uVar6 = FUN_5c8c7795(local_31c,1);
    }
    if (-1 < (int)uVar6) {
      CoInitialize((LPVOID)0x0);
      local_8 = (int *)0x0;
      local_c = (int *)0x0;
      uVar6 = CoCreateInstance((IID *)&DAT_5c8e3468,(LPUNKNOWN)0x0,1,(IID *)&DAT_5c8e3478,&local_8);
      if ((-1 < (int)uVar6) ||
         (uVar6 = CoCreateInstance((IID *)&DAT_5c8e3448,(LPUNKNOWN)0x0,1,(IID *)&DAT_5c8e3458,
                                   &local_c), -1 < (int)uVar6)) {
        local_10 = 0;
        if (0 < DAT_5c8e7170) {
          ppuVar5 = &PTR_PTR_5c8e70e0;
          do {
            puVar1 = (undefined4 *)*ppuVar5;
            if (puVar1 != (undefined4 *)0x0) {
              if (local_8 == (int *)0x0) {
                uVar6 = FUN_5c8ca971(puVar1,local_c,param_1);
              }
              else {
                uVar6 = FUN_5c8c7729(puVar1,local_8,param_1);
              }
            }
            if ((int)uVar6 < 0) break;
            local_10 = local_10 + 1;
            ppuVar5 = ppuVar5 + 5;
          } while (local_10 < DAT_5c8e7170);
        }
        piVar4 = local_8;
        if (local_8 == (int *)0x0) {
          piVar4 = local_c;
        }
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      CoFreeUnusedLibraries();
      CoUninitialize();
      if ((-1 < (int)uVar6) && (param_1 == 0)) {
        uVar6 = FUN_5c8c7795(local_31c,0);
      }
    }
  }
  return uVar6;
}


