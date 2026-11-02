/* Module: vegas30k.dll
   Function: FUN_011327d0
   Address: 011327d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011327d0(int param_1,int *param_2,int param_3)

{
  HWND hWnd;
  HWND hWnd_00;
  int *piVar1;
  LRESULT LVar2;
  WPARAM wParam;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int local_478;
  int local_474;
  int *local_468 [3];
  int local_45c;
  undefined1 *local_454;
  undefined4 *local_450;
  undefined4 local_448 [131];
  uint local_23c;
  uint local_238;
  uint local_230;
  undefined1 local_208;
  uint auStack_207 [129];
  
  local_478 = 0;
  local_474 = 0;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    hWnd = *(HWND *)(param_1 + 0x18);
    hWnd_00 = *(HWND *)(param_1 + 0x1c);
    LVar2 = SendMessageA(hWnd,0x110a,9,0);
    if (LVar2 != 0) {
      ppiVar8 = local_468;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppiVar8 = (int *)0x0;
        ppiVar8 = ppiVar8 + 1;
      }
      iVar3 = FUN_0112fff0(hWnd,LVar2,&local_208);
      (&local_208)[iVar3] = 0x5c;
      local_468[2] = (int *)FUN_0112eb70(hWnd,LVar2);
      local_450 = local_448;
      local_454 = &local_208;
      puVar9 = local_448;
      for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_468[0] = (int *)0x2;
      wParam = SendMessageA(hWnd_00,0x100c,0xffffffff,2);
      if (wParam != 0xffffffff) {
        do {
          local_45c = FUN_011317a0(hWnd_00,wParam);
          if (local_45c < *local_468[2]) {
            local_478 = local_478 + 1;
            puVar7 = *(uint **)(local_468[2][2] + local_45c * 4);
            if ((*puVar7 & 0x200000) != 0) {
              local_474 = local_474 + 1;
            }
            local_23c = puVar7[3];
            local_238 = *puVar7;
            local_230 = local_230 & 0xffffffdf;
            uVar6 = puVar7[4];
            puVar7 = puVar7 + 5;
            puVar10 = (uint *)((int)auStack_207 + iVar3);
            for (uVar5 = (uint)(ushort)((ushort)uVar6 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar10 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar10 = puVar10 + 1;
            }
            piVar1 = *(int **)(param_1 + 0x3c);
            for (uVar6 = (ushort)uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *(char *)puVar10 = (char)*puVar7;
              puVar7 = (uint *)((int)puVar7 + 1);
              puVar10 = (uint *)((int)puVar10 + 1);
            }
            (**(code **)(*piVar1 + 0xc))(piVar1,local_468);
            _SfList_AllocAndInsertItem_20(param_2,local_448,0x240,0xffffffff,0);
          }
          wParam = SendMessageA(hWnd_00,0x100c,wParam,2);
        } while (wParam != 0xffffffff);
        if ((local_478 != 0) && (local_474 != 0)) {
          *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) | 0x20;
        }
      }
      if (0 < *param_2) {
        LVar2 = SendMessageA(hWnd_00,0x100c,0xffffffff,1);
        if (LVar2 != -1) {
          local_45c = FUN_011317a0(hWnd_00,LVar2);
          iVar3 = _SfList_FindItemRange_20
                            (param_2,0,0xffffffff,
                             *(undefined4 *)(*(int *)(local_468[2][2] + local_45c * 4) + 0xc),
                             &LAB_01131ad0);
          if (((-1 < iVar3) &&
              (iVar4 = *(int *)(param_2[2] + iVar3 * 4),
              *(uint *)(iVar4 + 0x218) = *(uint *)(iVar4 + 0x218) | 0x20, iVar3 != 0)) &&
             (param_3 != 0)) {
            _SfList_MoveRange_16(param_2,iVar3,0xffffffff,1);
          }
        }
      }
      return local_478;
    }
  }
  return 0;
}


