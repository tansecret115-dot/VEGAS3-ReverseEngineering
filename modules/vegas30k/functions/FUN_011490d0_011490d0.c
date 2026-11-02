/* Module: vegas30k.dll
   Function: FUN_011490d0
   Address: 011490d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011490d0(int param_1,undefined4 param_2,LONG param_3,LONG param_4)

{
  HWND hWndTo;
  HWND hWndTo_00;
  uint uVar1;
  POINT pt;
  LONG LVar2;
  LONG LVar3;
  SHORT SVar4;
  uint uVar5;
  HWND pHVar6;
  undefined4 uVar7;
  bool bVar8;
  
  hWndTo = *(HWND *)(param_1 + 0x18);
  hWndTo_00 = *(HWND *)(param_1 + 0x1c);
  uVar1 = *(uint *)(param_1 + 0x4a4);
  SVar4 = GetKeyState(0x10);
  *(uint *)(param_1 + 0x4a4) = (uint)(SVar4 < 0) << 6 | *(uint *)(param_1 + 0x4a4) & 0xffffffbf;
  SVar4 = GetKeyState(0x11);
  LVar3 = param_4;
  LVar2 = param_3;
  uVar5 = (uint)(SVar4 < 0) << 7 | *(uint *)(param_1 + 0x4a4) & 0xffffff7f;
  bVar8 = uVar1 != uVar5;
  *(uint *)(param_1 + 0x4a4) = uVar5;
  pt.y = param_4;
  pt.x = param_3;
  pHVar6 = ChildWindowFromPointEx(*(HWND *)(param_1 + 4),pt,1);
  if (pHVar6 == hWndTo_00) {
    param_3 = LVar2;
    param_4 = LVar3;
    MapWindowPoints(*(HWND *)(param_1 + 4),hWndTo_00,(LPPOINT)&param_3,1);
    if (((*(uint *)(param_1 + 0x4a4) & 8) != 0) && ((*(uint *)(param_1 + 0x4a4) & 0x400) == 0)) {
      FUN_01147990(param_1);
    }
    uVar7 = FUN_011487f0(param_1,param_2,param_3,param_4,bVar8);
    *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) | 0x400;
    return uVar7;
  }
  if (pHVar6 == hWndTo) {
    param_3 = LVar2;
    param_4 = LVar3;
    MapWindowPoints(*(HWND *)(param_1 + 4),hWndTo,(LPPOINT)&param_3,1);
    if (((*(uint *)(param_1 + 0x4a4) & 8) != 0) && ((*(uint *)(param_1 + 0x4a4) & 0x400) != 0)) {
      FUN_01147990(param_1);
    }
    uVar7 = FUN_01148ab0(param_1,param_2,param_3,param_4,bVar8);
    *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffbff;
    return uVar7;
  }
  if ((*(byte *)(param_1 + 0x4a4) & 8) != 0) {
    FUN_01147990(param_1);
  }
  return 0x7f88;
}


