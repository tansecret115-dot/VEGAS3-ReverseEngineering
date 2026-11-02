/* Module: vfplugs.dll
   Function: FUN_004743e0
   Address: 004743e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004743e0(int param_1,undefined4 param_2,undefined4 *param_3,double *param_4)

{
  int iVar1;
  
  switch(param_2) {
  case 0x802:
    iVar1 = FUN_00471690(param_1);
    return iVar1;
  case 0x803:
    FUN_004714c0(param_1,param_4);
    InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
    return 0;
  case 0x804:
    iVar1 = FUN_00471780(param_1,(int)param_3,(undefined4 *)param_4);
    return iVar1;
  case 0x805:
    iVar1 = FUN_00471730(param_1,(int)param_3,(undefined4 *)param_4);
    return iVar1;
  case 0x806:
    iVar1 = FUN_004728a0(param_1);
    return iVar1;
  case 0x80b:
    FUN_00471630(param_1,(int)param_3);
    return 0;
  case 0x80d:
    iVar1 = FUN_004717e0(param_1,(int)param_3);
    return iVar1;
  case 0x80e:
    iVar1 = FUN_00471840(param_1,(uint)param_3);
    return iVar1;
  case 0x80f:
    InvalidateRect(*(HWND *)(param_1 + 0x2c0),(RECT *)0x0,0);
    break;
  case 0x810:
    iVar1 = FUN_004716a0(param_1,(int)param_3);
    return iVar1;
  case 0x811:
    iVar1 = FUN_004728b0(param_1,(int)param_3);
    return iVar1;
  case 0x812:
    *(double *)(param_1 + 0x480) = (double)param_3 * _DAT_00487e88;
    *(double *)(param_1 + 0x488) = (double)(int)param_4 * _DAT_00487e88;
    return 0;
  case 0x813:
    *(double *)(param_1 + 0x490) = (double)param_3 * _DAT_00487e88;
    *(double *)(param_1 + 0x498) = (double)(int)param_4 * _DAT_00487e88;
    return 0;
  case 0x814:
    iVar1 = FUN_004718d0(param_1,param_3);
    return iVar1;
  case 0x815:
    iVar1 = FUN_004718a0(param_1,param_3);
    return iVar1;
  case 0x81e:
    iVar1 = FUN_00471920(param_1,param_3);
    return iVar1;
  case 0x81f:
    iVar1 = FUN_00471900(param_1,param_3);
    return iVar1;
  }
  return 0;
}


