/* Module: sftrkfx1.dll
   Function: FUN_5cbaa6e0
   Address: 5cbaa6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cbaa6e0(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = 0;
  if ((param_3 != 0) && (param_4 < *(uint *)(param_3 + 0x28))) {
    iVar1 = param_4 * 0x20 + 0x30 + param_3;
  }
  switch(param_2) {
  case 0x1393:
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x14) = (uint)(*(int *)(iVar1 + 0x14) == 0);
      return 1;
    }
    break;
  case 0x1394:
    if ((iVar1 != 0) && (*(float *)(iVar1 + 4) != _DAT_5cc03f24)) {
      *(undefined4 *)(iVar1 + 4) = 0;
      return 1;
    }
    break;
  case 0x1395:
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 1)) {
      *(undefined4 *)(iVar1 + 0x10) = 1;
      return 1;
    }
    break;
  case 0x1396:
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 2)) {
      *(undefined4 *)(iVar1 + 0x10) = 2;
      return 1;
    }
    break;
  case 0x1397:
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 3)) {
      *(undefined4 *)(iVar1 + 0x10) = 3;
      uVar2 = 1;
    }
  }
  return uVar2;
}


