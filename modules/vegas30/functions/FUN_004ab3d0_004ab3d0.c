/* Module: vegas30.exe
   Function: FUN_004ab3d0
   Address: 004ab3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004ab811) */

int FUN_004ab3d0(int param_1,int *param_2,undefined4 param_3,uint param_4,uint param_5,uint param_6)

{
  uchar *_Source;
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HGLOBAL hMem;
  uchar *_Dest;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  int local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint *local_14;
  
  iVar6 = 0;
  if ((param_2 == (int *)0x0) || (iVar5 = *param_2, iVar5 < 1)) {
    return 0;
  }
  iVar1 = FUN_004ab300(param_2,0);
  if (iVar1 < 1) {
    return 0;
  }
  puVar2 = (uint *)FUN_004aaca0(iVar1);
  if (puVar2 == (uint *)0x0) {
    return 0;
  }
  FUN_004aad00(puVar2,*(undefined4 *)(param_1 + 0xbc8));
  if ((param_6 & 0xf0000) == 0x60000) {
    *puVar2 = *puVar2 & 0xffffcfff | 0x800;
  }
  local_20 = 0;
  param_6 = 0;
  do {
    while( true ) {
      if (iVar5 <= (int)local_20) goto LAB_004ab4b2;
      iVar6 = *(int *)(param_2[2] + local_20 * 4);
      iVar3 = FUN_004a9db0(*(undefined4 *)(iVar6 + 0x208));
      if (iVar3 != 0) break;
      if ((*(int *)(iVar6 + 0x208) == 6) &&
         (*puVar2 = *puVar2 | 0x100000, *(int *)(param_1 + 0x170) == 2)) {
        *(undefined4 *)(param_1 + 0x170) = 0;
      }
      local_20 = local_20 + 1;
      iVar6 = 0;
    }
  } while (iVar6 == 0);
LAB_004ab4b2:
  local_24 = 0;
  local_1c = 0;
  if ((iVar6 != 0) && (local_24 = FUN_004ab100(0,iVar6), local_24 != 0)) {
    local_1c = FUN_004ab010(local_24);
  }
  local_18 = 0;
  if (0 < iVar1) {
    local_14 = puVar2 + 0x1c;
    do {
      puVar9 = (uint *)(-(uint)(local_18 < puVar2[2]) & (uint)local_14);
      while (((local_1c == 0 && ((int)local_20 < iVar5)) &&
             (local_20 = local_20 + 1, (int)local_20 < iVar5))) {
        iVar6 = *(int *)(param_2[2] + local_20 * 4);
        if (iVar6 == 0) {
          local_24 = 0;
        }
        else {
          local_24 = FUN_004ab100(0,iVar6);
        }
        param_6 = 0;
        if (local_24 == 0) {
          *puVar9 = *puVar9 | 0x40;
        }
        else {
          local_1c = FUN_004ab010(local_24);
        }
      }
      uVar8 = *(uint *)(iVar6 + 0x21c);
      uVar7 = 6;
      while (iVar3 = 0, (int)param_6 < 6) {
        uVar7 = FUN_004a9cd0(param_6);
        iVar3 = FUN_004aafe0(local_24,uVar7,0);
        iVar4 = FUN_004aa490(puVar2,uVar7);
        if (iVar4 < 1) {
          param_6 = param_6 + 1;
        }
        else {
          if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x8c) & 2) == 0)) {
            if ((uVar8 != 0) &&
               ((iVar4 = _SfList_FindSpecificItemRange_16
                                   (*(undefined4 *)(local_24 + 0x130),0,0xffffffff,iVar3),
                -1 < iVar4 && ((uVar8 & 1 << ((byte)iVar4 & 0x1f)) == 0)))) {
              *puVar9 = *puVar9 | 0x40;
            }
            if ((*(byte *)(iVar3 + 0x8c) & 2) == 0) goto LAB_004ab633;
            break;
          }
          param_6 = param_6 + 1;
        }
      }
      *puVar9 = *puVar9 | 0x40;
LAB_004ab633:
      if ((*puVar9 & 0x40) == 0) {
        puVar9[2] = uVar7;
        *puVar9 = *puVar9 | 8;
        puVar9[5] = local_18;
        if (iVar6 != 0) {
          if ((*(byte *)(iVar6 + 0x218) & 8) == 0) {
            puVar9[10] = 0;
            puVar9[0xc] = 0xffffffff;
            puVar9[0xb] = 0;
            puVar9[0xd] = 0xffffffff;
            puVar9[8] = *(uint *)(iVar3 + 0x20);
            puVar9[9] = *(uint *)(iVar3 + 0x24);
            if ((((iVar3 == 0) || (*(int *)(iVar3 + 4) != 3)) || (*(int *)(iVar3 + 0x80) != 1)) ||
               (*(int *)(iVar3 + 0x84) != 0)) goto LAB_004ab6e1;
            puVar9[8] = DAT_00647e58;
            uVar8 = DAT_00647e5c;
          }
          else {
            puVar9[10] = *(uint *)(iVar6 + 0x220);
            puVar9[0xb] = *(uint *)(iVar6 + 0x224);
            puVar9[0xc] = *(uint *)(iVar6 + 0x228);
            puVar9[0xd] = *(uint *)(iVar6 + 0x22c);
            puVar9[8] = *(uint *)(iVar6 + 0x228);
            uVar8 = *(uint *)(iVar6 + 0x22c);
          }
          puVar9[9] = uVar8;
        }
LAB_004ab6e1:
        puVar9[1] = 0;
        puVar9[4] = local_20;
      }
      param_6 = param_6 + 1;
      local_1c = local_1c + -1;
      local_18 = local_18 + 1;
      local_14 = local_14 + 0x1a;
    } while ((int)local_18 < iVar1);
  }
  puVar2[2] = local_18;
  puVar2[0x10] = param_4;
  puVar2[0x12] = 2;
  puVar2[3] = 0;
  puVar2[0x11] = param_5;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  iVar6 = FUN_004aad40(puVar2);
  if (iVar6 != 0) {
    uVar8 = 0;
    if (0 < *(int *)(iVar6 + 8)) {
      uVar7 = iVar6 + 0x70;
      bVar10 = *(int *)(iVar6 + 8) != 0;
      do {
        _Source = *(uchar **)(param_2[2] + *(int *)((-(uint)bVar10 & uVar7) + 0x10) * 4);
        if (_Source != (uchar *)0x0) {
          iVar5 = lstrlenA((LPCSTR)_Source);
          if (0 < (int)(iVar5 + 1U)) {
            hMem = GlobalAlloc(0x40,iVar5 + 1U);
            _Dest = GlobalLock(hMem);
            *(uchar **)((-(uint)bVar10 & uVar7) + 4) = _Dest;
            if (_Dest != (uchar *)0x0) {
              _mbscpy(_Dest,_Source);
            }
          }
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 + 0x68;
        bVar10 = uVar8 < *(uint *)(iVar6 + 8);
      } while ((int)uVar8 < (int)*(uint *)(iVar6 + 8));
    }
    uVar11 = ftol();
    lVar12 = __alldiv(uVar11,2,0);
    iVar5 = (int)lVar12;
    if (DAT_0064a530 < lVar12) {
      iVar5 = DAT_0064a530;
    }
    *(int *)(iVar6 + 0x68) = iVar5;
  }
  return iVar6;
}


