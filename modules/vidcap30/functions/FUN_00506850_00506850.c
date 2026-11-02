/* Module: vidcap30.exe
   Function: FUN_00506850
   Address: 00506850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00506850(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  switch(param_2) {
  case 0x702:
    FUN_005005b0(param_4,param_1,0);
    return 0;
  case 0x703:
    FUN_00500220(param_4,param_1,0);
    FUN_00500820(param_1);
    FUN_00501360(param_1);
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x178),0);
    return 0;
  case 0x704:
    FUN_00500630(param_4,param_1,0);
    return 0;
  case 0x705:
    FUN_005002a0(param_4,param_1,0);
    FUN_00500820(param_1);
    FUN_00501360(param_1);
    InvalidateRect(*(HWND *)(param_1 + 8),(RECT *)(param_1 + 0x178),0);
    return 0;
  case 0x706:
    if (param_4 != (undefined4 *)0x0) {
      uVar1 = FUN_00500210(param_1);
      *param_4 = uVar1;
      return 0;
    }
    break;
  case 0x707:
    FUN_005001e0(param_1,param_4);
    FUN_00500820(param_1);
    return 0;
  case 0x708:
    FUN_005001c0(param_1,param_3);
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


