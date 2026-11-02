/* Module: vegas30.exe
   Function: FUN_0049c150
   Address: 0049c150
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049c150(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_4;
  
  if (param_2 == (int *)0x0) {
    return 0;
  }
  if (0 < *param_2) {
    local_4 = 0;
    piVar3 = (int *)FUN_0049b2e0(param_1,param_2,&local_4);
    piVar4 = (int *)(param_1 + 0xcd8);
    *piVar4 = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      iVar8 = *piVar3;
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x198) = 0;
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      *(uint *)(param_1 + 0x18) = (local_4 & 1) << 0x1b | *(uint *)(param_1 + 0x18) & 0xf7ffffff;
      *(undefined4 *)(param_1 + 0x1b4) = 0x20000000;
      *(undefined4 *)(param_1 + 0x1ac) = 0xc0000000;
      *(undefined4 *)(param_1 + 0x19c) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = 0;
      param_2 = (int *)0x0;
      if (0 < iVar8) {
        do {
          iVar1 = *(int *)(*(int *)(*piVar4 + 8) + (int)param_2 * 4);
          iVar2 = *(int *)(iVar1 + 0x218);
          *(undefined4 *)(iVar2 + 0x80) = *(undefined4 *)(iVar1 + 0x18);
          *(undefined4 *)(iVar2 + 0x84) = *(undefined4 *)(iVar1 + 0x1c);
          *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(iVar1 + 0x28);
          *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(iVar1 + 0x2c);
          *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar1 + 0x3c);
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfeffffff | 0x800000;
          uVar6 = -*(int *)(iVar1 + 0x18);
          iVar2 = *(int *)(param_1 + 0x1ac);
          iVar5 = -(*(int *)(iVar1 + 0x1c) + (uint)(*(int *)(iVar1 + 0x18) != 0));
          if ((iVar5 <= iVar2) && ((iVar5 < iVar2 || (uVar6 < *(uint *)(param_1 + 0x1a8))))) {
            iVar5 = iVar2;
            uVar6 = *(uint *)(param_1 + 0x1a8);
          }
          *(uint *)(param_1 + 0x1a8) = uVar6;
          *(int *)(param_1 + 0x1ac) = iVar5;
          uVar6 = -*(int *)(iVar1 + 0x20);
          uVar7 = uVar6 - *(uint *)(iVar1 + 0x18);
          iVar5 = (((0x20000000 - *(int *)(iVar1 + 0x24)) - (uint)(*(int *)(iVar1 + 0x20) != 0)) -
                  *(int *)(iVar1 + 0x1c)) - (uint)(uVar6 < *(uint *)(iVar1 + 0x18));
          iVar2 = *(int *)(param_1 + 0x1b4);
          if ((iVar2 <= iVar5) && ((iVar2 < iVar5 || (*(uint *)(param_1 + 0x1b0) < uVar7)))) {
            iVar5 = iVar2;
            uVar7 = *(uint *)(param_1 + 0x1b0);
          }
          *(uint *)(param_1 + 0x1b0) = uVar7;
          *(int *)(param_1 + 0x1b4) = iVar5;
          if (param_4 != 0) {
            FUN_00499f20(param_1,iVar1,piVar4,1);
          }
          param_2 = (int *)((int)param_2 + 1);
        } while ((int)param_2 < iVar8);
      }
      iVar8 = 0;
      FUN_004a5900(param_1,*piVar4,0,0,param_3,1);
      FUN_004530a0(param_1,0);
      FUN_00456c20(param_1);
      if ((DAT_00647788 != 0) && (iVar1 = *(int *)*piVar4, 0 < iVar1)) {
        do {
          FUN_005cbf20(*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 8) + iVar8 * 4) + 8));
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar1);
      }
      iVar8 = 0;
      FUN_0049b100(param_1,piVar4);
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar1 = *piVar4;
      if (0 < iVar1) {
        do {
          iVar2 = *(int *)(piVar4[2] + iVar8 * 4);
          if ((*(uint *)(iVar2 + 0x10) & 0x100000) != 0) {
            if (DAT_0064778c != 0) {
              FUN_0047f450(iVar2,1);
            }
            *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xffefffff;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar1);
      }
      return 1;
    }
    return 0;
  }
  return 0;
}


