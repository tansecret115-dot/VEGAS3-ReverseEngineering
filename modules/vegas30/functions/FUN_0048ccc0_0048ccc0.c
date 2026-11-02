/* Module: vegas30.exe
   Function: FUN_0048ccc0
   Address: 0048ccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


HGLOBAL FUN_0048ccc0(int *param_1,int *param_2)

{
  HGLOBAL hMem;
  uchar *_Dest;
  int iVar1;
  int iVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  HGLOBAL hMem_00;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  SIZE_T local_14;
  uint local_10;
  uchar *local_c;
  
  iVar5 = *param_1;
  uVar8 = 1000;
  local_14 = 0x3e9;
  hMem = GlobalAlloc(0x2002,0x3e9);
  bVar11 = true;
  hMem_00 = hMem;
  if (hMem == (HGLOBAL)0x0) goto LAB_0048d053;
  _Dest = GlobalLock(hMem);
  if (_Dest != (uchar *)0x0) {
    _mbscpy(_Dest,"");
    if ((*param_2 == 0xffff) && (param_2[1] == 0xffff)) {
      local_10 = param_2[3];
      if (local_10 < param_2[5] + local_10) {
        iVar1 = local_10 << 4;
        do {
          iVar2 = lstrlenA((LPCSTR)((uint)*(ushort *)(iVar1 + 6 + *(int *)(iVar5 + 0xf4)) +
                                   *(int *)(iVar5 + 300)));
          uVar9 = iVar2 + 1;
          pvVar3 = hMem;
          if (uVar8 < uVar9) {
            GlobalUnlock(hMem);
            uVar7 = 1000;
            if (999 < uVar9) {
              uVar7 = uVar9;
            }
            local_14 = local_14 + uVar7;
            if (uVar9 < 1000) {
              uVar9 = 1000;
            }
            uVar8 = uVar8 + uVar9;
            pvVar3 = GlobalReAlloc(hMem,local_14,0);
            hMem_00 = hMem;
            if ((pvVar3 == (HGLOBAL)0x0) ||
               (_Dest = GlobalLock(pvVar3), hMem_00 = pvVar3, _Dest == (uchar *)0x0))
            goto LAB_0048d051;
          }
          _mbscat(_Dest,(uchar *)((uint)*(ushort *)(iVar1 + 6 + *(int *)(iVar5 + 0xf4)) +
                                 *(int *)(iVar5 + 300)));
          uVar8 = uVar8 - iVar2;
          if (local_10 < (uint)(param_2[5] + -1 + param_2[3])) {
            _mbscat(_Dest,"\t");
            uVar8 = uVar8 - 1;
          }
          iVar1 = iVar1 + 0x10;
          local_10 = local_10 + 1;
          hMem = pvVar3;
        } while (local_10 < (uint)(param_2[5] + param_2[3]));
        if (uVar8 < 2) {
          GlobalUnlock(pvVar3);
          uVar8 = uVar8 + 1000;
          local_14 = local_14 + 1000;
          hMem = GlobalReAlloc(pvVar3,local_14,0);
          hMem_00 = pvVar3;
          if ((hMem == (HGLOBAL)0x0) ||
             (_Dest = GlobalLock(hMem), hMem_00 = hMem, _Dest == (uchar *)0x0)) goto LAB_0048d051;
        }
      }
      _mbscat(_Dest,"\r\n");
      uVar8 = uVar8 - 2;
    }
    uVar9 = param_2[2];
    pvVar3 = hMem;
    if (uVar9 < uVar9 + param_2[4]) {
      do {
        uVar7 = param_2[3];
        hMem_00 = pvVar3;
        if (uVar7 < param_2[5] + uVar7) {
          do {
            piVar4 = (int *)(*(code *)param_1[0xf])(param_1,uVar9,uVar7,0);
            if (piVar4 == (int *)0x0) {
              local_c = "";
            }
            else {
              local_c = "";
              if ((uchar *)*piVar4 != (uchar *)0x0) {
                local_c = (uchar *)*piVar4;
              }
            }
            iVar5 = lstrlenA((LPCSTR)local_c);
            uVar10 = iVar5 + 1;
            pvVar3 = hMem_00;
            if (uVar8 < uVar10) {
              GlobalUnlock(hMem_00);
              uVar6 = 1000;
              if (999 < uVar10) {
                uVar6 = uVar10;
              }
              local_14 = local_14 + uVar6;
              if (uVar10 < 1000) {
                uVar10 = 1000;
              }
              uVar8 = uVar8 + uVar10;
              pvVar3 = GlobalReAlloc(hMem_00,local_14,0);
              if ((pvVar3 == (HGLOBAL)0x0) ||
                 (_Dest = GlobalLock(pvVar3), hMem_00 = pvVar3, _Dest == (uchar *)0x0))
              goto LAB_0048d051;
            }
            _mbscat(_Dest,local_c);
            uVar8 = uVar8 - iVar5;
            if (uVar7 < (uint)(param_2[5] + -1 + param_2[3])) {
              _mbscat(_Dest,"\t");
              uVar8 = uVar8 - 1;
            }
            uVar7 = uVar7 + 1;
            hMem_00 = pvVar3;
          } while (uVar7 < (uint)(param_2[5] + param_2[3]));
        }
        hMem = pvVar3;
        if (uVar8 < 2) {
          GlobalUnlock(pvVar3);
          uVar8 = uVar8 + 1000;
          local_14 = local_14 + 1000;
          hMem = GlobalReAlloc(pvVar3,local_14,0);
          hMem_00 = pvVar3;
          if ((hMem == (HGLOBAL)0x0) ||
             (_Dest = GlobalLock(hMem), hMem_00 = hMem, _Dest == (uchar *)0x0)) goto LAB_0048d051;
        }
        _mbscat(_Dest,"\r\n");
        uVar8 = uVar8 - 2;
        uVar9 = uVar9 + 1;
        pvVar3 = hMem;
      } while (uVar9 < (uint)(param_2[2] + param_2[4]));
    }
    GlobalUnlock(hMem);
    return hMem;
  }
LAB_0048d051:
  do {
    bVar11 = hMem_00 == (HGLOBAL)0x0;
LAB_0048d053:
  } while (bVar11);
  GlobalFree(hMem_00);
  return (HGLOBAL)0x0;
}


