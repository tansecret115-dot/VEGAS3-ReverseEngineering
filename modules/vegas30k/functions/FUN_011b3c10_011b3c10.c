/* Module: vegas30k.dll
   Function: FUN_011b3c10
   Address: 011b3c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_011b3c10(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  int *piStack_54;
  uint local_24 [5];
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0x10) == 0)) {
    return 0x4e001;
  }
  iVar3 = 4;
  bVar8 = true;
  piVar4 = &DAT_011dab90;
  piVar5 = (int *)(param_1 + 0x30);
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar8 = *piVar4 == *piVar5;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (bVar8);
  if (bVar8) {
    return 0x80004005;
  }
  piStack_54 = (int *)0x0;
  *(undefined4 *)(param_1 + 0x164) = *param_2;
  *(undefined4 *)(param_1 + 0x168) = param_2[1];
  *(undefined4 *)(param_1 + 0x16c) = param_2[2];
  *(undefined4 *)(param_1 + 0x170) = param_2[3];
  uVar1 = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x9c4) = 2;
  *(undefined2 *)(param_1 + 0x174) = uVar1;
  *(undefined4 *)(param_1 + 0x188) = param_3;
  *(undefined4 *)(param_1 + 0x18c) = param_4;
  *(undefined4 *)(param_1 + 0x15c) = param_5;
  *(undefined4 *)(param_1 + 0x160) = param_6;
  puVar6 = local_24;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_10 = *(int **)(param_1 + 0x168);
  local_24[4] = (uint)*(ushort *)(param_1 + 0x166);
  local_24[0] = 0x24;
  local_24[1] = 0x6f;
  local_24[2] = 0x200;
  local_24[3] = 2;
  local_c = 0;
  local_8 = 1;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x18) + 0x14))
                    (*(int **)(param_1 + 0x18),(int *)(param_1 + 0x30),local_24,param_1 + 0x1c);
  piVar4 = local_10;
  if ((-1 < iVar3) &&
     (iVar3 = (*(code *)**(undefined4 **)*local_10)
                        ((undefined4 *)*local_10,&DAT_011edb50,&piStack_54), -1 < iVar3)) {
    puVar7 = (undefined4 *)&stack0xffffffb0;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    iVar3 = *(int *)(param_1 + 4);
    uStack_4 = 0;
    iVar2 = (**(code **)(*piStack_54 + 0xc))
                      (piStack_54,&stack0xffffffb0,0x18,&stack0x00000000,4,&uStack_4);
    piVar4 = local_10;
    if (-1 < iVar2) {
      if (2 < (uint)(*(int *)(param_1 + 4) - iVar3)) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
      }
      (**(code **)(*piStack_54 + 8))(piStack_54);
      local_10 = (int *)0x12;
      (**(code **)(**(int **)(param_1 + 0x20) + 0x48))
                (*(int **)(param_1 + 0x20),param_1 + 0x176,&local_10);
      if (((*(int *)(param_1 + 0x19c) != 0) ||
          (iVar3 = FUN_011b2720(param_1 + 0x19c), piVar4 = local_10, -1 < iVar3)) &&
         (iVar3 = FUN_011b3b80(), piVar4 = local_10, -1 < iVar3)) {
        piVar4 = *(int **)(param_1 + 0xc70);
        *(undefined4 *)(param_1 + 400) = 0;
        *(undefined4 *)(param_1 + 0x194) = 0;
        *(undefined4 *)(param_1 + 0x1a8) = 0;
        *(undefined4 *)(param_1 + 0x1ac) = 0;
        *(undefined4 *)(param_1 + 0x1b0) = 0;
        *(undefined4 *)(param_1 + 0x1b4) = 0;
        *(undefined4 *)(param_1 + 0x1b8) = 0;
        *(undefined4 *)(param_1 + 0x1bc) = 0;
        if (piVar4 == (int *)0x0) {
          return 0;
        }
        (**(code **)(*piVar4 + 0x14))
                  (piVar4,param_1 + 0x176,*(undefined4 *)(param_1 + 0x188),
                   *(undefined4 *)(param_1 + 0x18c),0,0);
        return 0;
      }
    }
  }
  if (piStack_54 != (int *)0x0) {
    (**(code **)(*piStack_54 + 8))(piStack_54);
  }
  piVar5 = (int *)*piVar4;
  piStack_54 = (int *)0x0;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  *piVar4 = 0;
  return 0;
}


