/* Module: sdpp3260.dll
   Function: FUN_10001360
   Address: 10001360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x100016bd) */

undefined4 FUN_10001360(int *param_1,int *param_2,undefined2 *param_3,undefined4 *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 local_3c [20];
  int local_28;
  int local_24;
  uint local_18;
  int local_14;
  int *local_10;
  char *local_c;
  int *local_8;
  
  FUN_100029c0(local_3c,param_1[3]);
  FUN_10002640(&local_28);
  pcVar2 = (char *)(**(code **)(*param_2 + 0x1c))(param_2);
  iVar3 = FUN_10002bf0(local_3c,pcVar2);
  if (iVar3 != 0) {
    FUN_10002690(&local_28);
    FUN_10002a10((int)local_3c);
    return 0x80004005;
  }
  local_8 = (int *)0x0;
  piVar4 = (int *)FUN_100058b0((int)local_3c);
  param_2 = piVar4;
  if (piVar4 != (int *)0x0) {
    puVar5 = operator_new(0x6c);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_LAB_100085a0;
      puVar5[1] = 0;
      FUN_10006080(puVar5 + 2,10);
      FUN_10006080(puVar5 + 9,10);
      FUN_10006080(puVar5 + 0x10,10);
      puVar5[0x17] = 0;
      puVar5[0x18] = 0;
      puVar5[0x19] = 0;
      puVar5[0x1a] = 0;
      *puVar5 = &PTR_FUN_10008560;
    }
    (**(code **)*puVar5)(puVar5,&DAT_10008110,&local_8);
    iVar3 = FUN_10005c60(piVar4);
    while (iVar3 != 0) {
      iVar6 = FUN_100058b0(iVar3);
      if (iVar6 == 0) {
        uVar7 = FUN_10005a40(iVar3);
        iVar6 = *local_8;
        uVar8 = FUN_100059c0(iVar3);
        (**(code **)(iVar6 + 0xc))(local_8,uVar8,uVar7);
      }
      else {
        iVar6 = FUN_100058b0(iVar3);
        if (iVar6 == 2) {
          piVar4 = (int *)FUN_10005a40(iVar3);
          param_1 = piVar4;
          puVar5 = operator_new(0x28);
          if (puVar5 == (undefined4 *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)FUN_10005ca0(puVar5);
          }
          (**(code **)(*piVar9 + 4))(piVar9);
          uVar10 = 0xffffffff;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            iVar6 = *piVar4;
            piVar4 = (int *)((int)piVar4 + 1);
          } while ((char)iVar6 != '\0');
          (**(code **)(*piVar9 + 0x10))(piVar9,param_1,~uVar10);
          iVar6 = *local_8;
          piVar4 = piVar9;
          uVar7 = FUN_100059c0(iVar3);
          (**(code **)(iVar6 + 0x2c))(local_8,uVar7,piVar4);
          (**(code **)(*piVar9 + 8))(piVar9);
        }
        else {
          iVar6 = FUN_100058b0(iVar3);
          if (iVar6 == 1) {
            uVar7 = FUN_10005a40(iVar3);
            iVar6 = *local_8;
            uVar8 = FUN_100059c0(iVar3);
            (**(code **)(iVar6 + 0x1c))(local_8,uVar8,uVar7);
          }
        }
      }
      iVar3 = FUN_10005c80((int)param_2);
    }
    piVar4 = (int *)FUN_10005830((int)local_3c);
    while (param_2 = piVar4, piVar4 != (int *)0x0) {
      param_1 = (int *)0x0;
      puVar5 = operator_new(0x6c);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = &PTR_LAB_100085a0;
        puVar5[1] = 0;
        FUN_10006080(puVar5 + 2,10);
        FUN_10006080(puVar5 + 9,10);
        FUN_10006080(puVar5 + 0x10,10);
        puVar5[0x17] = 0;
        puVar5[0x18] = 0;
        puVar5[0x19] = 0;
        puVar5[0x1a] = 0;
        *puVar5 = &PTR_FUN_10008560;
      }
      (**(code **)*puVar5)(puVar5,&DAT_10008110,&param_1);
      iVar3 = FUN_10005c60(piVar4);
      while (iVar3 != 0) {
        iVar6 = FUN_100058b0(iVar3);
        if (iVar6 == 0) {
          uVar7 = FUN_10005a40(iVar3);
          iVar6 = *param_1;
          uVar8 = FUN_100059c0(iVar3);
          (**(code **)(iVar6 + 0xc))(param_1,uVar8,uVar7);
        }
        else {
          iVar6 = FUN_100058b0(iVar3);
          if (iVar6 == 2) {
            pcVar2 = (char *)FUN_10005a40(iVar3);
            local_c = pcVar2;
            puVar5 = operator_new(0x28);
            if (puVar5 == (undefined4 *)0x0) {
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)FUN_10005ca0(puVar5);
            }
            (**(code **)(*piVar4 + 4))(piVar4);
            uVar10 = 0xffffffff;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar1 = *pcVar2;
              pcVar2 = pcVar2 + 1;
            } while (cVar1 != '\0');
            (**(code **)(*piVar4 + 0x10))(piVar4,local_c,~uVar10);
            iVar6 = *param_1;
            piVar9 = piVar4;
            uVar7 = FUN_100059c0(iVar3);
            (**(code **)(iVar6 + 0x2c))(param_1,uVar7,piVar9);
            (**(code **)(*piVar4 + 8))(piVar4);
          }
          else {
            iVar6 = FUN_100058b0(iVar3);
            if (iVar6 == 1) {
              uVar7 = FUN_10005a40(iVar3);
              iVar6 = *param_1;
              uVar8 = FUN_100059c0(iVar3);
              (**(code **)(iVar6 + 0x1c))(param_1,uVar8,uVar7);
            }
          }
        }
        iVar3 = FUN_10005c80((int)param_2);
      }
      FUN_10002770(&local_28,param_1);
      piVar4 = (int *)FUN_10005850((int)local_3c);
    }
  }
  uVar10 = (-(uint)(&stack0x00000000 != (undefined1 *)0x28) & local_18) + 1;
  *param_3 = (short)uVar10;
  puVar5 = operator_new((uVar10 & 0xffff) << 2);
  local_10 = &local_28;
  *puVar5 = local_8;
  uVar10 = 1;
  local_14 = local_24;
  while (local_14 != 0) {
    puVar11 = (undefined4 *)FUN_10002820(local_14);
    puVar5[uVar10 & 0xffff] = *puVar11;
    FUN_10002800(&local_14);
    uVar10 = uVar10 + 1;
  }
  *param_4 = puVar5;
  FUN_10002690(&local_28);
  FUN_10002a10((int)local_3c);
  return 0;
}


