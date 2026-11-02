/* Module: vegas30.exe
   Function: FUN_00579dd0
   Address: 00579dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_00579dd0(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined1 *puVar3;
  UINT uMode;
  HMODULE pHVar4;
  LPCSTR lpMultiByteStr;
  long lVar5;
  HGLOBAL hMem;
  LPVOID pvVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint local_cc8;
  undefined4 local_cc4 [7];
  uint local_ca8;
  undefined4 local_ca4 [5];
  uint local_c90;
  undefined4 local_c8c [6];
  int *local_c74;
  LPSTREAM local_c70;
  SIZE_T local_c6c [3];
  SIZE_T local_c60;
  uint local_c5c;
  void *local_c58;
  CHAR local_c54 [260];
  WCHAR local_b50 [259];
  undefined2 local_94a;
  uchar local_948 [260];
  CHAR local_844 [260];
  uchar local_740 [260];
  WCHAR local_63c [259];
  undefined2 local_436;
  char local_434 [260];
  WCHAR local_330 [259];
  undefined2 local_12a;
  UINT local_128;
  uchar local_124 [260];
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00627308;
  puStack_10 = &DAT_0060ac70;
  local_14 = ExceptionList;
  local_1c = &stack0xfffff318;
  iVar9 = 0;
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 8) = 0;
  puVar3 = &stack0xfffff318;
  if (*(int *)(param_1 + 0x14) == 0) {
    _SfGetModulePath_12(0,local_124,0x104);
    _mbscat(local_124,(uchar *)"sfmarket2.dll");
    local_8 = 0;
    uMode = SetErrorMode(0x8000);
    local_128 = uMode;
    pHVar4 = LoadLibraryA((LPCSTR)local_124);
    *(HMODULE *)(param_1 + 0x14) = pHVar4;
    SetErrorMode(uMode);
    puVar3 = local_1c;
    if (*(int *)(param_1 + 0x14) == 0) {
      iVar9 = -0x7ffb1ff9;
      local_20 = 0x8004e007;
    }
  }
  local_1c = puVar3;
  local_8 = 0xffffffff;
  if (iVar9 < 0) {
    ExceptionList = local_14;
    return iVar9;
  }
  puVar1 = (undefined4 *)(param_1 + 8);
  iVar9 = _SfDllCreateInstance_20
                    (*(undefined4 *)(param_1 + 0x14),&DAT_0061bed8,0,&DAT_0061be88,puVar1);
  if (iVar9 < 0) {
    ExceptionList = local_14;
    return iVar9;
  }
  lpMultiByteStr = (LPCSTR)FUN_0043cf70(2);
  MultiByteToWideChar(0,1,lpMultiByteStr,-1,local_330,0x104);
  local_12a = 0;
  iVar9 = _SfMetric_OpenSubKey_12((undefined4 *)(param_1 + 0x18),DAT_00647200,"SfMarket");
  if (iVar9 < 0) goto LAB_0057a2b0;
  wsprintfA(local_c54,"%s\\%s\\%d.%d","Software\\Sonic Foundry","Vegas",3,0);
  MultiByteToWideChar(0,1,local_c54,-1,local_b50,0x104);
  local_94a = 0;
  GetModuleFileNameA(DAT_006471fc,local_844,0x104);
  _splitpath(local_844,(char *)0x0,(char *)0x0,local_434,(char *)0x0);
  SfPrintF(local_740,"%s.udat",local_434);
  _mbscpy(local_948,local_740);
  if (DAT_0064b4e4 == 0) {
    iVar9 = FUN_00601ab0(local_c8c,&local_c90,1);
    if (iVar9 < 0) {
      DAT_0064b4f0 = 1;
    }
    else {
      uVar7 = (local_c90 & 0xffff) >> 8;
      if ((int)DAT_0064b4e4 <= (int)uVar7) {
        DAT_0064b4f0 = 0;
        _DAT_0064b4f4 = local_c8c[0];
        DAT_0064b4e4 = uVar7;
      }
    }
  }
  if ((int)DAT_0064b4e4 < 0x40) {
    if (DAT_0064b4e4 == 0) {
      iVar9 = FUN_00601ab0(local_ca4,&local_ca8,1);
      if (iVar9 < 0) {
        DAT_0064b4f0 = 1;
      }
      else {
        uVar7 = (local_ca8 & 0xffff) >> 8;
        if ((int)DAT_0064b4e4 <= (int)uVar7) {
          DAT_0064b4f0 = 0;
          _DAT_0064b4f4 = local_ca4[0];
          DAT_0064b4e4 = uVar7;
        }
      }
    }
    if (0x3f < (int)DAT_0064b4e4) goto LAB_0057a091;
LAB_0057a099:
    local_c58 = (void *)0x0;
    lVar5 = SfOem_Init(&local_c58,(char *)0x0,(char *)0x0);
    if ((-1 < lVar5) && (local_c58 != (void *)0x0)) {
      local_c5c = 0;
      SfOem_GetBuild(local_c58,&local_c5c,0);
      if (local_c5c != 0) {
        SfOem_GetUDATFile(local_c58,(char *)local_948,0x104,(char *)local_740);
        *(undefined4 *)(param_1 + 0x1ec) = 1;
      }
    }
    SfOem_Done(local_c58);
  }
  else {
LAB_0057a091:
    if (DAT_0064b4f0 != 0) goto LAB_0057a099;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  MultiByteToWideChar(0,1,(LPCSTR)local_948,-1,local_63c,0x104);
  local_436 = 0;
  iVar9 = (**(code **)(*(int *)*puVar1 + 0xc))
                    ((int *)*puVar1,local_b50,*(undefined4 *)(param_1 + 0x18),local_330,
                     *(undefined4 *)(DAT_0064b4f8 + 0x30),local_63c);
  if (-1 < iVar9) {
    local_c60 = 0;
    iVar9 = _SfGetMetricBinaryEx_20(DAT_00647200,0xed8,&local_c60,0,&local_c60);
    if ((iVar9 == -0x7ffb1fc4) && (hMem = GlobalAlloc(2,local_c60), hMem != (HGLOBAL)0x0)) {
      pvVar6 = GlobalLock(hMem);
      local_c6c[0] = 0;
      iVar9 = _SfGetMetricBinaryEx_20(DAT_00647200,0xed8,pvVar6,local_c60,local_c6c);
      if (-1 < iVar9) {
        if (local_c60 == local_c6c[0]) {
          local_c70 = (IStream *)0x0;
          iVar9 = CreateStreamOnHGlobal(hMem,0,&local_c70);
          if (-1 < iVar9) {
            iVar9 = (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1,local_c70);
            if (iVar9 == -0x7ffb1f50) {
              _SfDeleteMetric_12(DAT_00647200,0xed8,3);
              iVar9 = 0;
            }
            (*local_c70->lpVtbl->Release)(local_c70);
            local_c70 = (IStream *)0x0;
            if (-1 < iVar9) {
              iVar9 = _SfGetMetricBinaryEx_20(DAT_00647200,0xeda,&DAT_00659e64,0x5c,local_c6c);
            }
          }
        }
        else {
          iVar9 = -0x7fffbffb;
        }
      }
      GlobalUnlock(hMem);
      GlobalFree(hMem);
    }
  }
LAB_0057a2b0:
  puVar10 = (undefined4 *)(param_1 + 0x1c);
  for (iVar8 = 0x73; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  if (iVar9 < 0) {
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    *puVar1 = 0;
  }
  else {
    local_c74 = (int *)0x0;
    iVar9 = (*(code *)**(undefined4 **)*puVar1)((undefined4 *)*puVar1,&DAT_0061bea8,&local_c74);
    if ((-1 < iVar9) && (local_c74 != (int *)0x0)) {
      if (DAT_0064b4e4 == 0) {
        iVar8 = FUN_00601ab0(local_cc4,&local_cc8,1);
        if (iVar8 < 0) {
          DAT_0064b4f0 = 1;
        }
        else {
          uVar7 = (local_cc8 & 0xffff) >> 8;
          if ((int)DAT_0064b4e4 <= (int)uVar7) {
            DAT_0064b4f0 = 0;
            _DAT_0064b4f4 = local_cc4[0];
            DAT_0064b4e4 = uVar7;
          }
        }
      }
      if ((DAT_0064b4e4 == 0x20) || (DAT_0064b4e4 == 0x40)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        uVar11 = 100;
      }
      else {
        uVar11 = 0x65;
      }
      iVar8 = _SfLoadIcon_8(DAT_00647204,uVar11);
      *(int *)(param_1 + 0x1e8) = iVar8;
      if (iVar8 != 0) {
        (**(code **)(*local_c74 + 0x10))(local_c74,iVar8);
      }
      (**(code **)(*local_c74 + 8))(local_c74);
      ExceptionList = local_14;
      return iVar9;
    }
  }
  ExceptionList = local_14;
  return iVar9;
}


