/* Module: vegas30.exe
   Function: FUN_0047e030
   Address: 0047e030
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0047e030(int param_1,int param_2,undefined4 param_3,uint param_4,int param_5,uint param_6,
                int param_7,int param_8)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  local_8 = 0;
  if ((param_7 < 1) && (param_7 < 0)) {
    uVar5 = *(uint *)(param_2 + 0x10) + *(uint *)(param_2 + 8);
    param_6 = uVar5 - param_4;
    param_7 = ((*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0xc) +
               (uint)CARRY4(*(uint *)(param_2 + 0x10),*(uint *)(param_2 + 8))) - param_5) -
              (uint)(uVar5 < param_4);
    if ((param_7 < 1) && (param_7 < 0)) {
      param_6 = 0;
      param_7 = 0;
    }
  }
  if (*(int **)(param_2 + 0x18) == (int *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(uint *)(param_1 + 0x10) = param_6;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)(param_1 + 0x14) = param_7;
    *(undefined4 *)(param_1 + 0x50) = param_3;
    return 0;
  }
  iVar1 = **(int **)(param_2 + 0x18);
  local_c = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(param_2 + 0x18);
      if (piVar2 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *piVar2;
      }
      if ((local_c < 0) || (iVar6 + -1 < local_c)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(piVar2[2] + local_c * 4);
      }
      if ((iVar6 != 0) && ((param_8 < 0 || (param_8 == *(int *)(iVar6 + 0x10))))) {
        uVar5 = **(uint **)(iVar6 + 0x30);
        if (uVar5 != 0) {
          uVar3 = (*(uint **)(iVar6 + 0x30))[2];
          if (2 < uVar5) {
            iVar7 = param_5 + param_7 + (uint)CARRY4(param_4,param_6);
            puVar4 = (uint *)((uVar5 - 2) * 0x10 + uVar3);
            do {
              if (((int)puVar4[1] < iVar7) ||
                 (((int)puVar4[1] <= iVar7 && (*puVar4 < param_4 + param_6)))) break;
              uVar5 = uVar5 - 1;
              puVar4 = puVar4 + -4;
            } while (2 < uVar5);
          }
          FUN_0047c810(param_1,*(undefined4 *)(iVar6 + 0x10));
          local_8 = FUN_0047c730(param_1,param_3,*(undefined4 *)(param_2 + 8),
                                 *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                                 *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(iVar6 + 0x20),
                                 *(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(iVar6 + 0x28),
                                 *(undefined4 *)(iVar6 + 0x10),uVar5,uVar3);
          if (local_8 < 0) break;
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar1);
  }
  if (DAT_00647790 != 0) {
    FUN_0047cbf0(param_1,param_4,param_5,param_6,param_7,param_8);
    return local_8;
  }
  if (param_4 != 0 || param_5 != 0) {
    FUN_0047c990(param_1,param_4,param_5,param_8);
  }
  FUN_0047c870(param_1,param_6,param_7);
  return local_8;
}


