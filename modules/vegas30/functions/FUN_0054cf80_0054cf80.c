/* Module: vegas30.exe
   Function: FUN_0054cf80
   Address: 0054cf80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054cf80(char *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  HANDLE hObject;
  HCURSOR pHVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  CHAR local_104 [260];
  
  if (DAT_00647c24 == '\0') {
    uVar2 = _SfGetString_8(DAT_00647204,0x6df3);
    SfMsgBox(DAT_00647624,0x40,uVar2);
    return;
  }
  uVar8 = 0;
  hObject = (HANDLE)FUN_0054cdb0(local_104,0x104);
  if (hObject != (HANDLE)0xffffffff) {
    pHVar3 = (HCURSOR)_SfLoadCursor_8(0,0x7f02);
    pHVar3 = SetCursor(pHVar3);
    iVar4 = 0;
    if ((*param_1 != '\0') && (iVar4 = *(int *)(param_1 + 8), (*(byte *)(iVar4 + 0x18) & 2) != 2)) {
      bVar1 = *(byte *)(*(int *)(iVar4 + 0x10) + 0x18);
      iVar7 = *(int *)(iVar4 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar7 + 0x10) + 0x18);
        iVar4 = iVar7;
        iVar7 = *(int *)(iVar7 + 0x10);
      }
    }
    while( true ) {
      if (*param_1 == '\0') {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(param_1 + 0xc);
      }
      if (iVar4 == iVar7) break;
      iVar7 = *(int *)(iVar4 + 4);
      iVar5 = FUN_005f03a0(iVar7 + 0x170);
      if ((iVar5 == 0) && ((*(byte *)(iVar7 + 0x134) & 0x20) != 0)) {
        uVar6 = FUN_0054ccb0(hObject,iVar7);
        uVar8 = uVar8 | uVar6;
      }
      FUN_00436e20();
    }
    CloseHandle(hObject);
    if ((uVar8 == 0) || (iVar4 = FUN_0054cbc0(DAT_00647624,local_104), iVar4 == 0)) {
      DeleteFileA(local_104);
    }
    SetCursor(pHVar3);
  }
  return;
}


