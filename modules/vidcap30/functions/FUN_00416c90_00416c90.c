/* Module: vidcap30.exe
   Function: FUN_00416c90
   Address: 00416c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00416c90(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  tagMSG local_1c;
  
  if (DAT_005ba4c0 != 0) {
    while ((iVar2 = FUN_00416dc0(), iVar2 != 0 || (0 < *(int *)(DAT_005bb808 + 0x54)))) {
      iVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      iVar2 = DAT_005bb808;
      while (DAT_005bb808 = iVar2, iVar3 != 0) {
        if (local_1c.message == 0x12) {
          *(undefined4 *)(iVar2 + 0x5c) = 1;
          if (*(int *)(iVar2 + 0x6c) != 0) {
            puVar1 = (uint *)(*(int *)(iVar2 + 0x6c) + 0x18);
            *puVar1 = *puVar1 | 1;
          }
          goto LAB_00416d9e;
        }
        TranslateMessage(&local_1c);
        DispatchMessageA(&local_1c);
        iVar2 = DAT_005bb808;
        if (local_1c.message == 0x100) {
          if (local_1c.wParam == 0x1b) {
LAB_00416d18:
            *(undefined4 *)(DAT_005bb808 + 0x5c) = 1;
            if (*(int *)(iVar2 + 0x6c) != 0) {
              puVar1 = (uint *)(*(int *)(iVar2 + 0x6c) + 0x18);
              *puVar1 = *puVar1 | 1;
            }
            goto LAB_00416d2a;
          }
        }
        else {
          if (local_1c.message == 0x1f) goto LAB_00416d18;
LAB_00416d2a:
          if (local_1c.message == 0x113) break;
        }
        iVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
        iVar2 = DAT_005bb808;
      }
      if (DAT_005ba4c0 == 0) goto LAB_00416da7;
      iVar2 = FUN_00416dc0();
      if ((iVar2 != 0) || (0 < *(int *)(DAT_005bb808 + 0x54))) {
        WaitMessage();
      }
      if (DAT_005ba4c0 == 0) {
        iVar2 = FUN_00416df0();
        PostQuitMessage(iVar2);
        return;
      }
    }
LAB_00416d9e:
    if (DAT_005ba4c0 != 0) {
      return;
    }
  }
LAB_00416da7:
  iVar2 = FUN_00416df0();
  PostQuitMessage(iVar2);
  return;
}


