/* Module: sctplug.dll
   Function: FUN_00402d40
   Address: 00402d40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402d40(int param_1)

{
  int iVar1;
  HWND hWnd;
  WPARAM wParam;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d3);
  wParam = SendMessageA(hWnd,0x147,0,0);
  if (wParam == 0xffffffff) {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16);
  }
  else {
    psVar2 = (short *)SendMessageA(hWnd,0x150,wParam,0);
    if (psVar2 != (short *)0x0) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16);
      if (iVar1 != 0) {
        (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(*(int **)(param_1 + 0x2c),iVar1);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16) = 0;
      }
      if ((*psVar2 == 3) || (*psVar2 == 1)) {
        uVar5 = 0x10;
      }
      else {
        uVar5 = (ushort)psVar2[8] + 0x12;
      }
      uVar3 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x20))(*(int **)(param_1 + 0x2c),0x42,uVar5)
      ;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16) = uVar3;
      puVar6 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16);
      if (puVar6 != (undefined4 *)0x0) {
        for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *(undefined4 *)psVar2;
          psVar2 = psVar2 + 2;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar6 = (char)*psVar2;
          psVar2 = (short *)((int)psVar2 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        *(undefined4 *)(param_1 + 0x24) = 1;
        return;
      }
      goto LAB_00402e4a;
    }
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16);
  }
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x24))(*(int **)(param_1 + 0x2c),iVar1);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 0x424) + 0x16) = 0;
  }
LAB_00402e4a:
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}


