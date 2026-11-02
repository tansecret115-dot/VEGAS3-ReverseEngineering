/* Module: vidpcore.dll
   Function: FUN_5de48a50
   Address: 5de48a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de48a50(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  undefined2 local_20 [4];
  undefined4 local_18;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_2;
  if (param_1 == (int *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = (int)param_1 + -0xec;
  }
  if (local_8 == -0xec) {
    local_8 = 0;
  }
  local_10 = (undefined4 *)(DAT_5df1bc64 + local_8);
  param_1 = (int *)0x0;
  local_c = 0;
  if (PTR_DAT_5df3d620 != (undefined *)0x0) {
    piVar3 = &DAT_5df3d618;
    puVar5 = &DAT_5df3d630;
    do {
      piVar1 = param_1;
      if (*piVar3 != 0) {
        local_20[0] = *puVar5;
        if (*(int *)(puVar5 + -2) == 0) {
          if (*(int *)(puVar5 + -6) != local_c) {
            if (param_1 != (int *)0x0) {
              param_1 = (int *)0x0;
              (**(code **)(*piVar1 + 8))(piVar1);
            }
            iVar4 = (**(code **)*local_10)(local_10,*(undefined4 *)(puVar5 + -6),&param_1);
            if (iVar4 < 0) {
              Ordinal_9(local_20);
              if (param_1 != (int *)0x0) {
                (**(code **)(*param_1 + 8))(param_1);
              }
              return 0x80004005;
            }
            local_c = *(int *)(puVar5 + -6);
          }
          iVar4 = FUN_5de09040(param_1,*(undefined4 *)(puVar5 + -10),local_20);
          if (iVar4 < 0) {
            Ordinal_9(local_20);
            if (param_1 != (int *)0x0) {
              (**(code **)(*param_1 + 8))(param_1);
            }
            return 0x80004005;
          }
          iVar4 = (**(code **)(*piVar2 + 0xc))
                            (piVar2,*(undefined4 *)(puVar5 + -0xc),local_20,param_3);
          if ((-1 < iVar4) &&
             (iVar4 = FUN_5de09090(param_1,*(undefined4 *)(puVar5 + -10),local_20), iVar4 < 0)) {
            Ordinal_9(local_20);
            FUN_5de09120();
            return 0x80004005;
          }
          Ordinal_9(local_20);
        }
        else {
          puVar6 = (undefined4 *)(*(int *)(puVar5 + -4) + local_8);
          iVar4 = (**(code **)(*piVar2 + 0xc))
                            (piVar2,*(undefined4 *)(puVar5 + -0xc),local_20,param_3);
          if (-1 < iVar4) {
            switch(*puVar5) {
            case 0xb:
              *(undefined2 *)puVar6 = (undefined2)local_18;
              break;
            case 0x10:
            case 0x11:
              *(undefined1 *)puVar6 = (undefined1)local_18;
              break;
            case 0x12:
              *(undefined2 *)puVar6 = (undefined2)local_18;
              break;
            case 0x13:
            case 0x16:
            case 0x17:
              *puVar6 = local_18;
            }
          }
          Ordinal_9(local_20);
        }
      }
      piVar1 = (int *)(puVar5 + 6);
      piVar3 = (int *)(puVar5 + 2);
      puVar5 = puVar5 + 0xe;
    } while (*piVar1 != 0);
  }
  FUN_5de09120();
  *(undefined4 *)(local_8 + 0x13c) = 0;
  return 0;
}


