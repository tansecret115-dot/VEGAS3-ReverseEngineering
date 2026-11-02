/* Module: vegas30.exe
   Function: FUN_00418940
   Address: 00418940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418940(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  HDWP pvVar3;
  uint uFlags;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uFlags = (-(uint)(param_2 != 0) & 0xffffffc0) + 0x80 | 0x17;
  if (param_2 != 0) {
    iVar1 = FUN_00422820(param_1);
    uVar2 = 0x40;
    if (iVar1 == 0) goto LAB_00418979;
  }
  uVar2 = 0x80;
LAB_00418979:
  pvVar3 = BeginDeferWindowPos(0x12);
  if ((param_2 == 0) || (*(int *)(param_1 + 0x220) != 0)) {
    pvVar3 = DeferWindowPos(pvVar3,*(HWND *)(param_1 + 0x238),(HWND)0x0,0,0,0,0,uVar2 | 0x17);
    if (1 < *(uint *)(param_1 + 0x224)) {
      pvVar3 = DeferWindowPos(pvVar3,*(HWND *)(param_1 + 0x250),(HWND)0x0,0,0,0,0,uFlags);
    }
    if (*(HWND *)(param_1 + 0x328) != (HWND)0x0) {
      pvVar3 = DeferWindowPos(pvVar3,*(HWND *)(param_1 + 0x328),(HWND)0x0,0,0,0,0,uFlags);
    }
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    pvVar3 = (HDWP)FUN_00417e50(pvVar3,param_1,uVar2 | 0x17,&local_10);
  }
  EndDeferWindowPos(pvVar3);
  iVar1 = FUN_00422820(param_1);
  if (iVar1 != 0) {
    FUN_004181a0(param_1);
  }
  InvalidateRect(*(HWND *)(param_1 + 600),(RECT *)0x0,1);
  return;
}


