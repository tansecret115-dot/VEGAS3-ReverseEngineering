/* Module: vegas30.exe
   Function: FUN_005bd7b0
   Address: 005bd7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005bd7b0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  uint local_50 [4];
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar4 = 0;
  puVar5 = local_50;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_50[2] = *(undefined4 *)(param_1 + 4);
  local_50[1] = *(uint *)(param_1 + 0x10) & 0x3e01ffff;
  local_38 = *(undefined4 *)(param_1 + 0x20);
  local_3c = *(int *)(param_1 + 0x1c);
  local_34 = *(undefined4 *)(param_1 + 0x24);
  local_50[0] = 0x50;
  local_30 = 0xffffffff;
  local_40 = uVar1;
  if (*(LPCSTR *)(param_1 + 0xc) != (LPCSTR)0x0) {
    iVar3 = lstrlenA(*(LPCSTR *)(param_1 + 0xc));
    local_2c = iVar3 * 2 + 2;
  }
  local_28 = *(undefined4 *)(param_1 + 0x28);
  local_24 = *(undefined4 *)(param_1 + 0x2c);
  local_20 = *(undefined4 *)(param_1 + 0x40);
  local_1c = *(undefined4 *)(param_1 + 0x44);
  local_14 = *(undefined4 *)(param_1 + 0x4c);
  local_18 = 0;
  local_30 = FUN_005c6950(param_1);
  local_8 = *(int *)(param_1 + 0x38);
  local_c = *(undefined4 *)(param_1 + 0x34);
  local_10 = *(undefined4 *)(param_1 + 0x30);
  local_4 = *(undefined4 *)(param_1 + 0x3c);
  piVar6 = param_2;
  iVar3 = (**(code **)(*param_2 + 0x10))(param_2,local_50,0x50,0);
  if (((-1 < iVar3) &&
      (((local_3c == 0 ||
        (iVar3 = FUN_005bbe70(param_2,*(undefined4 *)(param_1 + 0xc),local_3c), -1 < iVar3)) &&
       (iVar3 = local_8, iVar2 = FUN_005bd500(param_2,local_8), -1 < iVar2)))) && (iVar3 != 0)) {
    FUN_005c68e0(param_1);
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2,&stack0xffffff9c,4,0);
    if (-1 < iVar2) {
      if (0 < (int)piVar6) {
        do {
          FUN_005c6910(param_1,iVar4);
          iVar2 = FUN_005bda40(param_2,iVar3);
          if (iVar2 < 0) {
            return;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)piVar6);
      }
      iVar4 = FUN_005bddf0(param_2,iVar3);
      if (-1 < iVar4) {
        switch(*(undefined4 *)(param_1 + 4)) {
        case 2:
          FUN_005bdb20(param_2,iVar3);
          return;
        case 3:
          FUN_005bdc20(param_2,iVar3);
          return;
        case 4:
          FUN_005bddd0(param_2,iVar3);
          return;
        case 5:
          FUN_005bdde0(param_2,iVar3);
        }
      }
    }
  }
  return;
}


