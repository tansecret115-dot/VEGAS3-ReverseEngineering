/* Module: aviplug.dll
   Function: FUN_5f95d580
   Address: 5f95d580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f95d580(void *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  byte bVar3;
  int iVar4;
  HWND pHVar5;
  uint uVar6;
  WPARAM WVar7;
  LRESULT LVar8;
  int *piVar9;
  UINT Msg;
  LPARAM lParam;
  BOOL BVar10;
  uint local_4;
  
  iVar4 = FUN_5f95c930(param_1,*(int *)((int)param_1 + 0x34));
  pHVar5 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3e9);
  if ((*(int *)((int)param_1 + 0x54) == 0) || (*(int *)((int)param_1 + 0x50) == 0)) {
    BVar10 = 0;
    pHVar5 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3e9);
    EnableWindow(pHVar5,BVar10);
    BVar10 = 0;
    pHVar5 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3ea);
    EnableWindow(pHVar5,BVar10);
    return;
  }
  SendMessageA(pHVar5,0x14b,0,0);
  uVar6 = 0;
  if (iVar4 == 0) {
    local_4 = 0;
    if (*(int *)((int)param_1 + 0x50) != 0) {
      iVar4 = 0;
      do {
        WVar7 = SendMessageA(pHVar5,0x143,0,*(int *)((int)param_1 + 0x54) + iVar4);
        SendMessageA(pHVar5,0x151,WVar7,*(int *)((int)param_1 + 0x54) + iVar4);
        local_4 = local_4 + 1;
        iVar4 = iVar4 + 0x88;
      } while (local_4 < *(uint *)((int)param_1 + 0x50));
    }
    uVar6 = 1;
    puVar2 = *(ushort **)(*(int *)((int)param_1 + 0x34) + 0x424);
    if (puVar2 != (ushort *)0x0) {
      if (*(ushort **)(puVar2 + 0xb) == (ushort *)0x0) {
        uVar1 = *puVar2;
      }
      else {
        uVar1 = **(ushort **)(puVar2 + 0xb);
      }
      uVar6 = (uint)uVar1;
      if ((uVar6 == 3) && (*(uint *)((int)param_1 + 0x48) < 0x18)) {
        uVar6 = 1;
      }
    }
    local_4 = 0;
    if (*(int *)((int)param_1 + 0x50) != 0) {
      do {
        LVar8 = SendMessageA(pHVar5,0x150,local_4,0);
        if (*(uint *)(LVar8 + 0x80) == uVar6) {
          SendMessageA(pHVar5,0x14e,local_4,0);
          break;
        }
        local_4 = local_4 + 1;
      } while (local_4 < *(uint *)((int)param_1 + 0x50));
    }
  }
  else {
    if (*(uint *)((int)param_1 + 0x50) != 0) {
      piVar9 = (int *)(*(int *)((int)param_1 + 0x54) + 0x80);
      do {
        if (*piVar9 == 1) {
          WVar7 = SendMessageA(pHVar5,0x143,0,*(int *)((int)param_1 + 0x54) + uVar6 * 0x88);
          SendMessageA(pHVar5,0x151,WVar7,*(int *)((int)param_1 + 0x54) + uVar6 * 0x88);
          SendMessageA(pHVar5,0x14e,WVar7,0);
          break;
        }
        uVar6 = uVar6 + 1;
        piVar9 = piVar9 + 0x22;
      } while (uVar6 < *(uint *)((int)param_1 + 0x50));
    }
    iVar4 = FUN_5f95c980(*(int *)((int)param_1 + 0x34));
    if (iVar4 == 0) {
      FUN_5f95d500(param_1,*(int *)((int)param_1 + 0x34));
    }
  }
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x424);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x12) == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar6 = (uint)bVar3;
  lParam = 0;
  Msg = 0xf1;
  pHVar5 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),2000);
  SendMessageA(pHVar5,Msg,uVar6,lParam);
  FUN_5f95d890(param_1);
  return;
}


