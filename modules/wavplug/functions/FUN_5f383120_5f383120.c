/* Module: wavplug.dll
   Function: FUN_5f383120
   Address: 5f383120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f383120(int param_1)

{
  ushort uVar1;
  int iVar2;
  HWND pHVar3;
  WPARAM WVar4;
  ushort *puVar5;
  LRESULT LVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  UINT UVar11;
  LPARAM LVar12;
  
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d3);
  WVar4 = SendMessageA(pHVar3,0x147,0,0);
  if ((WVar4 == 0xffffffff) ||
     (puVar5 = (ushort *)SendMessageA(pHVar3,0x150,WVar4,0), puVar5 == (ushort *)0x0)) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(*(int **)(param_1 + 0x2c),iVar2);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16) = 0;
    }
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  uVar1 = *puVar5;
  if (uVar1 < 4) {
    if ((uVar1 == 3) || (uVar1 == 1)) {
LAB_5f38318b:
      if ((uint)puVar5[6] == (uint)(puVar5[7] >> 3) * (uint)puVar5[1]) {
        if ((*puVar5 == 3) || (*puVar5 == 1)) {
          uVar9 = 0x10;
        }
        else {
          uVar9 = puVar5[8] + 0x12;
        }
        puVar10 = *(undefined4 **)(*(int *)(param_1 + 0x30) + 0x424);
        for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *(undefined4 *)puVar5;
          puVar5 = puVar5 + 2;
          puVar10 = puVar10 + 1;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(char *)puVar10 = (char)*puVar5;
          puVar5 = (ushort *)((int)puVar5 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16);
        if (iVar2 != 0) {
          (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(*(int **)(param_1 + 0x2c),iVar2);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16) = 0;
        }
        goto LAB_5f3832f6;
      }
    }
  }
  else if ((0xfdff < uVar1) && (uVar1 < 0xfe03)) goto LAB_5f38318b;
  LVar12 = 0;
  WVar4 = 0;
  UVar11 = 0x147;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d2);
  WVar4 = SendMessageA(pHVar3,UVar11,WVar4,LVar12);
  if (WVar4 != 0xffffffff) {
    LVar12 = 0;
    UVar11 = 0x150;
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d2);
    LVar6 = SendMessageA(pHVar3,UVar11,WVar4,LVar12);
    if (LVar6 != 0) {
      FUN_5f382fd0(*(undefined4 *)(LVar6 + 0x84),(int *)puVar5,
                   *(ushort **)(*(int *)(param_1 + 0x30) + 0x424));
    }
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16);
  if (iVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(*(int **)(param_1 + 0x2c),iVar2);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16) = 0;
  }
  if ((*puVar5 == 3) || (*puVar5 == 1)) {
    uVar9 = 0x10;
  }
  else {
    uVar9 = puVar5[8] + 0x12;
  }
  uVar7 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))(*(int **)(param_1 + 0x2c),0x42,uVar9);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16) = uVar7;
  puVar10 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16);
  if (puVar10 != (undefined4 *)0x0) {
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = *(undefined4 *)puVar5;
      puVar5 = puVar5 + 2;
      puVar10 = puVar10 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(char *)puVar10 = (char)*puVar5;
      puVar5 = (ushort *)((int)puVar5 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
LAB_5f3832f6:
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}


