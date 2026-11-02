/* Module: rmme3260.dll
   Function: FUN_6620e110
   Address: 6620e110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6620e221) */
/* WARNING: Removing unreachable block (ram,0x6620e235) */
/* WARNING: Removing unreachable block (ram,0x6620e237) */
/* WARNING: Removing unreachable block (ram,0x6620e245) */
/* WARNING: Removing unreachable block (ram,0x6620e247) */
/* WARNING: Removing unreachable block (ram,0x6620e261) */
/* WARNING: Removing unreachable block (ram,0x6620e266) */
/* WARNING: Removing unreachable block (ram,0x6620e26b) */
/* WARNING: Removing unreachable block (ram,0x6620e24c) */
/* WARNING: Removing unreachable block (ram,0x6620e294) */
/* WARNING: Removing unreachable block (ram,0x6620e29c) */
/* WARNING: Removing unreachable block (ram,0x6620e2da) */
/* WARNING: Removing unreachable block (ram,0x6620e2dc) */
/* WARNING: Removing unreachable block (ram,0x6620e2e4) */
/* WARNING: Removing unreachable block (ram,0x6620e2e6) */

undefined4 * FUN_6620e110(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *extraout_ECX;
  undefined4 *puVar6;
  uint *puVar7;
  int *local_14;
  
  FUN_66269330();
  puVar6 = (undefined4 *)0x0;
  local_14 = param_1;
  *extraout_ECX = param_1;
  extraout_ECX[1] = 0;
  *(undefined2 *)(extraout_ECX + 2) = 0;
  (**(code **)(*param_1 + 4))();
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == 0) {
    pcVar3 = (char *)(**(code **)(iRam00000000 + 0x1c))();
    FUN_66264d70(&stack0xffffffdc,pcVar3);
    local_14 = (int *)0x0;
    *(short *)(extraout_ECX + 2) = (short)param_1;
    uVar4 = (uint)param_1 & 0xffff;
    puVar5 = operator_new(uVar4 * 0x10 + 4);
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)0x0;
    }
    else {
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
      puVar7 = puVar5;
      if (-1 < (int)(uVar4 - 1)) {
        do {
          FUN_6620e470(puVar7);
          uVar4 = uVar4 - 1;
          puVar7 = puVar7 + 4;
        } while (uVar4 != 0);
      }
    }
    extraout_ECX[1] = puVar5;
    uVar4 = 0;
    if (*(short *)(extraout_ECX + 2) != 0) {
      do {
        FUN_66265010(&stack0xffffffdc,uVar4,&local_14);
        (**(code **)(*local_14 + 0x30))();
        (**(code **)(*local_14 + 8))();
        uVar4 = uVar4 + 1;
      } while ((ushort)uVar4 < *(ushort *)(extraout_ECX + 2));
    }
    (**(code **)(iRam00000000 + 8))();
    FUN_66264fd0((int *)&stack0xffffffdc);
    return extraout_ECX;
  }
  puVar2 = operator_new(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    puVar6 = puVar2 + 1;
    *puVar2 = 1;
    FUN_6620e470(puVar6);
  }
  extraout_ECX[1] = puVar6;
  *(undefined2 *)(extraout_ECX + 2) = 1;
  return extraout_ECX;
}


