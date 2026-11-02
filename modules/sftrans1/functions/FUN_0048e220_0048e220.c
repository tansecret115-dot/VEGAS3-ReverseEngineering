/* Module: sftrans1.dll
   Function: FUN_0048e220
   Address: 0048e220
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0048e220(int param_1,undefined4 param_2,double param_3)

{
  int iVar1;
  wchar_t *_Str;
  LPCVOID pMem;
  double dVar2;
  bool bVar3;
  HGLOBAL pvVar4;
  undefined4 *pMem_00;
  LPVOID pvVar5;
  undefined4 uVar6;
  size_t sVar7;
  int iVar8;
  undefined4 *puVar9;
  double *pdVar10;
  bool bVar11;
  int local_2c;
  int local_28;
  short *local_24;
  double local_20;
  double local_18;
  double local_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xd1c);
  local_10 = (double)(ulonglong)*(uint *)(*(int *)(param_1 + 8) + 0xc4);
  local_10 = (double)(longlong)local_10;
  pvVar4 = GlobalAlloc(0x40,iVar1 * 0x30);
  pMem_00 = GlobalLock(pvVar4);
  if (pMem_00 != (undefined4 *)0x0) {
    bVar3 = true;
    puVar9 = pMem_00;
    for (iVar8 = (*(int *)(*(int *)(param_1 + 8) + 0xd1c) * 3 & 0xfffffffU) << 2; iVar8 != 0;
        iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    local_18 = local_10;
    local_24 = *(short **)(*(int *)(param_1 + 8) + 0xd20);
    local_28 = 0;
    if (*local_24 != 0) {
      pdVar10 = (double *)(pMem_00 + 2);
      do {
        if (iVar1 <= local_28) break;
        bVar11 = local_28 != iVar1 + -1;
        iVar8 = FUN_0048ceb0(local_24);
        local_20 = (double)CONCAT44(local_20._4_4_,iVar8);
        pvVar4 = GlobalAlloc(0x40,iVar8 * 2);
        pvVar5 = GlobalLock(pvVar4);
        if (pvVar5 == (LPVOID)0x0) break;
        uVar6 = FUN_0048cec0(&local_24,SUB84(local_20,0),pvVar5);
        *(undefined4 *)(pdVar10 + -1) = uVar6;
        *(LPVOID *)((int)pdVar10 + -4) = pvVar5;
        iVar8 = *(int *)(pdVar10 + -1);
        if (iVar8 == 0) {
          if (!bVar3) {
            local_18 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xb20) + local_18;
          }
          *pdVar10 = local_18;
          local_18 = local_18 + *(double *)(param_1 + 0x550);
          pdVar10[1] = local_18;
          if (bVar11) {
            dVar2 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xb28);
LAB_0048e432:
            local_18 = dVar2 + local_18;
          }
        }
        else if (iVar8 == 1) {
          if (!bVar3) {
            local_18 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xb98) + local_18;
          }
          *pdVar10 = local_18;
          local_18 = local_18 + *(double *)(param_1 + 0x558);
          pdVar10[1] = local_18;
          if (bVar11) {
            dVar2 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xba0);
            goto LAB_0048e432;
          }
        }
        else if (iVar8 == 2) {
          if (!bVar3) {
            local_18 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xc10) + local_18;
          }
          *pdVar10 = local_18;
          local_18 = local_18 + *(double *)(param_1 + 0x560);
          pdVar10[1] = local_18;
          if (bVar11) {
            dVar2 = local_10 * *(double *)(*(int *)(param_1 + 8) + 0xc18);
            goto LAB_0048e432;
          }
        }
        pdVar10 = pdVar10 + 6;
        local_28 = local_28 + 1;
        bVar3 = false;
      } while (*local_24 != 0);
    }
    local_18 = local_18 * param_3;
    bVar3 = false;
    local_2c = 0;
    if (0 < iVar1) {
      puVar9 = pMem_00 + 1;
      do {
        if (bVar3) break;
        local_20 = local_18 + local_10;
        if ((*(double *)(puVar9 + 1) < local_20) && (local_18 < *(double *)(puVar9 + 3))) {
          iVar8 = puVar9[-1];
          if (iVar8 == 0) {
            FUN_0048ebf0(param_2,*puVar9,*(double *)(puVar9 + 1) - local_18,puVar9 + 6);
          }
          else if (iVar8 == 1) {
            FUN_0048ecf0(param_2,*puVar9,*(double *)(puVar9 + 1) - local_18,puVar9 + 6);
          }
          else if (iVar8 == 2) {
            _Str = (wchar_t *)*puVar9;
            sVar7 = wcslen(_Str);
            FUN_0048ee00(param_2,_Str,_Str + sVar7 + 1,*(double *)(puVar9 + 1) - local_18,puVar9 + 6
                        );
          }
          else {
            bVar3 = true;
          }
        }
        if (local_20 < *(double *)(puVar9 + 1)) {
          bVar3 = true;
        }
        local_2c = local_2c + 1;
        puVar9 = puVar9 + 0xc;
      } while (local_2c < iVar1);
    }
    if (0 < iVar1) {
      puVar9 = pMem_00 + 1;
      local_28 = iVar1;
      do {
        pMem = (LPCVOID)*puVar9;
        if (pMem != (LPCVOID)0x0) {
          pvVar4 = GlobalHandle(pMem);
          GlobalUnlock(pvVar4);
          pvVar4 = GlobalHandle(pMem);
          GlobalFree(pvVar4);
        }
        puVar9 = puVar9 + 0xc;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    pvVar4 = GlobalHandle(pMem_00);
    GlobalUnlock(pvVar4);
    pvVar4 = GlobalHandle(pMem_00);
    GlobalFree(pvVar4);
  }
  return;
}


