/* Module: vegas30.exe
   Function: FUN_00417e50
   Address: 00417e50
   Source: Ghidra pseudocode (Stage 10 batch) */


HDWP FUN_00417e50(HDWP param_1,int param_2,uint param_3,int *param_4)

{
  int x;
  LRESULT LVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  HDWP pvVar6;
  int local_14;
  int local_8;
  int local_4;
  
  if ((*(HWND *)(param_2 + 0x254) != (HWND)0x0) && (*(int *)(param_2 + 600) != 0)) {
    LVar1 = SendMessageA(*(HWND *)(param_2 + 0x254),0x154,0xffffffff,0);
    iVar2 = GetSystemMetrics(0x2e);
    iVar3 = GetSystemMetrics(6);
    iVar2 = LVar1 + iVar2 * 2 + iVar3 * 2;
    LVar1 = SendMessageA(*(HWND *)(param_2 + 0x254),0x154,0,0);
    _SfGetToolbarSize_8(*(undefined4 *)(param_2 + 600),&local_8);
    local_14 = iVar2;
    if (iVar2 <= local_4) {
      local_14 = local_4;
    }
    iVar3 = param_4[1];
    x = *param_4;
    uVar4 = ((param_4[2] - x) - local_8) - 2;
    uVar4 = ((int)uVar4 < 0) - 1 & uVar4;
    iVar5 = GetSystemMetrics(6);
    pvVar6 = DeferWindowPos(param_1,*(HWND *)(param_2 + 0x254),(HWND)0x0,x,
                            ((iVar3 * 2 - iVar2) + local_14) / 2,uVar4,
                            iVar2 + (iVar5 + LVar1 * 10) * 2,param_3 | 0x14);
    iVar2 = x + 2 + uVar4;
    iVar3 = ((param_4[1] * 2 - local_4) + local_14) / 2;
    pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_2 + 600),(HWND)0x0,iVar2,iVar3,local_8,local_4,
                            param_3 | 0x14);
    if ((param_3 & 2) == 0) {
      SetRect((LPRECT)(param_2 + 0x25c),iVar2,iVar3,local_8 + iVar2,local_4 + iVar3);
    }
    param_4[1] = param_4[1] + local_14 + 7;
    return pvVar6;
  }
  return param_1;
}


