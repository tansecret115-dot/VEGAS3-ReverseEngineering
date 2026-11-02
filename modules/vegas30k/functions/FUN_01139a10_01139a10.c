/* Module: vegas30k.dll
   Function: FUN_01139a10
   Address: 01139a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01139a10(HWND param_1)

{
  int *piVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM lParam;
  undefined4 local_1c [6];
  int *local_4;
  
  lParam = 0;
  WVar7 = 0;
  UVar6 = 0x130b;
  pHVar2 = GetDlgItem(param_1,0x430);
  WVar7 = SendMessageA(pHVar2,UVar6,WVar7,lParam);
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
  if (local_4 != (int *)0x0) {
    piVar1 = *(int **)(*local_4 + 0x24 + local_4[2] * 0x44);
    if (piVar1 != (int *)0x0) {
      iVar4 = *local_4 + local_4[2] * 0x44 + 0x1c;
      iVar3 = (**(code **)(*piVar1 + 0x1c))(piVar1,1,iVar4);
      if (iVar3 < 0) {
        (**(code **)(*piVar1 + 0x1c))(piVar1,0,iVar4);
        (**(code **)(*piVar1 + 0x1c))(piVar1,1,iVar4);
      }
    }
  }
  return;
}


