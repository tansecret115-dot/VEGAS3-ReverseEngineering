/* Module: wmfplug2.dll
   Function: FUN_00412b10
   Address: 00412b10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00412b10(void *this,HWND param_1)

{
  int iVar1;
  HWND pHVar2;
  WPARAM WVar3;
  LRESULT LVar4;
  LRESULT LVar5;
  int *piVar6;
  BOOL BVar7;
  uint uCheck;
  uint uVar8;
  WPARAM local_10c;
  WPARAM local_108;
  uchar local_100 [256];
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  pHVar2 = GetDlgItem(param_1,0x3ec);
  if (pHVar2 != (HWND)0x0) {
    FUN_004147a0(pHVar2);
    FUN_00411e60(pHVar2,*(int *)(iVar1 + 0x4c));
    WVar3 = SendMessageA(pHVar2,0x147,0,0);
    if (WVar3 != 0xffffffff) {
      LVar4 = SendMessageA(pHVar2,0x150,WVar3,0);
      *(LRESULT *)(iVar1 + 0x4c) = LVar4;
    }
  }
  SetDlgItemInt(param_1,0x3ee,*(UINT *)(iVar1 + 100),0);
  SetDlgItemInt(param_1,0x3ef,*(UINT *)(iVar1 + 0x6c),0);
  pHVar2 = GetDlgItem(param_1,0x3f5);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x14b,0,0);
    FUN_0041fa90(DAT_00489d58,0x78,(LPSTR)local_100,0xff);
    WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
    SendMessageA(pHVar2,0x151,WVar3,0);
    FUN_0041fa90(DAT_00489d58,0x7a,(LPSTR)local_100,0xff);
    WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
    SendMessageA(pHVar2,0x151,WVar3,2);
    FUN_0041fa90(DAT_00489d58,0x7b,(LPSTR)local_100,0xff);
    WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
    SendMessageA(pHVar2,0x151,WVar3,3);
    FUN_0041fa90(DAT_00489d58,0x7c,(LPSTR)local_100,0xff);
    WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
    SendMessageA(pHVar2,0x151,WVar3,4);
    FUN_0041fa90(DAT_00489d58,0x7d,(LPSTR)local_100,0xff);
    WVar3 = SendMessageA(pHVar2,0x143,0,(LPARAM)local_100);
    SendMessageA(pHVar2,0x151,WVar3,5);
    local_10c = 0;
    LVar4 = SendMessageA(pHVar2,0x146,0,0);
    local_108 = 0;
    if (0 < LVar4) {
      do {
        LVar5 = SendMessageA(pHVar2,0x150,local_108,0);
        if (LVar5 == *(int *)(iVar1 + 0x58)) {
          local_10c = local_108;
          break;
        }
        local_108 = local_108 + 1;
      } while ((int)local_108 < LVar4);
    }
    SendMessageA(pHVar2,0x14e,local_10c,0);
  }
  SetDlgItemInt(param_1,0x3f7,*(UINT *)(iVar1 + 0x5c),1);
  SetDlgItemInt(param_1,0x3f8,*(UINT *)(iVar1 + 0x60),1);
  SetDlgItemInt(param_1,0x3ee,*(UINT *)(iVar1 + 100),1);
  SetDlgItemInt(param_1,0x3ef,*(UINT *)(iVar1 + 0x6c),1);
  pHVar2 = GetDlgItem(param_1,0x3eb);
  if (pHVar2 != (HWND)0x0) {
    SendMessageA(pHVar2,0x406,0,0x640000);
    SendMessageA(pHVar2,0x405,1,*(LPARAM *)(iVar1 + 0x68));
    FUN_00425a40(local_100,(BYTE *)"%d %%");
    SetDlgItemTextA(param_1,0x3f0,(LPCSTR)local_100);
  }
  uVar8 = 0xffffffff;
  local_10c = 0;
  if (*(int *)(iVar1 + 0x78) != 0) {
    *(int **)(iVar1 + 0x74) = (int *)(iVar1 + 0x7c);
    piVar6 = FUN_00412200((int *)(iVar1 + 0x7c),*(int *)(iVar1 + 0x78),2);
    if (piVar6 != (int *)0x0) {
      uVar8 = piVar6[3];
      local_10c = (WPARAM)(piVar6[4] != 0);
    }
  }
  uCheck = (uint)(uVar8 != 0xffffffff);
  CheckDlgButton(param_1,0x400,uCheck);
  pHVar2 = GetDlgItem(param_1,0x401);
  EnableWindow(pHVar2,uCheck);
  if (uVar8 != 0xffffffff) {
    SetDlgItemInt(param_1,0x401,uVar8 / 1000,1);
  }
  CheckDlgButton(param_1,0x402,local_10c);
  if ((*(int *)(iVar1 + 0x4c) == 0x32564d57) && (*(int *)(iVar1 + 4) != 0)) {
    BVar7 = 1;
  }
  else {
    BVar7 = 0;
  }
  pHVar2 = GetDlgItem(param_1,0x402);
  EnableWindow(pHVar2,BVar7);
  FUN_00412eb0(param_1,*(BOOL *)(iVar1 + 4));
  if ((*(int *)(iVar1 + 4) == 0) || (*(int *)(iVar1 + 0x58) != 5)) {
    BVar7 = 0;
  }
  else {
    BVar7 = 1;
  }
  FUN_00412f60(param_1,BVar7);
  return 0;
}


