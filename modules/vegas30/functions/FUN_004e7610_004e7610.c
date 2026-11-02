/* Module: vegas30.exe
   Function: FUN_004e7610
   Address: 004e7610
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e7610(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  tagMSG local_1c;
  
  if (DAT_0064762c != 0) {
    while ((iVar2 = FUN_004e7740(), iVar2 != 0 || (0 < *(int *)(DAT_0064b108 + 0x54)))) {
      iVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      iVar2 = DAT_0064b108;
      while (DAT_0064b108 = iVar2, iVar3 != 0) {
        if (local_1c.message == 0x12) {
          *(undefined4 *)(iVar2 + 0x5c) = 1;
          if (*(int *)(iVar2 + 0x74) != 0) {
            puVar1 = (uint *)(*(int *)(iVar2 + 0x74) + 0x1c);
            *puVar1 = *puVar1 | 1;
          }
          goto LAB_004e7714;
        }
        TranslateMessage(&local_1c);
        DispatchMessageA(&local_1c);
        iVar2 = DAT_0064b108;
        if (local_1c.message == 0x100) {
          if (local_1c.wParam == 0x1b) {
LAB_004e7698:
            *(undefined4 *)(DAT_0064b108 + 0x5c) = 1;
            if (*(int *)(iVar2 + 0x74) != 0) {
              puVar1 = (uint *)(*(int *)(iVar2 + 0x74) + 0x1c);
              *puVar1 = *puVar1 | 1;
            }
          }
        }
        else if (local_1c.message == 0x1f) goto LAB_004e7698;
        iVar3 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
        iVar2 = DAT_0064b108;
      }
      if (DAT_0064762c == 0) goto LAB_004e771d;
      iVar2 = FUN_004e7740();
      if ((iVar2 != 0) || (0 < *(int *)(DAT_0064b108 + 0x54))) {
        WaitMessage();
      }
      if (DAT_0064762c == 0) {
        iVar2 = FUN_004e7770();
        PostQuitMessage(iVar2);
        return;
      }
    }
LAB_004e7714:
    if (DAT_0064762c != 0) {
      return;
    }
  }
LAB_004e771d:
  iVar2 = FUN_004e7770();
  PostQuitMessage(iVar2);
  return;
}


