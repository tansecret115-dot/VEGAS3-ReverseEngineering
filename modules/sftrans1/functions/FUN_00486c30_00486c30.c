/* Module: sftrans1.dll
   Function: FUN_00486c30
   Address: 00486c30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall
FUN_00486c30(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,wchar_t *param_6)

{
  int iVar1;
  HGLOBAL pvVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  wchar_t *_Str;
  undefined4 *puVar9;
  undefined4 *local_c;
  
  iVar8 = 0;
  if ((-1 < param_2) && (param_2 <= **(int **)(param_1 + 0xa4))) {
    iVar1 = FUN_00486940(param_4);
    if (iVar1 == 0) {
      param_4 = 0xffffffff;
    }
    local_c = (undefined4 *)0x0;
    if (iVar1 != 0) {
      pvVar2 = GlobalAlloc(0x40,*(int *)(iVar1 + 0xc) << 2);
      local_c = GlobalLock(pvVar2);
      puVar4 = local_c;
      for (uVar6 = *(uint *)(iVar1 + 0xc) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar4 = local_c;
      _Str = param_6;
      if (0 < *(int *)(iVar1 + 0xc)) {
        do {
          if ((iVar8 < param_5) && (param_6 != (wchar_t *)0x0)) {
            *puVar4 = _Str;
            sVar3 = wcslen(_Str);
            _Str = _Str + sVar3 + 1;
          }
          else {
            *puVar4 = &DAT_005633f8;
          }
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar8 < *(int *)(iVar1 + 0xc));
      }
    }
    param_6 = (wchar_t *)0x1;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
    if (0 < param_3) {
      param_5 = param_3;
      do {
        pvVar2 = GlobalAlloc(0x40,0x10);
        puVar4 = GlobalLock(pvVar2);
        *puVar4 = 0;
        *puVar4 = param_4;
        if (iVar1 != 0) {
          uVar5 = FUN_004869f0(param_4);
          puVar4[1] = uVar5;
          iVar8 = 0;
          puVar9 = local_c;
          if (0 < *(int *)(iVar1 + 0xc)) {
            do {
              sVar3 = wcslen((wchar_t *)*puVar9);
              if (sVar3 < 100) {
                sVar3 = wcslen((wchar_t *)*puVar9);
              }
              else {
                sVar3 = 100;
              }
              FUN_00486e50(puVar4[1] + iVar8 * 4,puVar9,sVar3 + 1);
              iVar8 = iVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar8 < *(int *)(iVar1 + 0xc));
          }
        }
        FUN_004863e0(puVar4,param_4);
        puVar4[3] = 0;
        uVar6 = FUN_00486ba0(param_2,puVar4);
        param_6 = (wchar_t *)((uint)param_6 | uVar6);
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
    if (0 < param_3) {
      FUN_0048c310(4,param_2,param_3);
    }
    if (local_c != (undefined4 *)0x0) {
      pvVar2 = GlobalHandle(local_c);
      GlobalUnlock(pvVar2);
      pvVar2 = GlobalHandle(local_c);
      GlobalFree(pvVar2);
    }
    return (uint)param_6;
  }
  return 0;
}


