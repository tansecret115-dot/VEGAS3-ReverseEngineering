/* Module: vegas30k.dll
   Function: FUN_0112d350
   Address: 0112d350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0112d350(undefined4 *param_1,LPCSTR param_2)

{
  LPVOID pvVar1;
  short sVar2;
  ushort uVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  int iVar6;
  LPCSTR lpString2;
  uint uVar7;
  uint uVar8;
  int iVar9;
  CHAR *pCVar10;
  int *piVar11;
  CHAR *pCVar12;
  int *piVar13;
  LPCVOID pMem;
  HANDLE local_358;
  LPVOID local_354;
  HANDLE local_350;
  int *local_34c;
  uint local_348;
  int *local_344;
  uint local_340;
  uint local_33c;
  LPVOID local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  undefined4 local_324;
  int local_320;
  int local_31c;
  undefined4 *local_318;
  uint local_314;
  CHAR local_310 [524];
  CHAR local_104 [260];
  
  local_358 = (HANDLE)0x0;
  local_350 = (HANDLE)0x0;
  local_314 = (uint)(ushort)local_314;
  pvVar4 = GlobalAlloc(2,0x5000);
  pvVar5 = GlobalLock(pvVar4);
  pMem = (LPCVOID)0x0;
  local_338 = pvVar5;
  if (pvVar5 != (LPVOID)0x0) {
    pvVar4 = GlobalAlloc(2,0x5000);
    local_354 = GlobalLock(pvVar4);
    pMem = local_354;
    if ((local_354 != (LPVOID)0x0) &&
       (WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)0x0,&local_350), pMem = local_354,
       local_350 != (HANDLE)0x0)) {
      iVar9 = 1;
      while (((iVar6 = FUN_0112d320(local_350,&local_348,pvVar5), local_328 = iVar6, iVar6 == 0xea
              || (iVar6 == 0x103)) || (pMem = local_354, iVar6 == 0))) {
        local_33c = 0;
        if (local_348 != 0) {
          piVar13 = (int *)((int)pvVar5 + 0x14);
          do {
            lpString2 = (LPCSTR)*piVar13;
            if (lpString2 == (LPCSTR)0x0) {
              lpString2 = (LPCSTR)piVar13[2];
            }
            local_344 = piVar13;
            local_330 = lstrcmpiA(param_2,lpString2);
            if (local_330 == 0) {
              if (local_358 != (HANDLE)0x0) {
                WNetCloseEnum(local_358);
              }
              WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)(piVar13 + -5),&local_358);
              if (local_358 != (HANDLE)0x0) {
                do {
                  pvVar1 = local_354;
                  local_32c = FUN_0112d320(local_358,&local_340,local_354);
                  if (((local_32c != 0xea) && (local_32c != 0x103)) &&
                     (iVar6 = local_328, pvVar5 = local_338, local_32c != 0)) break;
                  uVar8 = 0;
                  if (local_340 != 0) {
                    piVar11 = (int *)((int)pvVar1 + 0x14);
                    do {
                      iVar9 = *piVar11;
                      if (iVar9 == 0) {
                        iVar9 = piVar11[2];
                      }
                      local_34c = piVar11;
                      FUN_0101f9b0(iVar9);
                      if (piVar11[1] == 0) {
                        iVar9 = wsprintfA(local_104,"%s\t",iVar9);
                        sVar2 = (short)iVar9;
                      }
                      else {
                        iVar9 = wsprintfA(local_104,"%s\t%s",iVar9,piVar11[1]);
                        sVar2 = (short)iVar9;
                      }
                      uVar3 = sVar2 + 1;
                      local_314 = CONCAT22(local_314._2_2_,uVar3);
                      pCVar10 = local_104;
                      pCVar12 = local_310;
                      for (uVar7 = (uint)(uVar3 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
                        *(undefined4 *)pCVar12 = *(undefined4 *)pCVar10;
                        pCVar10 = pCVar10 + 4;
                        pCVar12 = pCVar12 + 4;
                      }
                      local_320 = *(int *)(local_334 + 4) + 5;
                      for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                        *pCVar12 = *pCVar10;
                        pCVar10 = pCVar10 + 1;
                        pCVar12 = pCVar12 + 1;
                      }
                      local_324 = 0x1f0000;
                      local_31c = local_320;
                      local_318 = calloc(1,4);
                      *local_318 = 0xb;
                      _SfList_AllocAndInsertItem_20(param_1,&local_324,uVar3 + 0x17,0xffffffff,0);
                      uVar8 = uVar8 + 1;
                      piVar11 = local_34c + 8;
                      piVar13 = local_344;
                      local_34c = piVar11;
                    } while (uVar8 < local_340);
                  }
                  iVar6 = local_328;
                  pvVar5 = local_338;
                } while (local_32c != 0x103);
              }
            }
            local_33c = local_33c + 1;
            piVar13 = piVar13 + 8;
            iVar9 = local_330;
            local_344 = piVar13;
          } while (local_33c < local_348);
        }
        pMem = local_354;
        if ((iVar6 == 0x103) || (iVar9 == 0)) break;
      }
    }
  }
  if (local_358 != (HANDLE)0x0) {
    WNetCloseEnum(local_358);
  }
  if (local_350 != (HANDLE)0x0) {
    WNetCloseEnum(local_350);
  }
  if (pMem != (LPCVOID)0x0) {
    pvVar4 = GlobalHandle(pMem);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem);
    GlobalFree(pvVar4);
  }
  pvVar5 = local_338;
  if (local_338 == (LPCVOID)0x0) {
    return *param_1;
  }
  pvVar4 = GlobalHandle(local_338);
  GlobalUnlock(pvVar4);
  pvVar4 = GlobalHandle(pvVar5);
  GlobalFree(pvVar4);
  return *param_1;
}


