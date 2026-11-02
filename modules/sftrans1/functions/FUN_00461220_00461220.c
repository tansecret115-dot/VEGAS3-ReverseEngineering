/* Module: sftrans1.dll
   Function: FUN_00461220
   Address: 00461220
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00461220(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  HWND pHVar4;
  WPARAM WVar5;
  HWND hWnd;
  uint uVar6;
  int iVar7;
  undefined *lParam;
  LPSTR lParam_00;
  LPARAM LVar8;
  undefined1 local_21c [260];
  CHAR local_118 [260];
  LPSTR local_14;
  HWND local_10;
  int *local_c;
  LPSTR local_8;
  
  puVar1 = (undefined4 *)**(int **)(param_1 + 8);
  local_c = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,&DAT_00554c90,&local_c);
  }
  *(undefined4 *)(param_1 + 0x94) = 0;
  pvVar2 = calloc(1,DAT_0055e710 * 4);
  *(void **)(param_1 + 0x90) = pvVar2;
  if (pvVar2 != (void *)0x0) {
    iVar7 = 0;
    if (0 < DAT_0055e710) {
      do {
        if ((code *)(&DAT_0055e700)[iVar7] == (code *)0x0) {
          *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar7 * 4) = 0;
        }
        else {
          uVar3 = (*(code *)(&DAT_0055e700)[iVar7])();
          *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar7 * 4) = uVar3;
        }
        iVar7 = iVar7 + 1;
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      } while (iVar7 < DAT_0055e710);
    }
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x58e);
    local_8 = (LPSTR)0x0;
    if (0 < *(int *)(param_1 + 0x94)) {
      do {
        local_10 = *(HWND *)(*(int *)(param_1 + 0x90) + (int)local_8 * 4);
        if (local_10 == (HWND)0x0) {
          lParam = &DAT_0055f534;
        }
        else {
          FUN_0045fdc0(param_1,0x593);
          (**(code **)(local_10->unused + 0xc))(local_21c,0x104);
          lParam = local_21c;
        }
        lParam_00 = local_8;
        WVar5 = SendMessageA(pHVar4,0x143,0,(LPARAM)lParam);
        SendMessageA(pHVar4,0x151,WVar5,(LPARAM)lParam_00);
        local_8 = (LPSTR)((int)local_8 + 1);
      } while ((int)local_8 < *(int *)(param_1 + 0x94));
    }
    hWnd = GetDlgItem(*(HWND *)(param_1 + 0x30),0x593);
    DestroyWindow(hWnd);
    SendMessageA(pHVar4,0x14e,0,0);
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x595);
    LVar8 = 0;
    WVar5 = SendMessageA(pHVar4,0x143,0,0x55f52c);
    SendMessageA(pHVar4,0x151,WVar5,LVar8);
    LVar8 = 1;
    WVar5 = SendMessageA(pHVar4,0x143,0,0x55f520);
    SendMessageA(pHVar4,0x151,WVar5,LVar8);
    LVar8 = 2;
    WVar5 = SendMessageA(pHVar4,0x143,0,0x55f518);
    SendMessageA(pHVar4,0x151,WVar5,LVar8);
    SendMessageA(pHVar4,0x14e,0,0);
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 0x30),0x591);
    SendMessageA(pHVar4,0x60e,0,0);
    SendMessageA(pHVar4,0x60f,0,0xffff);
    local_10 = *(HWND *)(param_1 + 0x30);
    pHVar4 = GetDlgItem(local_10,0x5b3);
    SendMessageA(pHVar4,0x600,0,0);
    GetDlgItemTextA(local_10,0x5b3,local_118,0x82);
    SendMessageA(pHVar4,0x601,0xa029,0x555a6c);
    SendMessageA(pHVar4,0x601,41000,0x555a74);
    uVar6 = lstrlenA("Sonic Foundry ");
    FUN_00551640();
    local_8 = &stack0xfffffdd8;
    FUN_00551640();
    local_14 = &stack0xfffffdd8;
    lstrcpynA(local_8,local_118,uVar6 + 1);
    local_8[uVar6] = '\0';
    local_8[uVar6] = '\0';
    lstrcpynA(local_14,"Sonic Foundry ",uVar6 + 1);
    local_14[uVar6] = '\0';
    local_14[uVar6] = '\0';
    iVar7 = lstrcmpiA(local_8,local_14);
    FUN_004c85d0(local_10,0x5b3,local_118 + (~-(uint)(iVar7 != 0) & uVar6));
    FUN_00461070();
    (**(code **)(*local_c + 0x3c))(local_c,*(undefined4 *)(param_1 + 0x30),1000);
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
    }
    return 1;
  }
  if (local_c != (int *)0x0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  return 0;
}


