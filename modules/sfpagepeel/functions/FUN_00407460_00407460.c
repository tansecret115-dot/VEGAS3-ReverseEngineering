/* Module: sfpagepeel.dll
   Function: FUN_00407460
   Address: 00407460
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00407460(int *param_1,int *param_2,undefined4 param_3)

{
  ushort *puVar1;
  int *piVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 *puVar7;
  ushort local_20 [4];
  undefined4 local_18;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  piVar3 = param_2;
  if (param_1 == (int *)0x0) {
    local_8 = (int *)0x0;
  }
  else {
    local_8 = param_1 + -0x3b;
  }
  if (local_8 == (int *)0xffffff14) {
    local_8 = (int *)0x0;
  }
  local_10 = (undefined4 *)(DAT_00470064 + (int)local_8);
  param_1 = (int *)0x0;
  local_c = 0;
  if (PTR_DAT_0047c2c8 != (undefined *)0x0) {
    puVar4 = (ushort *)&DAT_0047c2c0;
    puVar6 = &DAT_0047c2d8;
    do {
      piVar2 = param_1;
      if (*(int *)puVar4 != 0) {
        local_20[0] = *puVar6;
        if (*(int *)(puVar6 + -2) == 0) {
          if (*(int *)(puVar6 + -6) != local_c) {
            if (param_1 != (int *)0x0) {
              param_1 = (int *)0x0;
              (**(code **)(*piVar2 + 8))(piVar2);
            }
            iVar5 = (**(code **)*local_10)(local_10,*(undefined4 *)(puVar6 + -6),&param_1);
            if (iVar5 < 0) {
              Ordinal_9(local_20);
              if (param_1 != (int *)0x0) {
                (**(code **)(*param_1 + 8))(param_1);
              }
              return 0x80004005;
            }
            local_c = *(int *)(puVar6 + -6);
          }
          iVar5 = FUN_004064f0(param_1,*(undefined4 *)(puVar6 + -10),local_20);
          if (iVar5 < 0) {
            Ordinal_9(local_20);
            if (param_1 != (int *)0x0) {
              (**(code **)(*param_1 + 8))(param_1);
            }
            return 0x80004005;
          }
          iVar5 = (**(code **)(*piVar3 + 0xc))
                            (piVar3,*(undefined4 *)(puVar6 + -0xc),local_20,param_3);
          if ((-1 < iVar5) &&
             (iVar5 = FUN_00406540(param_1,*(undefined4 *)(puVar6 + -10),local_20), iVar5 < 0)) {
            Ordinal_9(local_20);
            FUN_004061f0((int *)&param_1);
            return 0x80004005;
          }
          Ordinal_9(local_20);
        }
        else {
          puVar7 = (undefined4 *)(*(int *)(puVar6 + -4) + (int)local_8);
          iVar5 = (**(code **)(*piVar3 + 0xc))
                            (piVar3,*(undefined4 *)(puVar6 + -0xc),local_20,param_3);
          if (-1 < iVar5) {
            switch(*puVar6) {
            case 0xb:
              *(undefined2 *)puVar7 = (undefined2)local_18;
              break;
            case 0x10:
            case 0x11:
              *(undefined1 *)puVar7 = (undefined1)local_18;
              break;
            case 0x12:
              *(undefined2 *)puVar7 = (undefined2)local_18;
              break;
            case 0x13:
            case 0x16:
            case 0x17:
              *puVar7 = local_18;
            }
          }
          Ordinal_9(local_20);
        }
      }
      puVar1 = puVar6 + 6;
      puVar4 = puVar6 + 2;
      puVar6 = puVar6 + 0xe;
    } while (*(int *)puVar1 != 0);
  }
  FUN_004061f0((int *)&param_1);
  local_8[0x99] = 0;
  return 0;
}


