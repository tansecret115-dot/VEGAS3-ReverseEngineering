/* Module: vegas30.exe
   Function: FUN_005f8bc0
   Address: 005f8bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HRESULT FUN_005f8bc0(int param_1,int param_2,LPCLSID param_3)

{
  LPCSTR pCVar1;
  HRESULT HVar2;
  uchar *_Source;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  LPCLSID pCVar7;
  float10 fVar8;
  float10 fVar9;
  WCHAR local_50 [39];
  undefined2 local_2;
  
  pCVar7 = param_3;
  for (iVar5 = 0x54; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar7->Data1 = 0;
    pCVar7 = (LPCLSID)&pCVar7->Data2;
  }
  if (param_1 != 0) {
    pCVar1 = (LPCSTR)FUN_005f8ed0(param_1);
    if (pCVar1 == (LPCSTR)0x0) {
      return -0x7fffbffb;
    }
    iVar5 = lstrcmpA(pCVar1,"0");
    if (iVar5 != 0) {
      MultiByteToWideChar(0,1,pCVar1,-1,local_50,0x28);
      local_2 = 0;
      HVar2 = CLSIDFromString(local_50,param_3);
      if (HVar2 < 0) {
        return HVar2;
      }
    }
    _Source = (uchar *)FUN_005f8ed0(0);
    if (_Source == (uchar *)0x0) {
      return -0x7fffbffb;
    }
    iVar5 = lstrcmpiA((LPCSTR)_Source,"None");
    if (iVar5 != 0) {
      uVar3 = lstrlenA((LPCSTR)_Source);
      if (0x103 < uVar3) {
        return -0x7fffbffb;
      }
      _mbscpy((uchar *)(param_3 + 1),_Source);
    }
    iVar5 = FUN_005f8ed0(0);
    if (iVar5 == 0) {
      return -0x7fffbffb;
    }
    iVar5 = _SfTextToLongToken_8(iVar5,0);
    param_3[0x11].Data2 = (short)iVar5;
    param_3[0x11].Data3 = (short)((uint)iVar5 >> 0x10);
    if (iVar5 != 0) {
      if (iVar5 < 8) {
        return -0x7fffbffb;
      }
      if (800 < iVar5) {
        return -0x7fffbffb;
      }
    }
    iVar5 = FUN_005f8ed0(0);
    if (iVar5 == 0) {
      return -0x7fffbffb;
    }
    iVar5 = _SfTextToLongToken_8(iVar5,0);
    *(int *)param_3[0x11].Data4 = iVar5;
    if (iVar5 != 0) {
      if (iVar5 < 8) {
        return -0x7fffbffb;
      }
      if (800 < iVar5) {
        return -0x7fffbffb;
      }
    }
    iVar5 = FUN_005f8ed0(0);
    if (iVar5 == 0) {
      return -0x7fffbffb;
    }
    fVar8 = (float10)_SfTextToDoubleToken_8(iVar5,0);
    fVar9 = (float10)_DAT_00610fd8;
    *(double *)(param_3 + 0x12) = (double)fVar8;
    if (fVar8 != fVar9) {
      if (fVar8 < (float10)_DAT_0062cf08) {
        return -0x7fffbffb;
      }
      if ((float10)_DAT_0062cf10 < fVar8) {
        return -0x7fffbffb;
      }
    }
    iVar5 = FUN_005f8ed0(0);
    if (iVar5 == 0) {
      return -0x7fffbffb;
    }
    iVar5 = _SfTextToLongToken_8(iVar5,0);
    *(int *)param_3[0x12].Data4 = iVar5;
    if (iVar5 < 0) {
      return -0x7fffbffb;
    }
    if (0x20 < iVar5) {
      return -0x7fffbffb;
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  pCVar1 = (LPCSTR)FUN_005f8ed0(param_2);
  if (pCVar1 == (LPCSTR)0x0) {
    return -0x7fffbffb;
  }
  iVar5 = 0;
  ppuVar6 = &PTR_s_Undefined_00646e0c;
  while (iVar4 = lstrcmpiA(pCVar1,*ppuVar6), iVar4 != 0) {
    ppuVar6 = ppuVar6 + 1;
    iVar5 = iVar5 + 1;
    if ((undefined **)((int)&PTR_s_One_Field_Doubled_00646e20 + 3) < ppuVar6) {
      return -0x7fffbffb;
    }
  }
  param_3[0x13].Data1 = iVar5 - 1;
  iVar5 = FUN_005f8ed0(0);
  if (iVar5 == 0) {
    return -0x7fffbffb;
  }
  fVar9 = (float10)_SfTextToDoubleToken_8(iVar5,0);
  *(double *)param_3[0x13].Data4 = (double)fVar9;
  if ((float10)_DAT_0062cf18 <= fVar9) {
    if ((float10)_DAT_0062cf20 < fVar9) {
      return -0x7fffbffb;
    }
    pCVar1 = (LPCSTR)FUN_005f8ed0(0);
    if (pCVar1 == (LPCSTR)0x0) {
      return -0x7fffbffb;
    }
    iVar5 = 0;
    ppuVar6 = &PTR_s_Undefined_00646e24;
    while (iVar4 = lstrcmpiA(pCVar1,*ppuVar6), iVar4 != 0) {
      ppuVar6 = ppuVar6 + 1;
      iVar5 = iVar5 + 1;
      if ((undefined **)((int)&PTR_s_Premultiplied_Dirty_00646e34 + 3) < ppuVar6) {
        return -0x7fffbffb;
      }
    }
    param_3[0x14].Data1 = iVar5 - 1;
    iVar5 = FUN_005f8ed0(0);
    if (iVar5 == 0) {
      return -0x7fffbffb;
    }
    fVar9 = (float10)_SfTextToDoubleToken_8(iVar5,0);
    *(double *)param_3[0x14].Data4 = (double)fVar9;
    if ((float10)_DAT_00610fd8 <= fVar9) {
      if (fVar9 <= (float10)_DAT_0062cf30) {
        return 0;
      }
      return -0x7fffbffb;
    }
  }
  return -0x7fffbffb;
}


