/* Module: wavplug.dll
   Function: FUN_5f3a9ce0
   Address: 5f3a9ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3a9ce0(undefined4 *param_1,ushort *param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined3 extraout_var;
  int iVar6;
  
  cVar5 = FUN_5f3a8010(param_2);
  uVar2 = param_2[1];
  iVar6 = (int)((ulonglong)param_2[6] / (ulonglong)(longlong)(int)(uint)uVar2) * (uint)uVar2;
  if (uVar2 == 1) {
    return 0;
  }
  switch(CONCAT31(extraout_var,cVar5)) {
  case 0x10:
    if (0 < param_3) {
      do {
        uVar1 = *(undefined1 *)param_1;
        *(undefined1 *)param_1 = *(undefined1 *)((int)param_1 + 1);
        *(undefined1 *)((int)param_1 + 1) = uVar1;
        param_1 = (undefined4 *)((int)param_1 + iVar6);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
    break;
  case 0x11:
    if (0 < param_3) {
      do {
        uVar3 = *(undefined2 *)param_1;
        *(undefined2 *)param_1 = *(undefined2 *)((int)param_1 + 2);
        *(undefined2 *)((int)param_1 + 2) = uVar3;
        param_1 = (undefined4 *)((int)param_1 + iVar6);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
    break;
  case 0x12:
    if (0 < param_3) {
      param_2 = (ushort *)param_3;
      do {
        uVar3 = *(undefined2 *)param_1;
        uVar1 = *(undefined1 *)((int)param_1 + 2);
        *(undefined2 *)param_1 = *(undefined2 *)((int)param_1 + 3);
        *(undefined2 *)((int)param_1 + 3) = uVar3;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_1 + 5);
        *(undefined1 *)((int)param_1 + 5) = uVar1;
        param_2 = (ushort *)((int)param_2 + -1);
        param_1 = (undefined4 *)((int)param_1 + iVar6);
      } while (param_2 != (ushort *)0x0);
      return 0;
    }
    break;
  case 0x13:
    if (0 < param_3) {
      do {
        uVar4 = *param_1;
        *param_1 = param_1[1];
        param_1[1] = uVar4;
        param_1 = (undefined4 *)((int)param_1 + iVar6);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    break;
  default:
    return 0x80004005;
  case 0x20:
    if (0 < param_3) {
      do {
        uVar4 = param_1[1];
        param_1[1] = *param_1;
        *param_1 = uVar4;
        param_1 = (undefined4 *)((int)param_1 + iVar6);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return 0;
    }
  }
  return 0;
}


