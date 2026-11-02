/* Module: vegas30.exe
   Function: FUN_004039b0
   Address: 004039b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

WPARAM FUN_004039b0(void)

{
  HWND pHVar1;
  int iVar2;
  BOOL BVar3;
  LONG LVar4;
  LONG LVar5;
  DWORD DVar6;
  tagMSG *ptVar7;
  MSG *pMVar8;
  tagMSG local_54;
  MSG local_38;
  MSG MStack_1c;
  
  local_54.wParam = 0;
  do {
    iVar2 = PeekMessageA(&local_54,(HWND)0x0,0,0,1);
joined_r0x004039d5:
  } while (iVar2 == 0);
LAB_004039d7:
  pHVar1 = DAT_0064769c;
  if (local_54.message == 0x12) {
    return local_54.wParam;
  }
  if ((DAT_0064769c != (HWND)0x0) &&
     ((((0x1ff < local_54.message && (local_54.message < 0x20b)) ||
       ((0x9f < local_54.message && (local_54.message < 0xaa)))) && (local_54.hwnd != DAT_0064769c))
     )) {
    DAT_0064769c = (HWND)0x0;
    ptVar7 = &local_54;
    pMVar8 = &local_38;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      pMVar8->hwnd = ptVar7->hwnd;
      ptVar7 = (tagMSG *)&ptVar7->message;
      pMVar8 = (MSG *)&pMVar8->message;
    }
    local_38.message = 0x2a3;
    local_38.hwnd = pHVar1;
    local_38.lParam = -1;
    DispatchMessageA(&local_38);
  }
  if ((((*(int *)(DAT_0064762c + 0xb4) != 0) || (DAT_00647644 == 0)) ||
      (iVar2 = FUN_00548c90(DAT_00647624,DAT_00647644,&local_54), iVar2 == 0)) &&
     (local_54.message != 0x4d)) {
    if ((local_54.message == 0x100) && ((short)local_54.wParam == 0x1b)) {
      FUN_0040c6d0(&local_54);
    }
    if (((short)local_54.wParam == 0x25) || ((short)local_54.wParam == 0x27)) {
      if (local_54.message == 0x104) {
        local_54.message = 0x100;
      }
      else if (local_54.message == 0x105) {
        local_54.message = 0x101;
      }
    }
    if (((DAT_00647634 == (HWND)0x0) || (local_54.hwnd == DAT_00647638)) ||
       (BVar3 = IsDialogMessageA(DAT_00647634,&local_54), BVar3 == 0)) {
      TranslateMessage(&local_54);
      DispatchMessageA(&local_54);
    }
  }
  if (DAT_00647678 == 0 && DAT_0064767c == 0) goto LAB_00403b40;
  do {
    LVar4 = InterlockedExchange(&DAT_0064767c,0);
    LVar5 = InterlockedExchange(&DAT_00647678,0);
    FUN_0040d540(DAT_0064762c,LVar4,LVar5,0);
LAB_00403b40:
    do {
      while( true ) {
        if ((DAT_00647684 == (code *)0x0) && (DAT_0064768c == 0)) goto joined_r0x00403d20;
        BVar3 = PeekMessageA(&local_54,(HWND)0x0,0,0,3);
        if (BVar3 != 0) break;
        if ((DAT_00647684 == (code *)0x0) || (iVar2 = (*DAT_00647684)(0,DAT_00647688), iVar2 == 0))
        {
          if (DAT_0064768c == 0) {
            WaitMessage();
          }
          else {
            FUN_004059d0();
          }
        }
      }
      if (local_54.message == 0x12) {
        return local_54.wParam;
      }
      if ((DAT_00647684 == (code *)0x0) ||
         (iVar2 = (*DAT_00647684)(&local_54,DAT_00647688), iVar2 == 0)) {
        pHVar1 = DAT_0064769c;
        if (((DAT_0064769c != (HWND)0x0) &&
            (((0x1ff < local_54.message && (local_54.message < 0x20b)) ||
             ((0x9f < local_54.message && (local_54.message < 0xaa)))))) &&
           (local_54.hwnd != DAT_0064769c)) {
          DAT_0064769c = (HWND)0x0;
          ptVar7 = &local_54;
          pMVar8 = &MStack_1c;
          for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
            pMVar8->hwnd = ptVar7->hwnd;
            ptVar7 = (tagMSG *)&ptVar7->message;
            pMVar8 = (MSG *)&pMVar8->message;
          }
          MStack_1c.message = 0x2a3;
          MStack_1c.hwnd = pHVar1;
          MStack_1c.lParam = -1;
          DispatchMessageA(&MStack_1c);
        }
        if ((((*(int *)(DAT_0064762c + 0xb4) != 0) || (DAT_00647644 == 0)) ||
            (iVar2 = FUN_00548c90(DAT_00647624,DAT_00647644,&local_54), iVar2 == 0)) &&
           (local_54.message != 0x4d)) {
          if ((local_54.message == 0x100) && ((short)local_54.wParam == 0x1b)) {
            FUN_0040c6d0(&local_54);
          }
          if (((short)local_54.wParam == 0x25) || ((short)local_54.wParam == 0x27)) {
            if (local_54.message == 0x104) {
              local_54.message = 0x100;
            }
            else if (local_54.message == 0x105) {
              local_54.message = 0x101;
            }
          }
          if (((DAT_00647634 == (HWND)0x0) || (local_54.hwnd == DAT_00647638)) ||
             (BVar3 = IsDialogMessageA(DAT_00647634,&local_54), BVar3 == 0)) {
            TranslateMessage(&local_54);
            DispatchMessageA(&local_54);
          }
        }
      }
    } while (DAT_00647678 == 0 && DAT_0064767c == 0);
  } while( true );
joined_r0x00403d20:
  if (DAT_0064769c == (HWND)0x0) {
LAB_00403d61:
    iVar2 = PeekMessageA(&local_54,(HWND)0x0,0,0,1);
    goto joined_r0x004039d5;
  }
  BVar3 = PeekMessageA(&local_54,(HWND)0x0,0,0,1);
  if (BVar3 != 0) goto LAB_004039d7;
  DVar6 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,500,0xff);
  if (DVar6 != 0x102) goto LAB_00403d61;
  FUN_00405960();
  goto joined_r0x00403d20;
}


