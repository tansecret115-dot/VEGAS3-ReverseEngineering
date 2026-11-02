/* Module: aviplug.dll
   Function: FUN_5f95d300
   Address: 5f95d300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_5f95d300(void *this,int param_1,int param_2,int param_3)

{
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  int iVar1;
  WPARAM WVar2;
  uint uVar3;
  LPSTR pCVar4;
  int iVar5;
  uint *puVar6;
  short sVar7;
  uint local_120;
  WPARAM local_11c;
  uchar local_104 [260];
  
  hWnd = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d4);
  hWnd_00 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d5);
  hWnd_01 = GetDlgItem(*(HWND *)((int)this + 0x10),0x7d6);
  SendMessageA(hWnd,0x14b,0,0);
  SendMessageA(hWnd_00,0x14b,0,0);
  SendMessageA(hWnd_01,0x14b,0,0);
  if (param_1 == 0) {
    iVar1 = FUN_5f95c930(this,*(int *)((int)this + 0x34));
    local_120 = 0xac44;
    if (param_3 != 0) {
      local_120 = *(uint *)(param_3 + 4);
    }
    local_11c = 0;
    iVar5 = 0xb;
    puVar6 = &DAT_5f9d9230;
    if (iVar1 != 0) {
      iVar5 = 3;
      puVar6 = &DAT_5f9d925c;
    }
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*puVar6 <= *(uint *)((int)this + 0x44)) {
        FUN_5f988570(local_104,"$u");
        WVar2 = SendMessageA(hWnd,0x143,0,(LPARAM)local_104);
        SendMessageA(hWnd,0x151,WVar2,*puVar6);
        if (local_120 == *puVar6) {
          local_11c = WVar2;
        }
      }
      puVar6 = puVar6 + 1;
    }
    SendMessageA(hWnd,0x14e,local_11c,0);
    uVar3 = 0x10;
    if (param_3 != 0) {
      uVar3 = (uint)*(ushort *)(param_3 + 0xe);
    }
    FUN_5f95d1b0(hWnd_00,0,param_2,iVar1,local_120,uVar3);
    sVar7 = 1;
    if (param_3 != 0) {
      sVar7 = *(short *)(param_3 + 2);
    }
    pCVar4 = FUN_5f9811c0(DAT_5f9f5978,0x17);
    WVar2 = SendMessageA(hWnd_01,0x143,0,(LPARAM)pCVar4);
    SendMessageA(hWnd_01,0x151,WVar2,1);
    if (sVar7 == 1) {
      SendMessageA(hWnd_01,0x14e,WVar2,0);
    }
    pCVar4 = FUN_5f9811c0(DAT_5f9f5978,0x18);
    WVar2 = SendMessageA(hWnd_01,0x143,0,(LPARAM)pCVar4);
    SendMessageA(hWnd_01,0x151,WVar2,2);
    if (sVar7 == 2) {
      SendMessageA(hWnd_01,0x14e,WVar2,0);
    }
  }
  return;
}


