/* Module: vegas30k.dll
   Function: FUN_0112d160
   Address: 0112d160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0112d160(undefined4 param_1)

{
  short sVar1;
  ushort uVar2;
  HGLOBAL pvVar3;
  LPVOID pMem;
  uint uVar5;
  uint uVar6;
  CHAR *pCVar7;
  CHAR *pCVar8;
  HANDLE local_33c;
  int *local_338;
  uint local_334;
  int local_330;
  LPVOID local_32c;
  int local_328;
  undefined4 local_324;
  int local_320;
  int local_31c;
  undefined4 *local_318;
  uint local_314;
  CHAR local_310 [524];
  CHAR local_104 [260];
  int iVar4;
  
  local_33c = (HANDLE)0x0;
  local_314 = (uint)(ushort)local_314;
  pvVar3 = GlobalAlloc(2,0x5000);
  pMem = GlobalLock(pvVar3);
  local_32c = pMem;
  if (pMem != (LPVOID)0x0) {
    WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)0x0,&local_33c);
    if (local_33c == (HANDLE)0x0) goto LAB_0112d2f4;
    do {
      local_328 = FUN_0112d320(local_33c,&local_334,pMem);
      if (((local_328 != 0xea) && (local_328 != 0x103)) && (local_328 != 0)) break;
      uVar6 = 0;
      if (local_334 != 0) {
        local_338 = (int *)((int)pMem + 0x14);
        do {
          iVar4 = *local_338;
          if (iVar4 == 0) {
            iVar4 = local_338[2];
          }
          if (local_338[1] == 0) {
            iVar4 = wsprintfA(local_104,"%s\t",iVar4);
            sVar1 = (short)iVar4;
          }
          else {
            iVar4 = wsprintfA(local_104,"%s\t%s",iVar4,local_338[1]);
            sVar1 = (short)iVar4;
          }
          uVar2 = sVar1 + 1;
          local_314 = CONCAT22(local_314._2_2_,uVar2);
          pCVar7 = local_104;
          pCVar8 = local_310;
          for (uVar5 = (uint)(uVar2 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)pCVar8 = *(undefined4 *)pCVar7;
            pCVar7 = pCVar7 + 4;
            pCVar8 = pCVar8 + 4;
          }
          local_320 = *(int *)(local_330 + 4) + 4;
          for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar8 = *pCVar7;
            pCVar7 = pCVar7 + 1;
            pCVar8 = pCVar8 + 1;
          }
          local_324 = 0x1f0000;
          local_31c = local_320;
          local_318 = calloc(1,4);
          *local_318 = 10;
          _SfList_AllocAndInsertItem_20(param_1,&local_324,uVar2 + 0x17,0xffffffff,0);
          uVar6 = uVar6 + 1;
          local_338 = local_338 + 8;
          pMem = local_32c;
        } while (uVar6 < local_334);
      }
    } while (local_328 != 0x103);
  }
  if (local_33c != (HANDLE)0x0) {
    WNetCloseEnum(local_33c);
  }
LAB_0112d2f4:
  if (pMem != (LPCVOID)0x0) {
    pvVar3 = GlobalHandle(pMem);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(pMem);
    GlobalFree(pvVar3);
  }
  return 0;
}


