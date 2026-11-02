/* Module: vegas30k.dll
   Function: FUN_0113a4f0
   Address: 0113a4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0113a4f0(HWND param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *_Memory;
  int *piVar4;
  HWND pHVar5;
  LRESULT LVar6;
  int iVar7;
  WPARAM WVar8;
  undefined4 *puVar9;
  UINT UVar10;
  WPARAM WVar11;
  LPARAM lParam;
  undefined4 local_1c [6];
  int *local_4;
  
  piVar4 = (int *)GetWindowLongA(param_1,8);
  iVar1 = piVar4[1];
  WVar8 = 0;
  lParam = 0;
  WVar11 = 0;
  UVar10 = 0x1304;
  pHVar5 = GetDlgItem(param_1,0x430);
  LVar6 = SendMessageA(pHVar5,UVar10,WVar11,lParam);
  if (0 < LVar6) {
    do {
      puVar9 = local_1c;
      for (iVar7 = 7; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      puVar9 = local_1c;
      local_1c[0] = 8;
      UVar10 = 0x1305;
      WVar11 = WVar8;
      pHVar5 = GetDlgItem(param_1,0x430);
      SendMessageA(pHVar5,UVar10,WVar11,(LPARAM)puVar9);
      _Memory = local_4;
      if (local_4 != (int *)0x0) {
        iVar7 = local_4[2];
        iVar2 = *local_4;
        piVar3 = *(int **)(iVar2 + 0x24 + iVar7 * 0x44);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x14))(piVar3);
          FUN_0113a720(iVar2 + iVar7 * 0x44);
        }
        free(_Memory);
      }
      puVar9 = local_1c;
      local_4 = (int *)0x0;
      UVar10 = 0x1306;
      WVar11 = WVar8;
      pHVar5 = GetDlgItem(param_1,0x430);
      SendMessageA(pHVar5,UVar10,WVar11,(LPARAM)puVar9);
      WVar8 = WVar8 + 1;
    } while ((int)WVar8 < LVar6);
  }
  if ((*piVar4 != 0) && (*(code **)(iVar1 + 0x3ac) != (code *)0x0)) {
    (**(code **)(iVar1 + 0x3ac))(iVar1,0x10,*(undefined4 *)(iVar1 + 0x3b0),0,0,0,0);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}


