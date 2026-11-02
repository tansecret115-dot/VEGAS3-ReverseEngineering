/* Module: vegas30.exe
   Function: FUN_00504180
   Address: 00504180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00504180(HWND param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  HWND hWnd;
  LRESULT LVar3;
  WPARAM WVar4;
  int *piVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 uVar8;
  EMIXERTYPE EVar9;
  int iVar10;
  int unaff_EBP;
  WPARAM wParam;
  LRESULT *pLVar11;
  int *unaff_retaddr;
  undefined4 uVar12;
  LRESULT local_56c;
  undefined1 auStack_568 [1384];
  
  wParam = 0;
  bVar2 = false;
  hWnd = GetDlgItem(param_1,0x4b1);
  LVar3 = SendMessageA(hWnd,0x146,0,0);
  local_56c = LVar3;
  WVar4 = SendMessageA(hWnd,0x147,0,0);
  if (0 < LVar3) {
    do {
      piVar5 = (int *)SendMessageA(hWnd,0x150,wParam,0);
      if (((piVar5 != (int *)0x0) && (piVar5[0x5e] != 0)) &&
         (piVar1 = (int *)*piVar5, piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0x28))(piVar1,piVar5[1]);
        (**(code **)(*(int *)*piVar5 + 0x20))
                  ((int *)*piVar5,1,piVar5 + 2,*(undefined4 *)(*unaff_retaddr + 0xfec));
        if (wParam == WVar4) {
          bVar2 = true;
        }
        piVar5[0x5e] = 0;
      }
      wParam = wParam + 1;
    } while ((int)wParam < local_56c);
  }
  if (param_2[2] != 0) {
    FUN_004f1ae0(*param_2,param_2[1]);
    param_2[3] = 1;
    param_2[2] = 0;
  }
  iVar10 = param_2[0x1b];
  if ((bVar2) || (iVar10 != 0)) {
    Transport_Suspend();
    puVar6 = (undefined4 *)FUN_005030c0(param_1);
    (**(code **)(*(int *)*puVar6 + 0x14))((int *)*puVar6,auStack_568);
    if (iVar10 == 0) {
      lVar7 = Mixer_TestPreviewPortAssignment(puVar6[1]);
      if (lVar7 < 0) {
        uVar12 = 1;
        uVar8 = _SfGetString_8(DAT_00647204,0x520e);
        _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0x15,lVar7,uVar8,uVar12);
        DAT_00648834 = 0;
        unaff_EBP = 1;
      }
      else {
        Mixer_AssignPreviewPort((ISFMixer *)0x0,puVar6[1]);
      }
      EVar9 = Mixer_GetMixerType((ISFMixer *)0x0);
      lVar7 = Mixer_TestRouting(puVar6 + 2,*(ulong *)(*param_2 + 0xfec));
      if (lVar7 < 0) {
        _SfErrorHandler_MsgBox_24(DAT_00647624,0x30,0x15,lVar7,0,1);
        DAT_00648834 = 0;
        unaff_EBP = 1;
      }
      Mixer_SetRouting(EVar9,puVar6 + 2,*(ulong *)(*param_2 + 0xfec));
    }
    else {
      pLVar11 = &local_56c;
      for (iVar10 = 0x159; iVar10 != 0; iVar10 = iVar10 + -1) {
        *pLVar11 = 0;
        pLVar11 = pLVar11 + 1;
      }
      FUN_005d30f0(&local_56c);
    }
    Mixer_UpdateAll();
    FUN_005749b0();
    Transport_Resume(unaff_EBP);
  }
  return 0;
}


