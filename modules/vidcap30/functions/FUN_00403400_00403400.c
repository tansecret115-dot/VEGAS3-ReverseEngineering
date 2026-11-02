/* Module: vidcap30.exe
   Function: FUN_00403400
   Address: 00403400
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_00403400(void)

{
  HWND pHVar1;
  int iVar2;
  BOOL BVar3;
  LONG LVar4;
  LONG LVar5;
  DWORD DVar6;
  DWORD dwMilliseconds;
  tagMSG *ptVar7;
  MSG *pMVar8;
  tagMSG local_54;
  MSG local_38;
  MSG MStack_1c;
  
  local_54.wParam = 0;
  iVar2 = GetMessageA(&local_54,(HWND)0x0,0,0);
joined_r0x0040341d:
  if (iVar2 != 0) {
LAB_00403429:
    pHVar1 = DAT_005ba52c;
    if (local_54.message != 0x12) {
      if ((DAT_005ba52c != (HWND)0x0) &&
         ((((0x1ff < local_54.message && (local_54.message < 0x20b)) ||
           ((0x9f < local_54.message && (local_54.message < 0xaa)))) &&
          (local_54.hwnd != DAT_005ba52c)))) {
        DAT_005ba52c = (HWND)0x0;
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
      if (((*(int *)(DAT_005ba4c0 + 0x90) != 0) ||
          ((((*(int *)(DAT_005ba4c0 + 0x6c) != 0 &&
             (iVar2 = FUN_00434a00(*(int *)(DAT_005ba4c0 + 0x6c)), iVar2 != 0)) ||
            (DAT_005ba4d4 == (HACCEL)0x0)) ||
           (iVar2 = TranslateAcceleratorA(DAT_005ba4bc,DAT_005ba4d4,&local_54), iVar2 == 0)))) &&
         (local_54.message != 0x4d)) {
        if (((*(HWND *)(DAT_005ba4c0 + 0x98) != (HWND)0x0) && (0x1ff < local_54.message)) &&
           (local_54.message < 0x20b)) {
          SendMessageA(*(HWND *)(DAT_005ba4c0 + 0x98),0x407,0,(LPARAM)&local_54);
        }
        if (((DAT_005ba4c4 == (HWND)0x0) || (local_54.hwnd == DAT_005ba4c8)) ||
           (BVar3 = IsDialogMessageA(DAT_005ba4c4,&local_54), BVar3 == 0)) {
          TranslateMessage(&local_54);
          DispatchMessageA(&local_54);
        }
      }
      if (DAT_005ba508 == 0 && DAT_005ba50c == 0) goto LAB_00403586;
      do {
        LVar4 = InterlockedExchange(&DAT_005ba50c,0);
        LVar5 = InterlockedExchange(&DAT_005ba508,0);
        FUN_004060b0(DAT_005ba4c0,LVar4,LVar5,0);
LAB_00403586:
        do {
          if ((DAT_005ba514 == (code *)0x0) && (DAT_005ba51c == (code *)0x0)) {
            iVar2 = FUN_00404a20(&local_54,1);
            if (iVar2 != 0) goto LAB_00403429;
            iVar2 = GetMessageA(&local_54,(HWND)0x0,0,0);
            goto joined_r0x0040341d;
          }
          BVar3 = PeekMessageA(&local_54,(HWND)0x0,0,0,3);
          if (BVar3 == 0) {
            if ((DAT_005ba514 != (code *)0x0) &&
               (iVar2 = (*DAT_005ba514)(0,DAT_005ba518), iVar2 != 0)) goto LAB_00403586;
            if (DAT_005ba51c == (code *)0x0) {
              WaitMessage();
              goto LAB_00403586;
            }
            DVar6 = GetTickCount();
            if (DVar6 < DAT_005ba524) {
              dwMilliseconds = DAT_005ba524 - DVar6;
              if ((int)DAT_005ba528 < (int)(DAT_005ba524 - DVar6)) {
                dwMilliseconds = DAT_005ba528;
              }
              if (1 < (int)dwMilliseconds) {
                DVar6 = MsgWaitForMultipleObjects(0,(HANDLE *)0x0,0,dwMilliseconds,0xff);
                if (DVar6 == 0x102) {
                  DVar6 = GetTickCount();
                  DAT_005ba524 = DVar6 + DAT_005ba528;
                  if (DAT_005ba51c != (code *)0x0) {
                    (*DAT_005ba51c)(DAT_005ba520);
                  }
                  if (DAT_005ba52c != (HWND)0x0) {
                    FUN_004049b0();
                  }
                }
                goto LAB_00403586;
              }
            }
            DAT_005ba524 = DAT_005ba528 + DVar6;
            if (DAT_005ba51c != (code *)0x0) {
              (*DAT_005ba51c)(DAT_005ba520);
            }
            goto LAB_00403586;
          }
          if (local_54.message == 0x12) {
            return local_54.wParam;
          }
          if ((DAT_005ba514 == (code *)0x0) ||
             (iVar2 = (*DAT_005ba514)(&local_54,DAT_005ba518), iVar2 == 0)) {
            pHVar1 = DAT_005ba52c;
            if (((DAT_005ba52c != (HWND)0x0) &&
                (((0x1ff < local_54.message && (local_54.message < 0x20b)) ||
                 ((0x9f < local_54.message && (local_54.message < 0xaa)))))) &&
               (local_54.hwnd != DAT_005ba52c)) {
              DAT_005ba52c = (HWND)0x0;
              ptVar7 = &local_54;
              pMVar8 = &MStack_1c;
              for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
                pMVar8->hwnd = ptVar7->hwnd;
                ptVar7 = (tagMSG *)&ptVar7->message;
                pMVar8 = (MSG *)&pMVar8->message;
              }
              MStack_1c.hwnd = pHVar1;
              MStack_1c.message = 0x2a3;
              MStack_1c.lParam = -1;
              DispatchMessageA(&MStack_1c);
            }
            if ((((*(int *)(DAT_005ba4c0 + 0x90) != 0) ||
                 (((*(int *)(DAT_005ba4c0 + 0x6c) != 0 &&
                   (iVar2 = FUN_00434a00(*(int *)(DAT_005ba4c0 + 0x6c)), iVar2 != 0)) ||
                  (DAT_005ba4d4 == (HACCEL)0x0)))) ||
                (iVar2 = TranslateAcceleratorA(DAT_005ba4bc,DAT_005ba4d4,&local_54), iVar2 == 0)) &&
               (local_54.message != 0x4d)) {
              if (((*(HWND *)(DAT_005ba4c0 + 0x98) != (HWND)0x0) && (0x1ff < local_54.message)) &&
                 (local_54.message < 0x20b)) {
                SendMessageA(*(HWND *)(DAT_005ba4c0 + 0x98),0x407,0,(LPARAM)&local_54);
              }
              if (((DAT_005ba4c4 == (HWND)0x0) || (local_54.hwnd == DAT_005ba4c8)) ||
                 (BVar3 = IsDialogMessageA(DAT_005ba4c4,&local_54), BVar3 == 0)) {
                TranslateMessage(&local_54);
                DispatchMessageA(&local_54);
              }
            }
          }
        } while (DAT_005ba508 == 0 && DAT_005ba50c == 0);
      } while( true );
    }
  }
  return local_54.wParam;
}


