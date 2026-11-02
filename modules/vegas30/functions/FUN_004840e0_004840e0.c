/* Module: vegas30.exe
   Function: FUN_004840e0
   Address: 004840e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_004840e0(HWND param_1,undefined4 param_2,undefined4 param_3,uchar *param_4)

{
  char cVar1;
  HWND pHVar2;
  LRESULT LVar3;
  uchar *puVar4;
  uint uVar5;
  LPCSTR lpString2;
  undefined1 *unaff_EBP;
  int *unaff_EDI;
  longlong lVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *piVar9;
  UINT UVar10;
  int iVar11;
  undefined1 *puVar12;
  WPARAM WVar13;
  LPARAM LVar14;
  uchar auStack_a2c [4];
  LRESULT local_a28;
  uchar auStack_928 [232];
  WCHAR aWStack_840 [8];
  WCHAR aWStack_830 [234];
  uchar auStack_65c [50];
  undefined2 uStack_62a;
  uchar auStack_518 [724];
  WCHAR aWStack_244 [10];
  undefined1 auStack_230 [560];
  
  FUN_00483810();
  LVar14 = 0;
  WVar13 = 0;
  UVar10 = 0x147;
  pHVar2 = GetDlgItem(param_1,0x435);
  WVar13 = SendMessageA(pHVar2,UVar10,WVar13,LVar14);
  LVar14 = 0;
  UVar10 = 0x150;
  pHVar2 = GetDlgItem(param_1,0x435);
  local_a28 = SendMessageA(pHVar2,UVar10,WVar13,LVar14);
  LVar14 = 0;
  WVar13 = 0;
  UVar10 = 0x147;
  pHVar2 = GetDlgItem(param_1,0x63f);
  WVar13 = SendMessageA(pHVar2,UVar10,WVar13,LVar14);
  if (WVar13 == 0xffffffff) {
    param_4[0xa24] = 0xff;
    param_4[0xa25] = 0xff;
    param_4[0xa26] = 0xff;
    param_4[0xa27] = 0xff;
  }
  else {
    LVar14 = 0;
    UVar10 = 0x150;
    pHVar2 = GetDlgItem(param_1,0x63f);
    LVar3 = SendMessageA(pHVar2,UVar10,WVar13,LVar14);
    *(LRESULT *)(param_4 + 0xa24) = LVar3;
  }
  if (*(int **)(param_4 + 0x110) != (int *)0x0) {
    (**(code **)(**(int **)(param_4 + 0x110) + 0x20))();
    puVar4 = auStack_a2c;
    iVar11 = 0x104;
    *(undefined4 *)(param_4 + 0x10c) = *(undefined4 *)(param_4 + 0x108);
    pHVar2 = GetDlgItem(param_1,0x648);
    GetWindowTextA(pHVar2,(LPSTR)puVar4,iVar11);
    puVar4 = (uchar *)_SfGetFileNamePtrA_4();
    _mbscpy(auStack_518,puVar4);
    _SfGetPathNameFromFilePath_12();
    cVar1 = FUN_00482b90();
    if (cVar1 != '\0') {
      _mbscpy(auStack_a2c,auStack_928);
      _mbscat(auStack_a2c,auStack_518);
      iVar11 = lstrcmpiA((LPCSTR)param_4,(LPCSTR)auStack_a2c);
      if ((iVar11 != 0) && (iVar11 = _SfCreateDirectory_8(), iVar11 != 0)) {
        param_1[0x87].unused = 1;
        _mbscpy(param_4,auStack_a2c);
      }
    }
    iVar11 = _SfDoesFileExist_4();
    if (iVar11 != 0) {
      _SfGetString_8();
      iVar11 = SfMsgBox();
      if (iVar11 != 6) {
        return (undefined1 *)0x80004004;
      }
    }
    _SfGetByteSizeText_12();
    iVar11 = _SfGetRootPathFromFilePath_12();
    if (1 < iVar11) {
      uVar5 = _SfGetDiskFreeSpace_8();
      lVar6 = __alldiv();
      if ((-1 < lVar6) && ((0xffffffff < lVar6 || (uVar5 < (uint)lVar6)))) {
        _SfGetString_8();
        iVar11 = SfMsgBox();
        if (iVar11 != 1) {
          return (undefined1 *)0x80004004;
        }
      }
    }
    iVar11 = param_1[0x8b].unused;
    if ((iVar11 == 2) || (iVar11 == 3)) {
      unaff_EBP = (undefined1 *)FUN_00484620();
      if ((int)unaff_EBP < 0) {
        return unaff_EBP;
      }
    }
    else if (((iVar11 == 4) && (-1 < param_1[0x8d].unused)) &&
            ((0 < param_1[0x8d].unused || (0x100000 < (uint)param_1[0x8c].unused)))) {
      _SfGetString_8();
      iVar11 = SfMsgBox();
      if (iVar11 != 6) {
        return (undefined1 *)0x80004004;
      }
    }
    FUN_005ba4b0();
    FUN_005ba610();
    puVar12 = &stack0xfffff5c8;
    piVar9 = (int *)&DAT_0060f0e8;
    iVar11 = (**(code **)**(undefined4 **)(param_4 + 0x110))();
    if (iVar11 == 0) {
      MultiByteToWideChar(0,1,(LPCSTR)param_4,-1,aWStack_830,0x104);
      uStack_62a = 0;
      InterlockedIncrement(&DAT_0065e144);
      unaff_EBP = (undefined1 *)0x104;
      iVar11 = (**(code **)(*unaff_EDI + 0xc))();
      InterlockedDecrement(&DAT_0065e144);
      if (-1 < iVar11) {
        if ((&stack0x00000000 == (undefined1 *)0x840) || (aWStack_840[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_840,-1,(LPSTR)param_4,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (param_4 != (uchar *)0x0) {
          *param_4 = '\0';
        }
        param_4[0x103] = '\0';
      }
      (**(code **)(*piVar9 + 8))();
    }
    else {
      piVar7 = *(int **)(param_4 + 0x110);
      puVar8 = &stack0xfffff5c0;
      iVar11 = (**(code **)*piVar7)();
      if (iVar11 == 0) {
        InterlockedIncrement(&DAT_0065e144);
        (**(code **)(*piVar9 + 0xc))(piVar9,DAT_00647624,param_4,0x104);
        InterlockedDecrement(&DAT_0065e144);
        unaff_EBP = puVar8;
        (**(code **)(*piVar7 + 8))(piVar7);
      }
    }
    DAT_00648cc4 = puVar12;
    (**(code **)(*DAT_0064b510 + 0x80))
              (DAT_0064b510,DAT_00648cc4,*(undefined4 *)(param_4 + 0xa24),auStack_230,0x104);
    if ((&stack0x00000000 == (undefined1 *)0x244) || (aWStack_244[0] != L'\0')) {
      WideCharToMultiByte(0,0,aWStack_244,-1,&DAT_00648cc8,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    }
    else {
      DAT_00648cc8 = 0;
    }
    DAT_00648dcb = 0;
    (**(code **)(*DAT_0064b510 + 0x94))(DAT_0064b510,DAT_00648cc4,&DAT_00648cc8);
    _mbscpy(auStack_65c,param_4);
    lpString2 = (LPCSTR)_SfGetFileNameExtensionPtrA_4(auStack_65c);
    lstrcpynA(&DAT_006489ac,lpString2,6);
    DAT_006489b1 = 0;
    _SfGetPathNameFromFilePath_12(auStack_65c,&DAT_006488a8,0x104);
    return unaff_EBP;
  }
  return (undefined1 *)0x80004004;
}


