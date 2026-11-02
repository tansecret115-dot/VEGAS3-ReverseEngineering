/* Module: vegas30k.dll
   Function: FUN_01176f70
   Address: 01176f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01176f70(int param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    return 0x8000ffff;
  }
  switch(param_3) {
  case 0:
    uVar2 = FUN_01177b20();
    *param_2 = uVar2;
    return 0;
  case 1:
    if (*(int *)(param_1 + 0xb4) != 0) {
      FUN_01191690(*(int *)(param_1 + 0xb4),param_2);
      return 0;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_0118f360(param_2);
      return 0;
    }
    break;
  default:
    return 1;
  case 8:
    if ((*(int *)(param_1 + 0xbc) == 0) || (iVar1 = FUN_0118e340(param_2), iVar1 != 0)) {
      uVar2 = FUN_01177b20();
      *param_2 = uVar2;
    }
    return 0;
  case 0x10:
    uVar2 = FUN_01177e50();
    *param_2 = uVar2;
    return 0;
  }
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  return 1;
}


