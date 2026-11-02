/* Module: sctplug.dll
   Function: FUN_00402e60
   Address: 00402e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402e60(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  HWND pHVar4;
  WPARAM WVar5;
  LRESULT LVar6;
  int iVar7;
  BOOL BVar8;
  uint local_4;
  
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d2);
  if ((*(int *)(param_1 + 0x4c) != 0) && (*(int *)(param_1 + 0x48) != 0)) {
    SendMessageA(pHVar4,0x14b,0,0);
    iVar7 = 0;
    local_4 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      do {
        WVar5 = SendMessageA(pHVar4,0x143,0,*(int *)(param_1 + 0x4c) + iVar7);
        SendMessageA(pHVar4,0x151,WVar5,*(int *)(param_1 + 0x4c) + iVar7);
        local_4 = local_4 + 1;
        iVar7 = iVar7 + 0x88;
      } while (local_4 < *(uint *)(param_1 + 0x48));
    }
    WVar5 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      while( true ) {
        LVar6 = SendMessageA(pHVar4,0x150,WVar5,0);
        puVar2 = *(ushort **)(*(int *)(param_1 + 0x30) + 0x424);
        puVar3 = *(ushort **)(puVar2 + 0xb);
        if (puVar3 == (ushort *)0x0) {
          uVar1 = *puVar2;
        }
        else {
          uVar1 = *puVar3;
        }
        if (*(uint *)(LVar6 + 0x80) == (uint)uVar1) break;
        WVar5 = WVar5 + 1;
        if (*(uint *)(param_1 + 0x48) <= WVar5) {
          FUN_00403090(param_1);
          return;
        }
      }
      SendMessageA(pHVar4,0x14e,WVar5,0);
    }
    FUN_00403090(param_1);
    return;
  }
  BVar8 = 0;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d2);
  EnableWindow(pHVar4,BVar8);
  BVar8 = 0;
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d3);
  EnableWindow(pHVar4,BVar8);
  return;
}


