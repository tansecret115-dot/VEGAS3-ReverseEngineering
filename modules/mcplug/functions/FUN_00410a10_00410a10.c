/* Module: mcplug.dll
   Function: FUN_00410a10
   Address: 00410a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00410a10(void *param_1)

{
  HWND pHVar1;
  
  if (((*(int *)((int)param_1 + 0x40) != 0) && (*(int *)((int)param_1 + 0x44) != 0)) &&
     (pHVar1 = *(HWND *)((int)param_1 + 0x10), pHVar1 != (HWND)0x0)) {
    switch(*(undefined4 *)((int)param_1 + 0x18)) {
    case 0x3ed:
    case 0x3f4:
    case 0x3f9:
      FUN_004113b0(param_1,pHVar1);
      break;
    case 0x3ee:
    case 0x3f3:
    case 0x3f8:
      FUN_00411e30(param_1,pHVar1);
      break;
    case 0x3ef:
    case 0x3f2:
    case 0x3f7:
      FUN_004137c0(param_1,pHVar1);
      break;
    case 0x3f0:
    case 0x3f1:
    case 0x3f6:
      FUN_00414640(param_1,pHVar1);
      break;
    default:
      FUN_00410ac0(param_1,pHVar1);
    }
    FUN_00415880(*(HWND *)((int)param_1 + 0x10),*(int *)((int)param_1 + 0x5c));
    return 1;
  }
  return 0;
}


