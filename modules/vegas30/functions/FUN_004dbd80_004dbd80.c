/* Module: vegas30.exe
   Function: FUN_004dbd80
   Address: 004dbd80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004dbf01) */

bool FUN_004dbd80(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_2 != (uint *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  if ((((param_1 == 0) || (DAT_00647630 == 0)) || (*(int *)(param_1 + 0xd94) == 0)) ||
     (*(int *)(param_1 + 0xd50) == 0)) {
    return false;
  }
  uVar2 = 0;
  FUN_004582a0(DAT_00647630,&local_18,&local_10);
  FUN_004582a0(param_1,&local_20,&local_8);
  switch((local_8 != 0 || local_4 != 0) ^ (local_10 != 0 || local_c != 0) << 1) {
  case '\0':
    if ((local_14 < 1) && (((local_14 < 0 || (local_18 == 0)) && (DAT_00647784 == 0)))) {
      uVar2 = 0;
      lVar3 = FUN_004dc020(param_1);
    }
    else {
      uVar2 = 2;
      lVar3 = FUN_004dc020(param_1);
    }
    goto LAB_004dbef7;
  case '\x01':
    if (((local_14 < 1) && ((local_14 < 0 || (local_18 == 0)))) && (DAT_00647784 == 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 3;
    }
    break;
  case '\x02':
    if (((local_1c < 1) && ((local_1c < 0 || (local_20 == 0)))) && (DAT_00647784 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
    uVar2 = iVar1 << 1;
    lVar3 = FUN_004dbf80(param_1);
LAB_004dbef7:
    if (CONCAT44(local_1c,local_20) < lVar3) {
      uVar2 = uVar2 ^ 1;
    }
    break;
  case '\x03':
    uVar2 = 7;
  }
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar2 & 1;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2 >> 1 & 1;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar2 >> 2;
  }
  return uVar2 != 0;
}


