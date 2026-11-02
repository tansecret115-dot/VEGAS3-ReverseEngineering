/* Module: vegas30.exe
   Function: FUN_0049c520
   Address: 0049c520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049c520(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_4;
  
  if (param_2 == 0) {
    return 0;
  }
  local_4 = 0;
  piVar3 = (int *)FUN_0049b2e0(param_1,param_2,&local_4);
  *(int **)(param_1 + 0xcd8) = piVar3;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  *(uint *)(param_1 + 0x18) = (local_4 & 1) << 0x1b | *(uint *)(param_1 + 0x18) & 0xf7ffffff;
  uVar6 = *(uint *)(*(int *)(param_1 + 0xcec) + 0x18);
  iVar1 = *(int *)(*(int *)(param_1 + 0xcec) + 0x1c);
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x98) - uVar6;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
  *(uint *)(param_1 + 0x1a4) =
       (*(int *)(param_1 + 0x9c) - iVar1) - (uint)(*(uint *)(param_1 + 0x98) < uVar6);
  *(undefined4 *)(param_1 + 0x1ac) = 0xc0000000;
  *(undefined4 *)(param_1 + 0x1b4) = 0x1fffffff;
  iVar1 = *piVar3;
  param_2 = 0;
  if (0 < iVar1) {
    do {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd8) + 8) + param_2 * 4);
      iVar2 = *(int *)(iVar5 + 0x218);
      *(undefined4 *)(iVar2 + 0x80) = *(undefined4 *)(iVar5 + 0x18);
      *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(iVar5 + 0x28);
      *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar5 + 0x3c);
      uVar6 = *(uint *)(iVar5 + 0x10);
      *(uint *)(iVar5 + 0x10) = uVar6 & 0xfeffffff | 0x800000;
      if ((uVar6 & 8) == 0) {
        iVar2 = *(int *)(param_1 + 0x1ac);
        uVar6 = -*(int *)(iVar5 + 0x18);
        iVar4 = -(*(int *)(iVar5 + 0x1c) + (uint)(*(int *)(iVar5 + 0x18) != 0));
        if ((iVar4 <= iVar2) && ((iVar4 < iVar2 || (uVar6 < *(uint *)(param_1 + 0x1a8))))) {
          iVar4 = iVar2;
          uVar6 = *(uint *)(param_1 + 0x1a8);
        }
        *(uint *)(param_1 + 0x1a8) = uVar6;
        *(int *)(param_1 + 0x1ac) = iVar4;
        uVar6 = -*(int *)(iVar5 + 0x20);
        uVar7 = uVar6 - *(uint *)(iVar5 + 0x18);
        iVar4 = (((0x20000000 - *(int *)(iVar5 + 0x24)) - (uint)(*(int *)(iVar5 + 0x20) != 0)) -
                *(int *)(iVar5 + 0x1c)) - (uint)(uVar6 < *(uint *)(iVar5 + 0x18));
        iVar2 = *(int *)(param_1 + 0x1b4);
        if ((iVar2 <= iVar4) && ((iVar2 < iVar4 || (*(uint *)(param_1 + 0x1b0) < uVar7)))) {
          iVar4 = iVar2;
          uVar7 = *(uint *)(param_1 + 0x1b0);
        }
        *(uint *)(param_1 + 0x1b0) = uVar7;
        *(int *)(param_1 + 0x1b4) = iVar4;
      }
      if (DAT_00649e0c == 0) {
        FUN_00499f20(param_1,iVar5,param_1 + 0xcd8,1);
      }
      param_2 = param_2 + 1;
    } while (param_2 < iVar1);
  }
  iVar1 = **(int **)(param_1 + 0xcd8);
  for (; param_2 < iVar1; param_2 = param_2 + 1) {
    iVar5 = *(int *)((*(int **)(param_1 + 0xcd8))[2] + param_2 * 4);
    if ((*(byte *)(iVar5 + 0x10) & 8) == 0) {
      iVar2 = *(int *)(param_1 + 0x1ac);
      uVar6 = -*(int *)(iVar5 + 0x18);
      iVar4 = -(*(int *)(iVar5 + 0x1c) + (uint)(*(int *)(iVar5 + 0x18) != 0));
      if ((iVar4 <= iVar2) && ((iVar4 < iVar2 || (uVar6 < *(uint *)(param_1 + 0x1a8))))) {
        iVar4 = iVar2;
        uVar6 = *(uint *)(param_1 + 0x1a8);
      }
      *(uint *)(param_1 + 0x1a8) = uVar6;
      *(int *)(param_1 + 0x1ac) = iVar4;
      uVar6 = -*(int *)(iVar5 + 0x20);
      iVar2 = *(int *)(param_1 + 0x1b4);
      uVar7 = uVar6 - *(uint *)(iVar5 + 0x18);
      iVar5 = (((0x20000000 - *(int *)(iVar5 + 0x24)) - (uint)(*(int *)(iVar5 + 0x20) != 0)) -
              *(int *)(iVar5 + 0x1c)) - (uint)(uVar6 < *(uint *)(iVar5 + 0x18));
      if ((iVar2 <= iVar5) && ((iVar2 < iVar5 || (*(uint *)(param_1 + 0x1b0) < uVar7)))) {
        iVar5 = iVar2;
        uVar7 = *(uint *)(param_1 + 0x1b0);
      }
      *(uint *)(param_1 + 0x1b0) = uVar7;
      *(int *)(param_1 + 0x1b4) = iVar5;
    }
  }
  FUN_004e9f70(*(undefined4 *)(param_1 + 0xbc8),(iVar1 != 1) + '\x18',0);
  FUN_0046ba30(param_1,*(undefined4 *)(param_1 + 0xcd8));
  if (*(int *)(param_1 + 0xbc8) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
  }
  iVar1 = *piVar3;
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(piVar3[2] + iVar5 * 4);
      if ((*(uint *)(iVar2 + 0x10) & 0x100000) != 0) {
        if (DAT_00647788 != 0) {
          FUN_005ce720(iVar2);
        }
        if (DAT_0064778c != 0) {
          FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar2,0xf,0);
          FUN_0047f380(iVar2);
        }
        FUN_004ea250(*(undefined4 *)(param_1 + 0xbc8),iVar2,1,0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return 1;
}


