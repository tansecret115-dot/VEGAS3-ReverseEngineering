/* Module: vegas30k.dll
   Function: FUN_01021280
   Address: 01021280
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_01021280(int param_1,int param_2)

{
  LPCSTR lpString;
  uchar uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  uchar *lpsz;
  int iVar8;
  char cVar9;
  char cVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined1 *puVar14;
  int local_48c;
  undefined4 local_484;
  int local_480;
  int local_47c;
  undefined4 *local_478;
  uint local_474;
  char local_470 [4];
  char local_46c [4];
  char local_468 [4];
  char local_464 [2];
  char local_462;
  undefined4 local_461 [127];
  uchar local_264;
  char local_263;
  int local_160;
  int local_15c;
  
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  local_48c = 0;
  if (*(int *)(param_2 + 8) == 0) {
    uVar5 = 0;
    iVar8 = local_48c;
  }
  else {
    iVar8 = *(int *)(*(int *)(*(int *)(param_2 + 8) + 8) + *(int *)(param_2 + 0xc) * 4);
    uVar5 = **(uint **)(iVar8 + 0xc);
    if (0xe < uVar5) goto LAB_010219b7;
  }
  switch(uVar5) {
  default:
    puVar4 = calloc(1,0x18);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 1;
      local_480 = *(int *)(param_1 + 4);
      local_484 = 0x1f0000;
      local_474 = 0x46;
      puVar11 = (undefined4 *)(param_1 + 0x24);
      pcVar7 = local_470;
      for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pcVar7 = *puVar11;
        puVar11 = puVar11 + 1;
        pcVar7 = pcVar7 + 4;
      }
      *(undefined2 *)pcVar7 = *(undefined2 *)puVar11;
      local_47c = local_480;
      local_478 = puVar4;
      _SfList_AllocAndInsertItem_20(uVar2,&local_484,0x5d,0,0);
    }
    break;
  case 1:
    iVar8 = FUN_01020330(uVar2,&DAT_012093c4);
    if (iVar8 != -1) {
      _SfList_Sort_12(uVar2,0,&LAB_01021a10);
    }
    puVar4 = calloc(1,0x18);
    bVar13 = puVar4 != (undefined4 *)0x0;
    if (bVar13) {
      *puVar4 = 2;
      puVar14 = &DAT_012097d4;
      local_480 = *(int *)(param_1 + 4) + 1;
      local_484 = 0x1f0000;
      local_474 = local_474 & 0xffff;
      local_47c = local_480;
      local_478 = puVar4;
      uVar6 = _SfGetString2_8(DAT_0120e5c8,0x109e);
      iVar8 = FUN_0112e460("{20D04FE0-3AEA-1069-A2D8-08002B30309D}",uVar6,puVar14);
      DAT_012091b8 = iVar8 + 1;
      iVar8 = wsprintfA(local_470,"%s\t\t%s",&DAT_012097d4,param_1 + 0x13c);
      uVar3 = (short)iVar8 + 1;
      local_474 = CONCAT22(local_474._2_2_,uVar3);
      _SfList_AllocAndInsertItem_20(uVar2,&local_484,uVar3 + 0x17,0,0);
    }
    cVar9 = bVar13;
    if ((DAT_012094c8 != '\0') && (puVar4 = calloc(1,0x18), puVar4 != (undefined4 *)0x0)) {
      *puVar4 = 3;
      local_474 = local_474 & 0xffff;
      local_484 = 0x1d0000;
      local_478 = puVar4;
      iVar8 = wsprintfA(local_470,"%s\t\t%s",(LPCSTR)(param_1 + 0x6a),param_1 + 0x13c);
      local_474 = CONCAT22(local_474._2_2_,(short)iVar8 + 1);
      iVar8 = lstrlenA((LPCSTR)(param_1 + 0x6a));
      DAT_012091b0 = iVar8 + 1;
      FUN_0101fb50(&DAT_012094c8,&local_160,0x4003);
      local_480 = local_15c;
      cVar9 = bVar13 + '\x01';
      local_47c = local_160;
      _SfList_AllocAndInsertItem_20(uVar2,&local_484,(local_474 & 0xffff) + 0x17,bVar13,0);
    }
    uVar5 = GetSystemMetrics(0x3f);
    cVar10 = cVar9;
    if (((uVar5 & 1) != 0) && (puVar4 = calloc(1,0x18), puVar4 != (undefined4 *)0x0)) {
      *puVar4 = 4;
      puVar14 = &DAT_012096d0;
      local_480 = *(int *)(param_1 + 4) + 2;
      local_484 = 0x1f0000;
      local_474 = local_474 & 0xffff;
      local_47c = local_480;
      local_478 = puVar4;
      uVar6 = _SfGetString2_8(DAT_0120e5c8,0x109f);
      iVar8 = FUN_0112e460("{208D2C60-3AEA-1069-A2D7-08002B30309D}",uVar6,puVar14);
      DAT_012091b4 = iVar8 + 1;
      iVar8 = wsprintfA(local_470,"%s\t\t%s",&DAT_012096d0,param_1 + 0x13c);
      uVar3 = (short)iVar8 + 1;
      local_474 = CONCAT22(local_474._2_2_,uVar3);
      cVar10 = cVar9 + '\x01';
      _SfList_AllocAndInsertItem_20(uVar2,&local_484,uVar3 + 0x17,cVar9,0);
    }
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      local_484 = 0x1d0000;
      if (**(int **)(param_1 + 0xc) != 0) {
        local_484 = 0x1f0000;
      }
      puVar4 = calloc(1,0x18);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 5;
        local_470[0] = s__My_Favorites__0120418c[0];
        local_470[1] = s__My_Favorites__0120418c[1];
        local_470[2] = s__My_Favorites__0120418c[2];
        local_470[3] = s__My_Favorites__0120418c[3];
        local_480 = *(int *)(param_1 + 4) + 8;
        local_47c = *(int *)(param_1 + 4) + 9;
        local_46c[0] = s__My_Favorites__0120418c[4];
        local_46c[1] = s__My_Favorites__0120418c[5];
        local_46c[2] = s__My_Favorites__0120418c[6];
        local_46c[3] = s__My_Favorites__0120418c[7];
        local_468[0] = s__My_Favorites__0120418c[8];
        local_468[1] = s__My_Favorites__0120418c[9];
        local_468[2] = s__My_Favorites__0120418c[10];
        local_468[3] = s__My_Favorites__0120418c[0xb];
        local_474 = 0x46000f;
        local_464[0] = s__My_Favorites__0120418c[0xc];
        local_464[1] = s__My_Favorites__0120418c[0xd];
        local_462 = s__My_Favorites__0120418c[0xe];
        puVar11 = (undefined4 *)(param_1 + 0xb0);
        puVar12 = local_461;
        for (iVar8 = 0x11; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        *(undefined2 *)puVar12 = *(undefined2 *)puVar11;
        local_478 = puVar4;
        _SfList_AllocAndInsertItem_20(uVar2,&local_484,0x6c,cVar10,0);
      }
    }
    if ((*(char *)(param_1 + 0x1c8) != '\0') &&
       (puVar4 = calloc(1,0x18), puVar4 != (undefined4 *)0x0)) {
      *puVar4 = 0xe;
      local_474 = local_474 & 0xffff;
      local_484 = 0x1f0000;
      local_478 = puVar4;
      iVar8 = wsprintfA(local_470,"%s\t\t%s",(LPCSTR)(param_1 + 0x182),param_1 + 0x13c);
      local_474 = CONCAT22(local_474._2_2_,(short)iVar8 + 1);
      iVar8 = lstrlenA((LPCSTR)(param_1 + 0x182));
      DAT_012091b0 = iVar8 + 1;
      FUN_0101fb50(param_1 + 0x1c8,&local_160,0x4003);
      local_480 = *(int *)(param_1 + 4) + 8;
      local_47c = *(int *)(param_1 + 4) + 9;
      _SfList_AllocAndInsertItem_20(uVar2,&local_484,(local_474 & 0xffff) + 0x17,cVar10,0);
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 2:
    FUN_0101fc20(uVar2);
    *(undefined4 *)(param_2 + 0xc) = 1;
    break;
  case 3:
    pcVar7 = &DAT_012094c8;
    goto LAB_01021713;
  case 4:
    wsprintfA((LPSTR)&local_264,"%s\\%s",&DAT_012092c0,&DAT_012091bc);
    FUN_0112d660(uVar2,&local_264);
    _SfList_Sort_12(uVar2,0,&LAB_01021a10);
    puVar4 = calloc(1,0x18);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 9;
      lpString = (LPCSTR)(param_1 + 0xf6);
      local_480 = *(int *)(param_1 + 4) + 3;
      local_484 = 0x1f0000;
      local_474 = local_474 & 0xffff;
      local_47c = local_480;
      local_478 = puVar4;
      iVar8 = wsprintfA(local_470,"%s\t%s",lpString,lpString);
      local_474 = CONCAT22(local_474._2_2_,(short)iVar8 + 1);
      iVar8 = lstrlenA(lpString);
      DAT_012091ac = iVar8 + 1;
      _SfList_AllocAndInsertItem_20(uVar2,&local_484,(local_474 & 0xffff) + 0x17,0,0);
      *(undefined4 *)(param_2 + 0xc) = 2;
    }
    break;
  case 5:
    FUN_010201a0(uVar2);
    *(undefined4 *)(param_2 + 0xc) = 0;
    break;
  case 6:
    uVar3 = 0;
    if (*(short *)(iVar8 + 0x12) != 0) {
      uVar3 = *(ushort *)(iVar8 + 0x10);
    }
    iVar8 = FUN_01020e10(uVar3 + 0x14 + iVar8);
    _mbscpy(&local_264,(uchar *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 8) + iVar8 * 4) + 5));
    lpsz = &local_264;
    uVar1 = local_264;
    while ((uVar1 != '\0' && (uVar1 != '*'))) {
      lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
      uVar1 = *lpsz;
    }
    *lpsz = '\0';
    if ((local_263 == ':') || (local_264 == '\\')) {
      iVar8 = FUN_01020330(uVar2,&local_264);
      if (iVar8 == -1) {
        local_48c = 3;
        break;
      }
    }
    else {
      FUN_0112db40(uVar2,&local_264);
    }
    goto LAB_010218f1;
  case 7:
  case 8:
  case 0xd:
    FUN_01020e80(uVar5,*(undefined4 *)(param_2 + 0x14),&local_264);
    if ((local_263 == ':') || (local_264 == '\\')) {
      pcVar7 = (char *)&local_264;
    }
    else {
      iVar8 = FUN_01021230(&local_264,2);
      pcVar7 = (char *)(iVar8 + -2);
      *pcVar7 = '\\';
    }
    goto LAB_01021713;
  case 9:
    FUN_0112d160(uVar2);
    goto LAB_010219a4;
  case 10:
    FUN_01020e80(10,*(undefined4 *)(param_2 + 0x14),&local_264);
    FUN_0112d350(uVar2,&local_264);
    goto LAB_010219a4;
  case 0xb:
    FUN_01020e80(0xb,*(undefined4 *)(param_2 + 0x14),&local_264);
    FUN_0112d660(uVar2,&local_264);
    goto LAB_010219a4;
  case 0xc:
    FUN_01020e80(0xc,*(undefined4 *)(param_2 + 0x14),&local_264);
    FUN_0112db40(uVar2,&local_264);
LAB_010219a4:
    _SfList_Sort_12(uVar2,0,&LAB_01021a10);
    *(undefined4 *)(param_2 + 0xc) = 2;
    break;
  case 0xe:
    pcVar7 = (char *)(param_1 + 0x1c8);
LAB_01021713:
    iVar8 = FUN_01020330(uVar2,pcVar7);
    if (iVar8 == -1) {
      local_48c = 3;
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    else {
LAB_010218f1:
      _SfList_Sort_12(uVar2,0,&LAB_01021a10);
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
  }
LAB_010219b7:
  FUN_0101fae0();
  return local_48c;
}


