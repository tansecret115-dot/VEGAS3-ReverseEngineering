/* Module: vegas30.exe
   Function: FUN_004339c0
   Address: 004339c0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_004339c0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined1 **ppuVar4;
  uchar *puVar5;
  int local_7e8;
  int local_7e4;
  int local_7e0;
  undefined1 *local_7dc [8];
  LPCSTR local_7bc;
  uchar local_79c [260];
  undefined1 local_698 [388];
  SFFILETYPEINFO local_514 [1300];
  
  lVar3 = 0;
  local_7e0 = Transport_IsAnyOpen();
  if ((local_7e0 != 0) && (lVar3 = Transport_Suspend(), lVar3 < 0)) {
    return lVar3;
  }
  local_79c[0] = '\0';
  if (param_3 == 0) {
    puVar5 = (uchar *)(param_2 + 0x170);
    uVar1 = _SfGetString_8(DAT_00647204,0x553);
    SfPrintF(local_698,uVar1,puVar5);
    local_7dc[0] = local_698;
    ppuVar4 = local_7dc;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppuVar4 = (undefined1 *)0x0;
      ppuVar4 = ppuVar4 + 1;
    }
    local_7dc[1] = (undefined1 *)0xf;
    local_7dc[3] = (undefined1 *)0x104;
    local_7dc[2] = (undefined1 *)0x4;
    _mbscpy(local_79c,(uchar *)(param_2 + 0x170));
    local_7bc = (LPCSTR)_SfGetFileNameExtensionPtrA_4(local_79c);
    if (*local_7bc != '\0') {
      local_7bc = CharNextA(local_7bc);
    }
    lVar3 = Project_FileOpenDlg(DAT_00647624,(char *)local_79c,(SFFILE_DLG_PARAMS *)local_7dc,
                                local_514);
  }
  if (lVar3 == 0) {
    FUN_005b83b0(param_1,1);
    FUN_005bad20(param_1);
    local_7e8 = lVar3;
    local_7e4 = lVar3;
    lVar3 = FUN_005ec8a0(local_79c,&local_7e8,0,&local_7e4);
    if (lVar3 < 0) {
      _SfErrorHandler_MsgBox_24
                (DAT_00647624,0x10,0x16,lVar3,"There was an error opening the file.",0);
    }
    else {
      lVar3 = FUN_004e9f70(param_1,0x243,0);
      if (-1 < lVar3) {
        if (local_7e4 != 0) {
          lVar3 = FUN_004eb0f0(param_1,0x27,local_7e8);
        }
        if (-1 < lVar3) {
          lVar3 = FUN_00433850(param_1,param_2,local_7e8,1);
          if ((lVar3 < 0) || (lVar3 = FUN_004eb0f0(param_1,0x28,param_2), lVar3 < 0)) {
            FUN_004ea040(param_1,1);
          }
          else {
            FUN_005bad20(param_1);
            FUN_005ed410(param_2,0,0);
            FUN_005eed00(param_1,local_7e8);
            FUN_004eb2b0(param_1);
            FUN_004ea040(param_1,0);
          }
        }
      }
    }
    FUN_005b84d0(param_1,1);
  }
  if (local_7e0 == 0) {
    return lVar3;
  }
  if (lVar3 < 0) {
    lVar3 = Transport_Resume(1);
    return lVar3;
  }
  lVar3 = Transport_Resume(0);
  return lVar3;
}


