/* Module: vegas30k.dll
   Function: FUN_01143c00
   Address: 01143c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01143c00(int param_1)

{
  HWND hWnd;
  uint uVar1;
  uint *puVar2;
  LRESULT LVar3;
  int iVar4;
  int unaff_EBX;
  uint *unaff_EBP;
  uint uVar5;
  uint *unaff_EDI;
  WPARAM *pWVar6;
  LONG *pLVar7;
  HWND local_50;
  LONG local_4c [5];
  int iStack_38;
  HWND local_34;
  undefined1 *local_30;
  WPARAM aWStack_2c [8];
  int iStack_c;
  void *local_4;
  
  local_4c[1] = *(undefined4 *)(param_1 + 0x18);
  hWnd = *(HWND *)(param_1 + 0x14);
  pWVar6 = aWStack_2c + 2;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pWVar6 = 0;
    pWVar6 = pWVar6 + 1;
  }
  local_4c[0] = 0;
  aWStack_2c[2] = 0x20;
  if ((*(byte *)(param_1 + 0x4e0) & 0x20) == 0) {
    aWStack_2c[3] = 1;
    LVar3 = SendMessageA(hWnd,0x146,0,0);
    iVar4 = LVar3 + -1;
  }
  else {
    aWStack_2c[3] = 0;
    iVar4 = SendMessageA(hWnd,0x146,0,0);
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    SendMessageA(hWnd,0x404,0,(LPARAM)(aWStack_2c + 2));
    free(local_4);
    SendMessageA(hWnd,0x144,aWStack_2c[3],0);
  }
  if ((*(byte *)(param_1 + 0x4e0) & 0x20) != 0) {
    pLVar7 = local_4c + 2;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar7 = 0;
      pLVar7 = pLVar7 + 1;
    }
    _SfList_CreateExZ_32(&local_50,4,0x10,0x10,0x40000002,0,0,0);
    if (local_50 != (HWND)0x0) {
      local_34 = local_50;
      local_4c[2] = 1;
      local_30 = &DAT_011db13c;
      (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(*(int **)(param_1 + 0x3c),local_4c + 2);
      uVar5 = 0;
      uVar1 = *unaff_EBP;
      if (uVar1 != 0) {
        do {
          puVar2 = *(uint **)(unaff_EBP[2] + uVar5 * 4);
          if ((*puVar2 & 0x20000) != 0) {
            unaff_EBX = 1;
          }
          FUN_01143b20(hWnd,uVar5,0,puVar2);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
      FUN_01052700(*(undefined4 *)((int)local_4 + 0x3c),unaff_EBP,0);
      _SfList_Destroy_4(unaff_EBP);
      if (unaff_EBX != 0) {
        pWVar6 = aWStack_2c;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pWVar6 = 0;
          pWVar6 = pWVar6 + 1;
        }
        aWStack_2c[0] = 0x20;
        aWStack_2c[1] = 0;
        SendMessageA(hWnd,0x404,0,(LPARAM)aWStack_2c);
        _SfList_CreateExZ_32(&stack0xffffffa8,4,0x10,0x10,0x40000002,0,0,0);
        if (unaff_EBP != (uint *)0x0) {
          pLVar7 = local_4c;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pLVar7 = 0;
            pLVar7 = pLVar7 + 1;
          }
          local_4c[0] = 1;
          local_4c[2] = GetWindowLongA(local_50,-0x15);
          local_4c[3] = 1;
          iStack_38 = iStack_c;
          (**(code **)(**(int **)((int)local_4 + 0x3c) + 0xc))
                    (*(int **)((int)local_4 + 0x3c),local_4c);
          uVar5 = 0;
          uVar1 = *unaff_EDI;
          if (uVar1 != 0) {
            do {
              puVar2 = *(uint **)(unaff_EDI[2] + uVar5 * 4);
              if ((*puVar2 & 0x10000) != 0) {
                FUN_01143b20(hWnd,uVar5 + 1,1,puVar2);
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar1);
          }
          FUN_01052700(*(undefined4 *)(iStack_c + 0x3c),unaff_EDI,0);
          _SfList_DeleteList_16(unaff_EDI,0,0xffffffff,0);
          _SfList_Destroy_4(unaff_EDI);
        }
      }
    }
  }
  return;
}


