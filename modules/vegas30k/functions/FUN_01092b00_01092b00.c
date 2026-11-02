/* Module: vegas30k.dll
   Function: FUN_01092b00
   Address: 01092b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01092b00(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  switch(param_2) {
  case 0x702:
    FUN_0108c860(param_4,param_1,0);
    return 0;
  case 0x703:
    FUN_0108c4d0(param_4,param_1,0);
    FUN_0108cad0(param_1);
    FUN_0108d610(param_1);
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x178),0);
    return 0;
  case 0x704:
    FUN_0108c8e0(param_4,param_1,0);
    return 0;
  case 0x705:
    FUN_0108c550(param_4,param_1,0);
    FUN_0108cad0(param_1);
    FUN_0108d610(param_1);
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x178),0);
    return 0;
  case 0x706:
    if (param_4 != (undefined4 *)0x0) {
      uVar1 = FUN_0108c4c0(param_1);
      *param_4 = uVar1;
      return 0;
    }
    break;
  case 0x707:
    FUN_0108c490(param_1,param_4);
    FUN_0108cad0(param_1);
    return 0;
  case 0x708:
    FUN_0108c470(param_1,param_3);
    return 0;
  case 0x709:
    uVar2 = (param_3 & 1) << 1 | *(uint *)(param_1 + 4) & 0xfffffffd;
    *(uint *)(param_1 + 4) = uVar2;
    if (*(HWND *)(param_1 + 0x2e8) != (HWND)0x0) {
      EnableWindow(*(HWND *)(param_1 + 0x2e8),(int)(uVar2 << 0x1e) >> 0x1f);
    }
  }
  return 0;
}


