/* Module: vidpcore.dll
   Function: FUN_5df07260
   Address: 5df07260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5df07260(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  
  switch(param_2) {
  case 0x802:
    uVar1 = FUN_5df04510(param_1);
    return uVar1;
  case 0x803:
    FUN_5df04340(param_1,param_4);
    InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
    return 0;
  case 0x804:
    uVar1 = FUN_5df04600(param_1,param_3,param_4);
    return uVar1;
  case 0x805:
    uVar1 = FUN_5df045b0(param_1,param_3,param_4);
    return uVar1;
  case 0x806:
    uVar1 = FUN_5df05720(param_1);
    return uVar1;
  case 0x80b:
    FUN_5df044b0(param_1,param_3);
    return 0;
  case 0x80d:
    uVar1 = FUN_5df04660(param_1,param_3);
    return uVar1;
  case 0x80e:
    uVar1 = FUN_5df046c0(param_1,param_3);
    return uVar1;
  case 0x80f:
    InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
    break;
  case 0x810:
    uVar1 = FUN_5df04520(param_1,param_3);
    return uVar1;
  case 0x811:
    uVar1 = FUN_5df05730(param_1,param_3);
    return uVar1;
  case 0x812:
    *(double *)(param_1 + 0x480) = (double)param_3 * _DAT_5df1f300;
    *(double *)(param_1 + 0x488) = (double)param_4 * _DAT_5df1f300;
    return 0;
  case 0x813:
    *(double *)(param_1 + 0x490) = (double)param_3 * _DAT_5df1f300;
    *(double *)(param_1 + 0x498) = (double)param_4 * _DAT_5df1f300;
    return 0;
  case 0x814:
    uVar1 = FUN_5df04750(param_1,param_3);
    return uVar1;
  case 0x815:
    uVar1 = FUN_5df04720(param_1,param_3);
    return uVar1;
  case 0x81e:
    uVar1 = FUN_5df047a0(param_1,param_3);
    return uVar1;
  case 0x81f:
    uVar1 = FUN_5df04780(param_1,param_3);
    return uVar1;
  }
  return 0;
}


