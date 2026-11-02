/* Module: vegas30.exe
   Function: FUN_0049b360
   Address: 0049b360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049b360(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_4;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (*param_2 < 1) {
    return 0;
  }
  local_4 = 0;
  piVar4 = (int *)FUN_0049b2e0(param_1,param_2,&local_4);
  piVar1 = (int *)(param_1 + 0xcd8);
  *piVar1 = (int)piVar4;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = *piVar4;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(uint *)(param_1 + 0x18) = (local_4 & 1) << 0x1b | *(uint *)(param_1 + 0x18) & 0xf7ffffff;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0x20000000;
  *(undefined4 *)(param_1 + 0x1ac) = 0xc0000000;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  uVar7 = *(uint *)(*(int *)(param_1 + 0xcec) + 0x18);
  param_2 = (int *)0x0;
  iVar2 = *(int *)(*(int *)(param_1 + 0xcec) + 0x1c);
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x98) - uVar7;
  *(uint *)(param_1 + 0x1a4) =
       (*(int *)(param_1 + 0x9c) - iVar2) - (uint)(*(uint *)(param_1 + 0x98) < uVar7);
  if (0 < iVar5) {
    do {
      iVar2 = *(int *)(*(int *)(*piVar1 + 8) + (int)param_2 * 4);
      iVar3 = *(int *)(iVar2 + 0x218);
      *(undefined4 *)(iVar3 + 0x80) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(iVar3 + 0x84) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar2 + 0x2c);
      *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar2 + 0x3c);
      *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xfeffffff | 0x800000;
      uVar7 = -*(int *)(iVar2 + 0x18);
      iVar3 = *(int *)(param_1 + 0x1ac);
      iVar6 = -(*(int *)(iVar2 + 0x1c) + (uint)(*(int *)(iVar2 + 0x18) != 0));
      if ((iVar6 <= iVar3) && ((iVar6 < iVar3 || (uVar7 < *(uint *)(param_1 + 0x1a8))))) {
        iVar6 = iVar3;
        uVar7 = *(uint *)(param_1 + 0x1a8);
      }
      *(uint *)(param_1 + 0x1a8) = uVar7;
      *(int *)(param_1 + 0x1ac) = iVar6;
      uVar7 = -*(int *)(iVar2 + 0x20);
      uVar8 = uVar7 - *(uint *)(iVar2 + 0x18);
      iVar6 = (((0x20000000 - *(int *)(iVar2 + 0x24)) - (uint)(*(int *)(iVar2 + 0x20) != 0)) -
              *(int *)(iVar2 + 0x1c)) - (uint)(uVar7 < *(uint *)(iVar2 + 0x18));
      iVar3 = *(int *)(param_1 + 0x1b4);
      if ((iVar3 <= iVar6) && ((iVar3 < iVar6 || (*(uint *)(param_1 + 0x1b0) < uVar8)))) {
        iVar6 = iVar3;
        uVar8 = *(uint *)(param_1 + 0x1b0);
      }
      *(uint *)(param_1 + 0x1b0) = uVar8;
      *(int *)(param_1 + 0x1b4) = iVar6;
      if (param_3 != 0) {
        FUN_00499f20(param_1,iVar2,piVar1,1);
      }
      param_2 = (int *)((int)param_2 + 1);
    } while ((int)param_2 < iVar5);
  }
  iVar5 = FUN_004aae50(param_1,*piVar1);
  *(int *)(param_1 + 0x16c) = iVar5;
  if (iVar5 != 0) {
    FUN_00455c70(param_1,4);
    *(uint *)**(undefined4 **)(param_1 + 0xbc8) = *(uint *)**(undefined4 **)(param_1 + 0xbc8) | 0x80
    ;
    return 1;
  }
  return 0;
}


