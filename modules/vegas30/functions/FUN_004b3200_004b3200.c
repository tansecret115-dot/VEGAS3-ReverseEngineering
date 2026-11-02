/* Module: vegas30.exe
   Function: FUN_004b3200
   Address: 004b3200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004b3200(HWND param_1,int *param_2)

{
  int iVar1;
  HWND pHVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  UINT UVar8;
  WPARAM WVar9;
  undefined1 *puVar10;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  uVar4 = (uint)(*(char *)(*param_2 + 8000) != '\0');
  pHVar2 = GetDlgItem(param_1,0x461);
  EnableWindow(pHVar2,uVar4);
  uVar4 = (uint)(*(char *)(*param_2 + 8000) != '\0');
  pHVar2 = GetDlgItem(param_1,0x488);
  EnableWindow(pHVar2,uVar4);
  uVar4 = (uint)(*(char *)(*param_2 + 8000) != '\0');
  pHVar2 = GetDlgItem(param_1,0x46f);
  EnableWindow(pHVar2,uVar4);
  if (*(char *)(*param_2 + 8000) != '\0') {
    local_38 = *(undefined4 *)(*param_2 + 0x2044);
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_2c = 5;
    uVar3 = _SFSMPTE_SMPTEToFrameCount_4(&local_38);
    local_2c = 1;
    uVar4 = _SFSMPTE_SMPTEToFrameCount_4(&local_38);
    WVar9 = 0;
    UVar8 = 0x60e;
    uVar5 = uVar4;
    pHVar2 = GetDlgItem(param_1,0x46f);
    SendMessageA(pHVar2,UVar8,WVar9,uVar5);
    WVar9 = 0;
    UVar8 = 0x60f;
    uVar5 = uVar3;
    pHVar2 = GetDlgItem(param_1,0x46f);
    SendMessageA(pHVar2,UVar8,WVar9,uVar5);
    iVar1 = *param_2;
    uVar5 = FUN_004b2d00(*(undefined4 *)(iVar1 + 0x2050),*(undefined4 *)(iVar1 + 0x2054),
                         *(undefined4 *)(iVar1 + 0x2044));
    if ((uVar5 < uVar4) || (uVar4 = uVar3, uVar3 < uVar5)) {
      uVar5 = uVar4;
    }
    WVar9 = 0;
    UVar8 = 0x610;
    uVar4 = uVar5;
    pHVar2 = GetDlgItem(param_1,0x46f);
    SendMessageA(pHVar2,UVar8,WVar9,uVar4);
    uVar7 = FUN_004b2cd0(uVar5,*(undefined4 *)(*param_2 + 0x2044));
    *(undefined8 *)(*param_2 + 0x2050) = uVar7;
    uVar6 = __alldiv(*(undefined4 *)(*param_2 + 0x2050),*(undefined4 *)(*param_2 + 0x2054),10000,0);
    SfPrintF(local_20,&DAT_0061360c,uVar6);
    puVar10 = local_20;
    pHVar2 = GetDlgItem(param_1,0x461);
    SfSetWindowText(pHVar2,puVar10);
  }
  return;
}


