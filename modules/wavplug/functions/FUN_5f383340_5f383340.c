/* Module: wavplug.dll
   Function: FUN_5f383340
   Address: 5f383340
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f383340(void *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  HWND pHVar4;
  WPARAM WVar5;
  LRESULT LVar6;
  int iVar7;
  BOOL BVar8;
  uint local_8;
  
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d2);
  if ((*(int *)((int)param_1 + 0x4c) != 0) && (*(int *)((int)param_1 + 0x48) != 0)) {
    SendMessageA(pHVar4,0x14b,0,0);
    iVar7 = 0;
    local_8 = 0;
    if (*(int *)((int)param_1 + 0x48) != 0) {
      do {
        WVar5 = SendMessageA(pHVar4,0x143,0,*(int *)((int)param_1 + 0x4c) + iVar7);
        SendMessageA(pHVar4,0x151,WVar5,*(int *)((int)param_1 + 0x4c) + iVar7);
        if (*(int *)(*(int *)((int)param_1 + 0x4c) + 0x80 + iVar7) == 1) {
          SendMessageA(pHVar4,0x14e,WVar5,0);
        }
        local_8 = local_8 + 1;
        iVar7 = iVar7 + 0x88;
      } while (local_8 < *(uint *)((int)param_1 + 0x48));
    }
    puVar2 = *(ushort **)(*(int *)((int)param_1 + 0x30) + 0x424);
    puVar3 = *(ushort **)(puVar2 + 0xb);
    if (puVar3 == (ushort *)0x0) {
      uVar1 = *puVar2;
    }
    else {
      uVar1 = *puVar3;
    }
    local_8 = (uint)uVar1;
    WVar5 = 0;
    if (*(int *)((int)param_1 + 0x48) != 0) {
      while( true ) {
        LVar6 = SendMessageA(pHVar4,0x150,WVar5,0);
        if (*(uint *)(LVar6 + 0x80) == local_8) break;
        WVar5 = WVar5 + 1;
        if (*(uint *)((int)param_1 + 0x48) <= WVar5) {
          FUN_5f3837e0(param_1);
          return;
        }
      }
      SendMessageA(pHVar4,0x14e,WVar5,0);
    }
    FUN_5f3837e0(param_1);
    return;
  }
  BVar8 = 0;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d2);
  EnableWindow(pHVar4,BVar8);
  BVar8 = 0;
  pHVar4 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d3);
  EnableWindow(pHVar4,BVar8);
  return;
}


