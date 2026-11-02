/* Module: sfs4rw.dll
   Function: FUN_00405d30
   Address: 00405d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405d30(HWND param_1,int *param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  LPSIZE ptVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  tagRECT local_20;
  tagRECT local_10;
  
  iVar4 = param_3;
  piVar7 = param_2;
  local_34 = (int *)0x0;
  iVar1 = FUN_00425040((int *)&local_34,0xc,param_3,-1,4);
  if (-1 < iVar1) {
    param_3 = -1;
    if (0 < iVar4) {
      param_2 = (int *)iVar4;
      do {
        iVar4 = *piVar7;
        pHVar2 = GetDlgItem(param_1,iVar4);
        if (pHVar2 != (HWND)0x0) {
          GetWindowRect(pHVar2,&local_20);
          uVar3 = GetWindowLongA(pHVar2,-0x10);
          if ((uVar3 & 0x10000000) != 0) {
            local_24 = local_20.bottom - local_20.top;
            local_28 = local_20.top;
            local_2c = iVar4;
            iVar4 = FUN_00424510(local_34,&local_2c,0,(undefined4 *)0xffffffff,&LAB_00405f10);
            FUN_00423a10(local_34,iVar4,&local_2c,1);
          }
          if ((param_3 == -1) || (local_20.top < param_3)) {
            param_3 = local_20.top;
          }
        }
        piVar7 = piVar7 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (param_2 != (int *)0x0);
    }
    ptVar5 = FUN_00428650(100);
    iVar1 = ptVar5->cy * 3 >> 2;
    pHVar2 = GetParent(param_1);
    GetWindowRect(pHVar2,&local_10);
    local_30 = GetSystemMetrics(7);
    iVar8 = 0;
    iVar4 = *local_34;
    if (0 < iVar4) {
      do {
        if (local_34 == (int *)0x0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *local_34;
        }
        if ((iVar8 < 0) || (iVar6 + -1 < iVar8)) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = (int *)(local_34[1] * iVar8 + local_34[2]);
        }
        pHVar2 = GetDlgItem(param_1,*piVar7);
        GetWindowRect(pHVar2,&local_20);
        iVar6 = local_20.bottom - local_20.top;
        MoveWindow(pHVar2,(local_20.left - local_10.left) - local_30,
                   (param_3 - local_10.top) - iVar1,local_20.right - local_20.left,iVar6,
                   (uint)(iVar8 == iVar4 + -1));
        param_3 = param_3 + iVar6 + iVar1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4);
    }
    if (local_34 != (int *)0x0) {
      FUN_00424f70(local_34);
    }
  }
  return;
}


