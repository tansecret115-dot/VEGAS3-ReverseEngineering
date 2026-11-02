/* Module: rmme3260.dll
   Function: FUN_66238a00
   Address: 66238a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66238a00(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  HDC hdc;
  HMODULE hModule;
  FARPROC pFVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  char local_114 [256];
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  bVar10 = false;
  local_14 = param_1 + 0x10d;
  if (*(int *)(param_1 + 0x10d) == 0) {
    local_10 = (int *)0x0;
    local_c = (int *)0x0;
    local_8 = param_1;
    iVar3 = (**(code **)**(undefined4 **)(param_1 + 0x28))
                      (*(undefined4 **)(param_1 + 0x28),&DAT_6626abb8,&local_10);
    if (iVar3 == 0) {
      uVar6 = 0xffffffff;
      pcVar4 = s_FullScreenData_6626fd54;
      do {
        pcVar9 = pcVar4;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar4 = pcVar9 + -uVar6;
      pcVar9 = local_114;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar4 = &DAT_6626fdc0;
      do {
        pcVar9 = pcVar4;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar3 = -1;
      pcVar4 = local_114;
      do {
        pcVar8 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar8;
      } while (cVar1 != '\0');
      pcVar4 = pcVar9 + -uVar6;
      pcVar9 = pcVar8 + -1;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar6 = 0xffffffff;
      pcVar4 = s_DoNotSetupDD_6626fde4;
      do {
        pcVar9 = pcVar4;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar9 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar9;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar3 = -1;
      pcVar4 = local_114;
      do {
        pcVar8 = pcVar4;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar8 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar8;
      } while (cVar1 != '\0');
      pcVar4 = pcVar9 + -uVar6;
      pcVar9 = pcVar8 + -1;
      for (uVar7 = uVar6 >> 2; piVar2 = local_10, uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar9 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar9 = pcVar9 + 1;
      }
      (**(code **)(*piVar2 + 0xc))(piVar2,local_114,&local_c);
      if (local_c != (int *)0x0) {
        pcVar4 = (char *)(**(code **)(*local_c + 0x1c))(local_c);
        iVar3 = atoi(pcVar4);
        bVar10 = iVar3 == 1;
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 8))(local_c);
          local_c = (int *)0x0;
        }
      }
      param_1 = local_8;
      if (local_10 != (int *)0x0) {
        (**(code **)(*local_10 + 8))(local_10);
        local_10 = (int *)0x0;
        param_1 = local_8;
      }
    }
    if (!bVar10) {
      hdc = GetDC((HWND)0x0);
      local_8 = GetDeviceCaps(hdc,0xc);
      iVar3 = GetDeviceCaps(hdc,0xe);
      if (7 < local_8 * iVar3) {
        hModule = LoadLibraryA(s_ddraw_dll_6626fdd8);
        *(HMODULE *)(param_1 + 0x109) = hModule;
        if ((hModule != (HMODULE)0x0) &&
           (pFVar5 = GetProcAddress(hModule,s_DirectDrawCreate_6626fdc4), pFVar5 != (FARPROC)0x0)) {
          (*pFVar5)(0,local_14,0);
        }
      }
      ReleaseDC((HWND)0x0,hdc);
    }
  }
  return;
}


