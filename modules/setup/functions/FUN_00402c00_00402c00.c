/* Module: Setup.exe
   Function: FUN_00402c00
   Address: 00402c00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00402c00(LPCSTR param_1)

{
  bool bVar1;
  LANGID LVar2;
  DWORD DVar3;
  uchar *puVar4;
  int iVar5;
  ushort *puVar6;
  undefined **lpString1;
  ushort uVar7;
  undefined **ppuVar8;
  LPCSTR lpString1_00;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint local_110;
  uchar *local_108;
  uchar local_104 [260];
  
  local_110 = 0;
  bVar1 = true;
  puVar10 = &DAT_00448660;
  for (iVar5 = 0x1dd; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_108 = &DAT_00448670;
  lpString1 = (undefined **)&DAT_00443020;
  do {
    iVar5 = lstrcmpiA((LPCSTR)lpString1,"enu");
    if (iVar5 == 0) {
      DVar3 = GetPrivateProfileStringA
                        ("ProductInfo","ProductInstallName","",(LPSTR)local_104,0x104,&DAT_004476dc)
      ;
      if (DVar3 != 0) {
        puVar4 = (uchar *)_SfGetFileNameExtensionPtrA_4((LPCSTR)local_104);
        _mbscpy(puVar4,".msi");
        goto LAB_00402ca0;
      }
    }
    else {
      DVar3 = GetPrivateProfileStringA
                        ("LangProductInstallName",(LPCSTR)lpString1,"",(LPSTR)local_104,0x104,
                         &DAT_004476dc);
LAB_00402ca0:
      if ((DVar3 != 0) && (iVar5 = FUN_00402e60(), iVar5 != 0)) {
        ppuVar8 = lpString1;
        puVar4 = local_108 + -0xc;
        for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined **)puVar4 = *ppuVar8;
          ppuVar8 = ppuVar8 + 1;
          puVar4 = puVar4 + 4;
        }
        _mbscpy(local_108,local_104);
        local_110 = local_110 + 1;
        local_108 = local_108 + 0x110;
      }
    }
    lpString1 = lpString1 + 0x44;
  } while (lpString1 < &PTR_s_The_reason_for_the_error_could_n_00434d23_5_00443680);
  DAT_00448660 = local_110;
  if ((param_1 != (LPCSTR)0x0) && (uVar11 = 0, local_110 != 0)) {
    lpString1_00 = (LPCSTR)&DAT_00448664;
LAB_00402d19:
    iVar5 = lstrcmpiA(lpString1_00,param_1);
    if (iVar5 != 0) goto code_r0x00402d25;
    puVar9 = &DAT_00448664 + uVar11 * 0x44;
    puVar12 = &DAT_00448cc4;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    goto LAB_00402e23;
  }
LAB_00402d35:
  if (DAT_00448660 == 1) {
    puVar9 = &DAT_00448664;
    puVar12 = &DAT_00448cc4;
    for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  else {
    if (1 < DAT_00448660) {
      puVar9 = &DAT_00448664;
      puVar12 = &DAT_00448cc4;
      for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      LVar2 = GetUserDefaultLangID();
      uVar7 = LVar2 & 0x3ff | 0x400;
      LVar2 = GetUserDefaultLangID();
      if ((LVar2 & 0x3ff) == 10) {
        uVar7 = 0xc0a;
      }
      uVar11 = 0;
      if (DAT_00448660 != 0) {
        puVar6 = (ushort *)&DAT_00448668;
LAB_00402dc2:
        if (uVar7 != *puVar6) goto code_r0x00402dc7;
        puVar9 = &DAT_00448664 + uVar11 * 0x44;
        puVar12 = &DAT_00448cc4;
        for (iVar5 = 0x44; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
      }
LAB_00402df0:
      uVar11 = DAT_00448cc8 & 0xffff;
      FUN_00402ea0();
      _SfLang_UpdateKernelLCID_12(DAT_00446d7c,uVar11);
      bVar1 = FUN_00403470((HWND)0x0);
    }
LAB_00402e23:
    if (DAT_00448660 == 0) {
      return bVar1;
    }
  }
  uVar11 = DAT_00448cc8 & 0xffff;
  FUN_00402ea0();
  _SfLang_UpdateKernelLCID_12(DAT_00446d7c,uVar11);
  return bVar1;
code_r0x00402d25:
  uVar11 = uVar11 + 1;
  lpString1_00 = lpString1_00 + 0x110;
  if (DAT_00448660 <= uVar11) goto LAB_00402d35;
  goto LAB_00402d19;
code_r0x00402dc7:
  uVar11 = uVar11 + 1;
  puVar6 = puVar6 + 0x88;
  if (DAT_00448660 <= uVar11) goto LAB_00402df0;
  goto LAB_00402dc2;
}


