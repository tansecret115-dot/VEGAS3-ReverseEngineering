/* Module: vegas30k.dll
   Function: FUN_01195720
   Address: 01195720
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_01195720(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  undefined4 uVar6;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = 0;
  local_10 = 0;
  local_14 = 0;
  if (*(code **)(param_1 + 0x64c) == (code *)0x0) {
    return 0xffffffff;
  }
  switch(param_3) {
  case 0x20:
    puVar3 = &local_14;
    uVar6 = 0x50;
    piVar5 = param_2;
    (**(code **)(*param_2 + 0x8c))(param_2,0x50);
    if ((*(int *)(param_1 + 0x600) != 2) && (*(int *)(param_1 + 0x600) != 3)) {
      (**(code **)(*param_2 + 0x8c))(param_2,0x32,&stack0xffffffe4);
    }
    (**(code **)(*param_2 + 0x8c))(param_2,0xf,auStack_18);
    if ((param_6 & 0x20000000) != 0) {
      piVar5 = (int *)((uint)piVar5 | 0x20000000);
    }
    if ((param_6 & 0x10000000) != 0) {
      piVar5 = (int *)((uint)piVar5 | 0x10000000);
    }
    if ((param_6 & 0x4000000) != 0) {
      piVar5 = (int *)((uint)piVar5 | 0x4000000);
    }
    if ((param_6 & 0x1000000) != 0) {
      puVar3 = (undefined4 *)&DAT_00000010;
    }
    if ((param_6 & 0x8000000) != 0) {
      piVar5 = (int *)((uint)piVar5 | 0x8000000);
    }
    uVar4 = (uint)puVar3 & 0xffffff7f;
    uVar2 = 0xfffffffe;
    if (uVar4 == 2) {
      if ((*(byte *)(param_1 + 8) & 2) != 0) {
        uVar2 = (**(code **)(param_1 + 0x64c))
                          (param_1,0x21,*(undefined4 *)(param_1 + 0x650),param_4,param_5,uVar6,
                           piVar5,param_7,param_8,param_9,param_10,param_11,param_13,param_14);
        return uVar2;
      }
    }
    else if (uVar4 == 4) {
      if (((*(uint *)(param_1 + 8) & 2) != 0) || ((*(uint *)(param_1 + 8) & 0x4000) != 0)) {
        uVar2 = (**(code **)(param_1 + 0x64c))
                          (param_1,0x22,*(undefined4 *)(param_1 + 0x650),param_4,param_5,uVar6,
                           piVar5,param_7,param_8,param_9,param_10,param_11,param_13,param_14);
        return uVar2;
      }
    }
    else {
      uVar1 = *(uint *)(param_1 + 8);
      if (uVar4 == 0x10) {
        if ((uVar1 & 0x400) != 0) {
          uVar2 = (**(code **)(param_1 + 0x64c))
                            (param_1,0x23,*(undefined4 *)(param_1 + 0x650),param_4,param_5,uVar6,
                             piVar5,param_7,param_8,param_9,param_10,param_11,param_13,param_14);
          return uVar2;
        }
      }
      else if (((uVar1 & 2) != 0) || ((uVar1 & 0x4000) != 0)) {
        uVar2 = (**(code **)(param_1 + 0x64c))
                          (param_1,param_3,*(undefined4 *)(param_1 + 0x650),param_4,param_5,uVar6,
                           piVar5,param_7,param_8,param_9,param_10,param_11,param_13,param_14);
        return uVar2;
      }
    }
    break;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
    (**(code **)(*param_2 + 0x8c))(param_2,0x50,&local_14);
    if ((*(int *)(param_1 + 0x600) != 2) && (*(int *)(param_1 + 0x600) != 3)) {
      unaff_EDI = unaff_EDI | 0x2000000;
      (**(code **)(*param_2 + 0x8c))(param_2,0x32,&stack0xffffffe4);
    }
    uVar2 = (**(code **)(param_1 + 0x64c))
                      (param_1,param_3,*(undefined4 *)(param_1 + 0x650),param_4,param_5,unaff_ESI,
                       unaff_EDI,param_7,param_8,param_9,param_10,param_11,param_13,param_14);
    break;
  case 0x50:
    uVar2 = (**(code **)(param_1 + 0x64c))
                      (param_1,param_3,*(undefined4 *)(param_1 + 0x650),param_4,param_5,0,0,param_7,
                       param_8,param_9,param_10,param_11,param_13,param_14);
    return uVar2;
  }
  return uVar2;
}


