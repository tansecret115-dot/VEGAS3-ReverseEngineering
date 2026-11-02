/* Module: vegas30k.dll
   Function: FUN_011384e0
   Address: 011384e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011384e0(HWND param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  HWND pHVar3;
  LRESULT LVar4;
  UINT UVar5;
  WPARAM WVar6;
  LPARAM LVar7;
  undefined4 *puVar8;
  
  LVar2 = GetWindowLongA(param_1,8);
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x184;
  pHVar3 = GetDlgItem(param_1,0x423);
  SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  for (puVar1 = *(undefined4 **)(LVar2 + 8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (puVar1[1] == 4) {
      puVar8 = puVar1 + 8;
      WVar6 = 0;
      UVar5 = 0x180;
      pHVar3 = GetDlgItem(param_1,0x423);
      WVar6 = SendMessageA(pHVar3,UVar5,WVar6,(LPARAM)puVar8);
      UVar5 = 0x19a;
      puVar8 = puVar1;
      pHVar3 = GetDlgItem(param_1,0x423);
      SendMessageA(pHVar3,UVar5,WVar6,(LPARAM)puVar8);
    }
  }
  LVar7 = 0;
  WVar6 = 0;
  UVar5 = 0x18b;
  pHVar3 = GetDlgItem(param_1,0x423);
  LVar4 = SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  if (LVar4 != 0) {
    LVar7 = 0;
    WVar6 = 0;
    UVar5 = 0x186;
    pHVar3 = GetDlgItem(param_1,0x423);
    SendMessageA(pHVar3,UVar5,WVar6,LVar7);
  }
  return;
}


