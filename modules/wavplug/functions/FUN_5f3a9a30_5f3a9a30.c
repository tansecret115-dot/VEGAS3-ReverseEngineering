/* Module: wavplug.dll
   Function: FUN_5f3a9a30
   Address: 5f3a9a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3a9a30(int param_1,ushort *param_2,int param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  ushort uVar2;
  char cVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined2 *puVar5;
  
  cVar3 = FUN_5f3a8010(param_2);
  uVar2 = param_2[1];
  iVar4 = (int)((ulonglong)param_2[6] / (ulonglong)(longlong)(int)(uint)uVar2) * (uint)uVar2;
  if (uVar2 == 1) {
    return 0;
  }
  switch(CONCAT31(extraout_var,cVar3)) {
  case 0x10:
    if (0 < param_5) {
      do {
        *(undefined1 *)(param_1 + param_4) = *(undefined1 *)(param_1 + param_3);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x11:
    if (0 < param_5) {
      do {
        *(undefined2 *)(param_1 + param_4 * 2) = *(undefined2 *)(param_1 + param_3 * 2);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x12:
    if (0 < param_5) {
      do {
        puVar1 = (undefined2 *)(param_3 * 3 + param_1);
        puVar5 = (undefined2 *)(param_4 * 3 + param_1);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
        *puVar5 = *puVar1;
        *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar1 + 1);
      } while (param_5 != 0);
      return 0;
    }
    break;
  case 0x13:
    if (0 < param_5) {
      do {
        *(undefined4 *)(param_1 + param_4 * 4) = *(undefined4 *)(param_1 + param_3 * 4);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    break;
  default:
    return 0x80004005;
  case 0x20:
    if (0 < param_5) {
      do {
        *(undefined4 *)(param_1 + param_4 * 4) = *(undefined4 *)(param_1 + param_3 * 4);
        param_1 = param_1 + iVar4;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      return 0;
    }
  }
  return 0;
}


