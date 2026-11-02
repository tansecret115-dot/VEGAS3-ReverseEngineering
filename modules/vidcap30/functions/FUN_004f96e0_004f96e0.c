/* Module: vidcap30.exe
   Function: FUN_004f96e0
   Address: 004f96e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f96e0(int *param_1,int param_2,WPARAM param_3)

{
  HWND hWnd;
  int iVar1;
  int iVar2;
  int *piVar3;
  LRESULT LVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  HWND local_3c;
  HWND local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [12];
  undefined4 local_1c;
  undefined4 local_18;
  
  piVar3 = param_1;
  bVar7 = param_3 != 0xffffffff;
  hWnd = (HWND)param_1[6];
  if (bVar7) {
    local_3c = (HWND)param_1[7];
    local_38 = GetFocus();
  }
  _SfList_CreateExZ_32(&param_1,4,0x10,0x10,0x40000002,0,0,0);
  iVar1 = param_2;
  FUN_004f9620(hWnd,param_2,param_1);
  FUN_004f6f40(piVar3[0xf],hWnd,iVar1,FUN_004f6f00);
  SendMessageA(hWnd,0xb,0,0);
  iVar6 = iVar1;
  LVar4 = SendMessageA(hWnd,0x110a,9,0);
  FUN_004f98b0(hWnd,LVar4,iVar6);
  if (iVar1 == -0x10000) {
    piVar5 = (int *)GetWindowLongA(hWnd,-0x15);
  }
  else {
    piVar5 = (int *)FUN_004f6ec0(hWnd,iVar1);
  }
  iVar6 = 0;
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
  }
  if (iVar6 + -1 < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)piVar5[2];
  }
  if (iVar6 != 0) {
    local_30 = *(undefined4 *)(iVar6 + 4);
    local_34 = 0x10000000;
    FUN_00497a20(piVar3[0xf],piVar5,1);
    _SfList_DeleteList_16(piVar5,0,0xffffffff,0);
    _SfList_AllocAndInsertItem_20(piVar5,&local_34,0xc,0,0);
    FUN_004f6fe0(piVar3,iVar1,bVar7);
    iVar6 = 0;
    iVar1 = *param_1;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(param_1[2] + iVar6 * 4);
        if (iVar2 == 0) {
          return;
        }
        FUN_004f8100(piVar3,iVar2,0,1);
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    _SfList_Destroy_4(param_1);
    if (((bVar7) && (local_38 == local_3c)) &&
       (LVar4 = SendMessageA(local_3c,0x1004,0,0), LVar4 != 0)) {
      if ((int)(LVar4 - 1U) < (int)param_3) {
        param_3 = LVar4 - 1U;
      }
      local_18 = 0xf;
      local_1c = 1;
      SendMessageA(local_3c,0x102b,param_3,(LPARAM)local_28);
      SendMessageA(hWnd,0xb,1,0);
      return;
    }
    SendMessageA(hWnd,0xb,1,0);
  }
  return;
}


