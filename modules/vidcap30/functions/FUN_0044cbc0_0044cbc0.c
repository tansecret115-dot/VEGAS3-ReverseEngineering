/* Module: vidcap30.exe
   Function: FUN_0044cbc0
   Address: 0044cbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044cbc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  LPCSTR lpString2;
  int iVar2;
  undefined4 uVar3;
  HCURSOR hCursor;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_108;
  HCURSOR local_104;
  CHAR local_100 [127];
  undefined1 local_81;
  undefined1 local_80 [128];
  
  iVar1 = FUN_0044c6c0(param_2);
  lstrcpynA(local_100,*(LPCSTR *)(iVar1 + 0xc),0x80);
  local_81 = 0;
  lpString2 = (LPCSTR)_SfPrepareName_12(param_3,local_80,0x80);
  iVar2 = FUN_004436d0(param_1,lpString2,0);
  if ((lpString2 == (LPCSTR)0x0) || (*lpString2 == '\0')) {
    uVar3 = _SfGetString_8(DAT_005ba2a0,0xc51e);
    SfMsgBox(DAT_005ba4bc,0x10,uVar3);
    return 0x3e3;
  }
  if ((iVar2 != 0) && (iVar2 != iVar1)) {
    uVar3 = _SfGetString_8(DAT_005ba2a0,0xc514);
    SfMsgBox(DAT_005ba4bc,0x10,uVar3,lpString2);
    return 0x3e3;
  }
  iVar2 = FUN_0045b320(lpString2);
  if (iVar2 != 0) {
    hCursor = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
    local_104 = SetCursor(hCursor);
    iVar2 = FUN_00443310(param_1,iVar1,lpString2);
    if (-1 < iVar2) {
      iVar4 = FUN_00443780(iVar1);
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        iVar5 = FUN_004437e0(iVar1,iVar4);
        if (((*(byte *)(iVar5 + 0x38) & 0x10) == 0) &&
           (iVar6 = FUN_0044e390(*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar1 + 0xc),
                                 *(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x24),
                                 *(undefined4 *)(iVar5 + 0x28),*(undefined4 *)(iVar5 + 0x2c)),
           iVar6 < 0)) {
          FUN_0044e530(param_1,local_100,&local_108);
          FUN_00443a80(param_1,iVar5,local_108);
          iVar2 = iVar6;
        }
      }
    }
    iVar1 = lstrcmpA(local_100,&DAT_005bb57c);
    if (iVar1 == 0) {
      lstrcpynA(&DAT_005bb57c,lpString2,0x104);
      DAT_005bb67f = 0;
    }
    iVar1 = lstrcmpA(local_100,&DAT_005bb680);
    if (iVar1 == 0) {
      lstrcpynA(&DAT_005bb680,lpString2,0x104);
      DAT_005bb783 = 0;
    }
    SetCursor(local_104);
    return iVar2;
  }
  pcVar7 = "\\ / : * ? < > | \"";
  uVar3 = _SfGetString_8(DAT_005ba2a0,0xc515);
  SfMsgBox(DAT_005ba4bc,0x10,uVar3,pcVar7);
  return 0x3e3;
}


