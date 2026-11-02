/* Module: vegas30.exe
   Function: FUN_00441f50
   Address: 00441f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00441f50(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uchar *_Source;
  HGLOBAL hMem;
  uchar *_Dest;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint local_18;
  undefined4 *local_c;
  int *local_8;
  uint local_4;
  
  uVar8 = *param_2;
  *param_1 = 0;
  if (uVar8 == 0) {
    iVar3 = 0;
  }
  else {
    local_4 = uVar8;
    iVar3 = _SfList_CreateExZ_32(param_1,4,0xffffffff,0xffffffff,2,0,0,0);
    if (iVar3 != 0) {
      return iVar3;
    }
    local_18 = 0;
    if (uVar8 == 0) {
      return 0;
    }
    while( true ) {
      iVar6 = *(int *)(param_2[2] + local_18 * 4);
      iVar3 = _SfList_AllocItem_12(*param_1,0x28,&local_c);
      puVar2 = local_c;
      if (local_c == (undefined4 *)0x0) break;
      uVar4 = FUN_005f2d10();
      *puVar2 = 0x20;
      uVar5 = FUN_00441e60(uVar4,param_3);
      puVar2[1] = uVar5;
      puVar2[2] = 0;
      uVar5 = ftol();
      puVar2[3] = uVar5;
      uVar5 = ftol();
      puVar2[4] = uVar5;
      uVar5 = ftol();
      puVar2[5] = uVar5;
      puVar2[6] = 0;
      _Source = *(uchar **)(iVar6 + 0xc);
      if ((_Source == (uchar *)0x0) &&
         (_Source = (uchar *)_SfGetFileNamePtrA_4(uVar4), _Source == (uchar *)0x0)) {
        puVar2[7] = 0;
      }
      else {
        iVar3 = lstrlenA((LPCSTR)_Source);
        puVar2[7] = iVar3 + 1U;
        hMem = GlobalAlloc(0x42,iVar3 + 1U);
        _Dest = GlobalLock(hMem);
        puVar2[8] = _Dest;
        if (_Dest != (uchar *)0x0) {
          _mbscpy(_Dest,_Source);
        }
      }
      puVar1 = puVar2 + 9;
      iVar3 = _SfList_CreateExZ_32(puVar1,4,0xffffffff,0xffffffff,2,0,0,0);
      if (iVar3 < 0) {
        _SfList_DeleteList_16(*param_1,0xffffffff,0xffffffff,0);
        return iVar3;
      }
      iVar3 = FUN_0047c7d0(iVar6 + 0x98,0);
      uVar8 = 2;
      if (iVar3 != 0) {
        uVar8 = **(uint **)(iVar3 + 0x30);
      }
      iVar6 = _SfList_AllocItem_12(*puVar1,uVar8 * 0xc + 0x14,&local_8);
      if (local_8 == (int *)0x0) {
        _SfList_DeleteList_16(*param_1,0xffffffff,0xffffffff,0);
        return iVar6;
      }
      *local_8 = uVar8 * 0xc + 0x10;
      local_8[1] = 0x766e6566;
      local_8[2] = 0;
      local_8[3] = puVar2[5];
      local_8[4] = uVar8;
      piVar10 = local_8 + 5;
      if (iVar3 == 0) {
        *piVar10 = puVar2[3];
        local_8[6] = 0x3f800000;
        local_8[7] = 1;
        local_8[8] = puVar2[5] + puVar2[3];
        local_8[9] = 0x3f800000;
        local_8[10] = 1;
      }
      else {
        uVar9 = 0;
        if (uVar8 != 0) {
          do {
            iVar6 = *(int *)(*(int *)(*(int *)(iVar3 + 0x30) + 8) + uVar9 * 4);
            iVar7 = ftol();
            *piVar10 = iVar7;
            piVar10[1] = *(int *)(iVar6 + 8);
            iVar6 = FUN_00441f00(*(undefined4 *)(iVar6 + 0xc));
            piVar10[2] = iVar6;
            piVar10 = piVar10 + 3;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar8);
        }
      }
      _SfList_InsertList_16(*puVar1,0xffffffff,0,0xffffffff);
      iVar3 = _SfList_InsertList_16(*param_1,0xffffffff,0,0xffffffff);
      if (iVar3 < 0) {
        return iVar3;
      }
      local_18 = local_18 + 1;
      if (local_4 <= local_18) {
        return iVar3;
      }
    }
  }
  return iVar3;
}


