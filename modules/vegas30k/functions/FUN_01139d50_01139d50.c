/* Module: vegas30k.dll
   Function: FUN_01139d50
   Address: 01139d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01139d50(HWND param_1)

{
  int *piVar1;
  HWND pHVar2;
  LRESULT LVar3;
  int iVar4;
  undefined4 *puVar5;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM LVar8;
  undefined4 local_1c [6];
  int local_4;
  
  GetWindowLongA(param_1,8);
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0x147;
  pHVar2 = GetDlgItem(param_1,0x3c);
  WVar7 = SendMessageA(pHVar2,UVar6,WVar7,LVar8);
  if (WVar7 != 0xffffffff) {
    LVar8 = 0;
    UVar6 = 0x150;
    pHVar2 = GetDlgItem(param_1,0x3c);
    LVar3 = SendMessageA(pHVar2,UVar6,WVar7,LVar8);
    LVar8 = 0;
    WVar7 = 0;
    UVar6 = 0x130b;
    pHVar2 = GetDlgItem(param_1,0x430);
    WVar7 = SendMessageA(pHVar2,UVar6,WVar7,LVar8);
    puVar5 = local_1c;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar5 = local_1c;
    local_1c[0] = 8;
    UVar6 = 0x1305;
    pHVar2 = GetDlgItem(param_1,0x430);
    SendMessageA(pHVar2,UVar6,WVar7,(LPARAM)puVar5);
    if (local_4 != 0) {
      piVar1 = *(int **)(*(int *)(local_4 + 0xc) + 0x218);
      (**(code **)(*piVar1 + 0x3c))(piVar1,LVar3);
      FUN_01139a10(param_1);
    }
  }
  return;
}


