/* Module: vegas30.exe
   Function: FUN_00422550
   Address: 00422550
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00422550(void)

{
  ISFMixerIn **ppIVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  WPARAM WVar6;
  int iVar7;
  CHAR *lpString2;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 uVar11;
  CHAR aCStack_104 [260];
  
  for (iVar4 = Mixer_NumBusTypePorts(4); iVar4 != 0; iVar4 = iVar4 + -1) {
    iVar5 = FUN_0040c050(200);
    if (iVar5 != 0) {
      piVar2 = *(int **)(iVar5 + 0x354);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
        *(ISFMixerIn **)(iVar5 + 0x354) = (ISFMixerIn *)0x0;
        Mixer_GetDevice((ISFMixerIn **)(iVar5 + 0x354),4,*(ulong *)(iVar5 + 0x88));
      }
      FUN_00418c30(iVar5);
      FUN_00419310(iVar5);
      InvalidateRect(*(HWND *)(iVar5 + 0x1b4),(RECT *)0x0,1);
      WVar6 = *(int *)(iVar5 + 0x1b8) - 1;
      if ((int)*(WPARAM *)(iVar5 + 0x1bc) < (int)WVar6) {
        WVar6 = *(WPARAM *)(iVar5 + 0x1bc);
      }
      SendMessageA(*(HWND *)(iVar5 + 0x1b4),0x602,WVar6,0);
      iVar7 = *(int *)(iVar5 + 0x1b8) + -1;
      if (*(int *)(iVar5 + 0x1bc) < iVar7) {
        iVar7 = *(int *)(iVar5 + 0x1bc);
      }
      FUN_0041a890(iVar5,iVar7);
    }
  }
  FUN_00422330();
  iVar4 = FUN_0040c050(200);
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(iVar4 + 0x248) != 0) {
    return;
  }
  bVar3 = false;
  if ((*(int *)(iVar4 + 0xa0) != 0) &&
     (iVar5 = FUN_00573710(*(int *)(iVar4 + 0xa0)), *(int *)(iVar4 + 0x88) != iVar5)) {
    *(int *)(iVar4 + 0x88) = iVar5;
    bVar3 = true;
  }
  piVar2 = *(int **)(iVar4 + 0x354);
  ppIVar1 = (ISFMixerIn **)(iVar4 + 0x354);
  if (piVar2 != (int *)0x0) {
    if (*(int *)(iVar4 + 0x8c) == 3) {
      (**(code **)(*piVar2 + 8))(piVar2);
      uVar10 = *(ulong *)(iVar4 + 0x88);
      *ppIVar1 = (ISFMixerIn *)0x0;
      uVar9 = 4;
    }
    else {
      if (*(int *)(iVar4 + 0x8c) != 4) goto LAB_004226ab;
      (**(code **)(*piVar2 + 8))(piVar2);
      uVar10 = *(ulong *)(iVar4 + 0x88);
      *ppIVar1 = (ISFMixerIn *)0x0;
      uVar9 = 1;
    }
    Mixer_GetDevice(ppIVar1,uVar9,uVar10);
  }
LAB_004226ab:
  if ((*(int *)(iVar4 + 0x8c) == 3) && (bVar3)) {
    if (*(int *)(iVar4 + 0xa0) == 0) goto LAB_0042273f;
    lpString2 = (CHAR *)FUN_00573700(*(int *)(iVar4 + 0xa0));
  }
  else {
    if (*(int *)(iVar4 + 0x8c) != 2) goto LAB_0042273f;
    uVar11 = *(undefined4 *)(*(int *)(iVar4 + 0x94) + 0x14);
    uVar8 = _SfGetString_8(DAT_00647204,0x50d1);
    SfPrintF(aCStack_104,uVar8,uVar11);
    iVar5 = lstrcmpA(aCStack_104,(LPCSTR)(iVar4 + 0xa8));
    if (iVar5 == 0) goto LAB_0042273f;
    lpString2 = aCStack_104;
  }
  lstrcpynA((LPSTR)(iVar4 + 0xa8),lpString2,0x104);
  *(undefined1 *)(iVar4 + 0x1ab) = 0;
  FUN_0041eb90(iVar4,*(undefined4 *)(iVar4 + 8),(LPSTR)(iVar4 + 0xa8));
LAB_0042273f:
  FUN_00418c30(iVar4);
  FUN_00419310(iVar4);
  WVar6 = *(int *)(iVar4 + 0x1b8) - 1;
  if ((int)*(WPARAM *)(iVar4 + 0x1bc) < (int)WVar6) {
    WVar6 = *(WPARAM *)(iVar4 + 0x1bc);
  }
  SendMessageA(*(HWND *)(iVar4 + 0x1b4),0x602,WVar6,0);
  iVar5 = *(int *)(iVar4 + 0x1b8) + -1;
  if (*(int *)(iVar4 + 0x1bc) < iVar5) {
    iVar5 = *(int *)(iVar4 + 0x1bc);
  }
  FUN_0041a890(iVar4,iVar5);
  InvalidateRect(*(HWND *)(iVar4 + 0x1b4),(RECT *)0x0,1);
  InvalidateRect(*(HWND *)(iVar4 + 0x1c8),(RECT *)0x0,1);
  return;
}


