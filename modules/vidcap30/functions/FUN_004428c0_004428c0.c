/* Module: vidcap30.exe
   Function: FUN_004428c0
   Address: 004428c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004428c0(void)

{
  long lVar1;
  int iVar2;
  HCURSOR pHVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  LPCSTR lpString;
  ushort unaff_retaddr;
  int in_stack_00008314;
  undefined4 uVar8;
  
  FUN_00579db0();
  lVar1 = Project_FileOpenDlg(*(HWND__ **)(in_stack_00008314 + 8),&stack0x00000110,
                              (ushort *)&stack0x00000000,2,0xab,"avi",0xc591);
  if (lVar1 != 0) {
    return lVar1;
  }
  FUN_00450030(&stack0x00000110,unaff_retaddr,&stack0x0000000c,0x104);
  _SfAddSlashToPathName_8(&stack0x0000000c,0x104);
  lpString = &stack0x00000110 + unaff_retaddr;
  iVar2 = lstrlenA(&stack0x0000000c);
  pHVar3 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
  pHVar3 = SetCursor(pHVar3);
  iVar5 = 0;
  if (DAT_005bba30 == 4) {
    FUN_00441a20();
  }
  do {
    if (iVar5 == 1) goto LAB_004429c6;
    iVar4 = lstrlenA(lpString);
    if (iVar4 == 0) break;
    lstrcpynA(&stack0x0000000c + iVar2,lpString,-iVar2 + 0x104);
    (&stack0x0000000c + iVar2)[-iVar2 + 0x103] = '\0';
    iVar5 = FUN_00441600(&stack0x0000000c,0);
    lpString = lpString + iVar4 + 1;
  } while (-1 < iVar5);
  if (iVar5 == 1) {
LAB_004429c6:
    if (DAT_005bb800 == 0) {
      uVar8 = 0x30;
      uVar6 = _SfGetString_8(DAT_005ba2a0,0xc58f);
      uVar7 = _SfGetString_8(DAT_005ba2a0,0xc58e);
      _SfMessageBox_16(*(undefined4 *)(in_stack_00008314 + 8),uVar7,uVar6,uVar8);
    }
    else {
      FUN_00464c20(DAT_005ba4bc,7);
    }
  }
  SetCursor(pHVar3);
  return iVar5;
}


