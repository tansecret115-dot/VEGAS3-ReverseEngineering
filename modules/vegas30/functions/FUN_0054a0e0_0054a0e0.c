/* Module: vegas30.exe
   Function: FUN_0054a0e0
   Address: 0054a0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0054a0e0(int param_1,uint param_2,undefined4 *param_3)

{
  HGLOBAL pvVar1;
  int *pMem;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  WPARAM WVar6;
  undefined4 *puVar7;
  WPARAM local_80;
  uint local_7c;
  undefined4 local_78 [10];
  undefined1 local_50 [12];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x84) == 2) {
    piVar4 = (int *)0x0;
    local_80 = 0;
    pvVar1 = GlobalAlloc(0x42,param_2 << 4);
    pMem = GlobalLock(pvVar1);
    if (pMem != (int *)0x0) {
      local_7c = 0;
      if (param_2 != 0) {
        do {
          iVar2 = _SfList_FindSpecificItemRange_16
                            (*(undefined4 *)(param_1 + 0xb4),0,0xffffffff,*param_3);
          if (iVar2 == -1) {
            return 0x80004005;
          }
          if (piVar4 == (int *)0x0) {
            local_80 = 1;
            *pMem = iVar2;
            pMem[2] = iVar2;
            piVar5 = pMem;
          }
          else if (piVar4[2] + 1 == iVar2) {
            piVar4[2] = piVar4[2] + 1;
            piVar5 = piVar4;
          }
          else {
            piVar4[4] = iVar2;
            local_80 = local_80 + 1;
            piVar5 = piVar4 + 4;
            piVar4[6] = iVar2;
          }
          piVar5[1] = 0xffff;
          piVar5[3] = 0xffff;
          param_3 = param_3 + 1;
          local_7c = local_7c + 1;
          piVar4 = piVar5;
        } while (local_7c < param_2);
      }
      SendMessageA(*(HWND *)(param_1 + 0x98),0x43f,local_80,(LPARAM)pMem);
      pvVar1 = GlobalHandle(pMem);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle(pMem);
      GlobalFree(pvVar1);
      return 0;
    }
  }
  else {
    iVar2 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x1032,0,0);
    WVar6 = 0xffffffff;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      WVar6 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x100c,WVar6,2);
      if (WVar6 != 0xffffffff) {
        local_78[4] = 2;
        local_78[3] = 0;
        SendMessageA(*(HWND *)(param_1 + 0x9c),0x102b,WVar6,(LPARAM)local_78);
      }
    }
    uVar3 = 0;
    if (param_2 != 0) {
      do {
        puVar7 = local_78;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        local_78[2] = param_3[uVar3];
        local_78[0] = 1;
        WVar6 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x100d,0xffffffff,(LPARAM)local_78);
        if (WVar6 != 0xffffffff) {
          if (uVar3 == 0) {
            local_40 = 1;
            local_44 = 1;
            SendMessageA(*(HWND *)(param_1 + 0x9c),0x102b,WVar6,(LPARAM)local_50);
          }
          local_18 = 2;
          local_1c = 2;
          SendMessageA(*(HWND *)(param_1 + 0x9c),0x102b,WVar6,(LPARAM)local_28);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < param_2);
    }
  }
  return 0;
}


