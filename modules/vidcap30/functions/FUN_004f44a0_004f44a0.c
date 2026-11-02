/* Module: vidcap30.exe
   Function: FUN_004f44a0
   Address: 004f44a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f44a0(int param_1)

{
  ushort uVar1;
  HWND hWnd;
  bool bVar2;
  LRESULT LVar3;
  LRESULT LVar4;
  int iVar5;
  WPARAM wParam;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  HWND hWnd_00;
  undefined4 *puVar9;
  HWND local_53c;
  LRESULT local_538;
  undefined4 local_534 [2];
  int local_52c;
  undefined1 *local_528;
  undefined1 *puStack_524;
  undefined1 *puStack_520;
  undefined1 *puStack_51c;
  undefined1 local_514;
  undefined4 auStack_513 [127];
  undefined1 auStack_314 [260];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [520];
  
  hWnd = *(HWND *)(param_1 + 0x18);
  hWnd_00 = *(HWND *)(param_1 + 0x1c);
  bVar2 = false;
  local_53c = hWnd_00;
  LVar3 = SendMessageA(hWnd,0x110a,9,0);
  if (LVar3 != 0) {
    local_538 = LVar3;
    LVar4 = SendMessageA(hWnd_00,0x1032,0,0);
    if (LVar4 != 0) {
      iVar5 = FUN_004f8340(hWnd,LVar3,&local_514);
      (&local_514)[iVar5] = 0x5c;
      local_52c = FUN_004f6ec0(hWnd,local_538);
      wParam = SendMessageA(hWnd_00,0x100c,0xffffffff,2);
      if (wParam != 0xffffffff) {
        do {
          local_528 = (undefined1 *)FUN_004f3c20(hWnd_00,wParam);
          local_534[0] = 0x410;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))
                            (*(int **)(param_1 + 0x3c),local_534);
          if ((-1 < iVar6) && (puStack_524 != (undefined1 *)0x0)) {
            iVar6 = *(int *)(*(int *)(local_52c + 8) + (int)local_528 * 4);
            uVar1 = *(ushort *)(iVar6 + 0x10);
            puStack_520 = &local_514;
            puVar8 = (undefined4 *)(iVar6 + 0x14);
            puVar9 = (undefined4 *)((int)auStack_513 + iVar5);
            for (uVar7 = (uint)(uVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
              puVar8 = (undefined4 *)((int)puVar8 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puStack_51c = auStack_208;
            local_534[0] = 2;
            (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_534);
            puStack_524 = auStack_314;
            local_528 = auStack_210;
            auStack_314[0] = 0;
            local_53c = (HWND)0x14;
            (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),&local_53c);
            bVar2 = true;
            hWnd_00 = local_53c;
          }
          wParam = SendMessageA(hWnd_00,0x100c,wParam,2);
        } while (wParam != 0xffffffff);
        if (bVar2) {
          FUN_004f93e0(param_1);
        }
      }
    }
  }
  return;
}


