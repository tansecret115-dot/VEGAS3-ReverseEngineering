/* Module: vegas30k.dll
   Function: FUN_01139e10
   Address: 01139e10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01139e10(HWND param_1)

{
  int *piVar1;
  HWND pHVar2;
  HWND pHVar3;
  int iVar4;
  uint wParam;
  undefined4 *puVar5;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM LVar8;
  undefined4 local_1c [5];
  int iStack_8;
  int local_4;
  
  pHVar3 = param_1;
  GetWindowLongA(param_1,8);
  LVar8 = 0;
  WVar7 = 0;
  UVar6 = 0x130b;
  pHVar2 = GetDlgItem(pHVar3,0x430);
  WVar7 = SendMessageA(pHVar2,UVar6,WVar7,LVar8);
  puVar5 = local_1c;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = local_1c;
  local_1c[0] = 8;
  UVar6 = 0x1305;
  pHVar2 = GetDlgItem(pHVar3,0x430);
  SendMessageA(pHVar2,UVar6,WVar7,(LPARAM)puVar5);
  if ((local_4 != 0) && (piVar1 = *(int **)(*(int *)(local_4 + 0xc) + 0x218), piVar1 != (int *)0x0))
  {
    param_1 = (HWND)0x0;
    (**(code **)(*piVar1 + 0x20))(piVar1,0,&param_1);
    wParam = (uint)(iStack_8 != 0);
    LVar8 = 0;
    UVar6 = 0xf1;
    pHVar3 = GetDlgItem(pHVar3,0x432);
    SendMessageA(pHVar3,UVar6,wParam,LVar8);
  }
  return;
}


