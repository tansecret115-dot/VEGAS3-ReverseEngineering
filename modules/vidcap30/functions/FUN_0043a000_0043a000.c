/* Module: vidcap30.exe
   Function: FUN_0043a000
   Address: 0043a000
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0043a000(int param_1,int param_2)

{
  undefined4 uVar1;
  LRESULT LVar2;
  int iVar3;
  CHAR *pCVar4;
  HWND hWnd;
  WPARAM wParam;
  undefined4 uVar5;
  int local_11c;
  int local_118;
  int local_114;
  CHAR local_110 [259];
  undefined1 local_d;
  undefined4 local_c;
  int local_8;
  
  uVar1 = DAT_005bb838;
  local_11c = 0;
  pCVar4 = local_110;
  for (iVar3 = 0x44; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar4[0] = '\0';
    pCVar4[1] = '\0';
    pCVar4[2] = '\0';
    pCVar4[3] = '\0';
    pCVar4 = pCVar4 + 4;
  }
  local_114 = 0;
  local_118 = 0;
  local_c = DAT_005bb838;
  local_8 = DAT_005bb784;
  lstrcpynA(local_110,&DAT_005bb680,0x104);
  local_d = 0;
  iVar3 = lstrcmpiA((LPCSTR)(param_1 + 0x17ac),"No Capture Device");
  if (iVar3 != 0) {
    if (param_2 == 0) {
LAB_0043a09d:
      pCVar4 = &DAT_005bb57c;
    }
    else {
      local_114 = FUN_0045a950(*(undefined4 *)(param_1 + 8),local_110);
      pCVar4 = local_110;
      if (local_114 == 0) goto LAB_0043a09d;
    }
    if ((param_2 != 0) && (DAT_005bb680 == '\0')) {
      lstrcpynA(&DAT_005bb680,pCVar4,0x104);
      DAT_005bb783 = 0;
    }
    local_11c = FUN_0044e530(uVar1,pCVar4,&local_118);
  }
  if (local_118 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(local_118 + 8);
  }
  FUN_0042f0d0(uVar1,uVar5);
  if ((local_11c < 0) || (local_114 == 0)) {
    return local_11c;
  }
  DAT_005bb784 = local_8;
  lstrcpynA(&DAT_005bb680,local_110,0x104);
  DAT_005bb783 = 0;
  if (local_8 == 1) {
    FUN_0043b8d0(param_1,0,1);
    hWnd = *(HWND *)(param_1 + 8);
    wParam = 0x1ce;
  }
  else {
    if (local_8 != 2) goto LAB_0043a17c;
    FUN_0043b8d0(param_1,0,1);
    hWnd = *(HWND *)(param_1 + 8);
    wParam = 0x1cf;
  }
  SendMessageA(hWnd,0x111,wParam,0);
LAB_0043a17c:
  LVar2 = SendMessageA(*(HWND *)(param_1 + 0x14e0),0x14d,0xffffffff,(LPARAM)local_110);
  if (LVar2 == -1) {
    SendMessageA(*(HWND *)(param_1 + 0x14e0),0x14e,0xffffffff,0);
    SetWindowTextA(*(HWND *)(param_1 + 0x14e0),local_110);
  }
  SetWindowTextA(*(HWND *)(param_1 + 0x14dc),"");
  FUN_00441da0(param_1);
  return local_11c;
}


