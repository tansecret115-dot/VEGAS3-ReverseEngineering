/* Module: oggplug.dll
   Function: FUN_00426ac0
   Address: 00426ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00426ac0(int param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  undefined3 extraout_var;
  int iVar3;
  
  cVar2 = FUN_00424f30(param_2);
  uVar1 = param_2[1];
  iVar3 = (int)((ulonglong)param_2[6] / (ulonglong)(longlong)(int)(uint)uVar1) * (uint)uVar1;
  if (uVar1 == 1) {
    return 0;
  }
  switch(CONCAT31(extraout_var,cVar2)) {
  case 0x10:
    if (0 < param_4) {
      do {
        *(undefined1 *)(param_1 + param_3) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    break;
  case 0x11:
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_1 + param_3 * 2) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    break;
  case 0x12:
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 * 3 + param_1) = 0;
        *(undefined1 *)(param_3 * 3 + 2 + param_1) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
    break;
  case 0x13:
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_1 + param_3 * 4) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    break;
  default:
    return 0x80004005;
  case 0x20:
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_1 + param_3 * 4) = 0;
        param_1 = param_1 + iVar3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return 0;
    }
  }
  return 0;
}


