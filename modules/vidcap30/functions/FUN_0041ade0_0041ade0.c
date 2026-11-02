/* Module: vidcap30.exe
   Function: FUN_0041ade0
   Address: 0041ade0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041ade0(HWND param_1,int *param_2)

{
  UINT UVar1;
  int iVar2;
  HWND pHVar3;
  LRESULT LVar4;
  uint uVar5;
  float10 fVar6;
  undefined8 uVar7;
  CHAR local_30 [44];
  
  UVar1 = IsDlgButtonChecked(param_1,0x4b3);
  *(UINT *)(*param_2 + 0xf00) = UVar1;
  local_30[0] = '\0';
  UVar1 = IsDlgButtonChecked(param_1,0x491);
  *(UINT *)(*param_2 + 0xf74) = UVar1;
  UVar1 = IsDlgButtonChecked(param_1,0x493);
  *(UINT *)(*param_2 + 0xf7c) = UVar1;
  GetDlgItemTextA(param_1,0x4cc,local_30,0x28);
  iVar2 = _SfTextToLongToken_8(local_30,0);
  iVar2 = iVar2 * 1000;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (10000 < iVar2) {
    iVar2 = 10000;
  }
  *(int *)(*param_2 + 0xf78) = iVar2;
  pHVar3 = GetDlgItem(param_1,0x488);
  LVar4 = SendMessageA(pHVar3,0x147,0,0);
  if (LVar4 == -1) {
    local_30[0] = '\0';
    GetWindowTextA(pHVar3,local_30,0x28);
    fVar6 = (float10)_SfTextToDoubleTokenEx_32
                               (local_30,*(undefined4 *)(*param_2 + 0xf08),
                                *(undefined4 *)(*param_2 + 0xf0c),0x9999999a,0x3fa99999,0,0x408f4000
                                ,0);
    *(double *)(*param_2 + 0xf08) = (double)fVar6;
  }
  pHVar3 = GetDlgItem(param_1,0x4b4);
  LVar4 = SendMessageA(pHVar3,0x147,0,0);
  if (LVar4 == -1) {
    *(undefined4 *)(*param_2 + 0xf18) = DAT_00588f2c;
  }
  UVar1 = IsDlgButtonChecked(param_1,0x4fa);
  *(UINT *)(*param_2 + 0xfb8) = UVar1;
  GetDlgItemTextA(param_1,0x495,local_30,0x28);
  iVar2 = _SfTextToDWordToken_8(local_30,0);
  uVar5 = iVar2 * 1000;
  if (60000 < uVar5) {
    uVar5 = 60000;
  }
  *(uint *)(*param_2 + 0xfbc) = uVar5;
  local_30[0] = '\0';
  UVar1 = IsDlgButtonChecked(param_1,0x551);
  *(UINT *)(*param_2 + 0x12c0) = UVar1;
  GetDlgItemTextA(param_1,0x4d0,local_30,0x28);
  fVar6 = (float10)FUN_0042ed90(DAT_005bb838);
  FUN_0045ae30(local_30,(double)fVar6);
  uVar7 = ftol();
  *(undefined8 *)(*param_2 + 0x12c8) = uVar7;
  return;
}


