/* Module: vegas30.exe
   Function: FUN_0052fb40
   Address: 0052fb40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052fb40(HWND param_1,int param_2)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  uint uVar4;
  UINT UVar5;
  WPARAM WVar6;
  int iVar7;
  LPARAM LVar8;
  CHAR *lpString;
  undefined1 local_118 [20];
  CHAR local_104 [260];
  
  SetWindowLongA(param_1,8,*(LONG *)(param_2 + 0x40));
  iVar1 = *(int *)(param_2 + 0x40);
  FUN_0052ecd0(param_1,iVar1,0xffffffff);
  FUN_0052f3b0(param_1,iVar1);
  FUN_0052f450(param_1,iVar1);
  FUN_0052f4d0(param_1,iVar1);
  FUN_0052f5a0(param_1,iVar1);
  FUN_0052f7c0(param_1,iVar1);
  FUN_0052fa10(param_1,iVar1);
  iVar7 = 0x470;
  pHVar2 = GetParent(param_1);
  pHVar2 = GetDlgItem(pHVar2,iVar7);
  FUN_004320f0(local_118,pHVar2);
  LVar8 = 0;
  WVar6 = 0;
  UVar5 = 0x147;
  iVar7 = 0x480;
  pHVar2 = GetParent(param_1);
  pHVar2 = GetDlgItem(pHVar2,iVar7);
  WVar6 = SendMessageA(pHVar2,UVar5,WVar6,LVar8);
  if (WVar6 != 0xffffffff) {
    iVar7 = 0x480;
    pHVar2 = GetParent(param_1);
    pHVar2 = GetDlgItem(pHVar2,iVar7);
    local_104[0] = '\0';
    LVar3 = SendMessageA(pHVar2,0x148,WVar6,(LPARAM)local_104);
    if (LVar3 != -1) {
      iVar7 = lstrlenA(local_104);
      if (iVar7 != 0) {
        FUN_004321c0(local_104,local_118,0x104);
      }
      lpString = local_104;
      iVar7 = 0x480;
      pHVar2 = GetParent(param_1);
      SetDlgItemTextA(pHVar2,iVar7,lpString);
      LVar8 = 0;
      uVar4 = (uint)(DAT_00649e20 != 0);
      UVar5 = 0xf1;
      *(int *)(iVar1 + 0xb44) = DAT_00649e20;
      pHVar2 = GetDlgItem(param_1,0x47b);
      SendMessageA(pHVar2,UVar5,uVar4,LVar8);
      uVar4 = (uint)(DAT_0064a514 != 0);
      LVar8 = 0;
      UVar5 = 0xf1;
      *(int *)(iVar1 + 0xb48) = DAT_0064a514;
      pHVar2 = GetDlgItem(param_1,0x471);
      SendMessageA(pHVar2,UVar5,uVar4,LVar8);
    }
  }
  return;
}


