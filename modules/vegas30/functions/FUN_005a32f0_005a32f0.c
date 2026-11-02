/* Module: vegas30.exe
   Function: FUN_005a32f0
   Address: 005a32f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005a32f0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  iVar6 = 0;
  if (param_2 != (int *)0x0) {
    if ((*param_2 != 0) && (iVar6 = FUN_004ea750(param_1,*param_2,2,0), -1 < iVar6)) {
      iVar3 = *param_2;
      local_28 = param_2[2] - *(uint *)(iVar3 + 0x18);
      local_24 = (param_2[3] - *(int *)(iVar3 + 0x1c)) -
                 (uint)((uint)param_2[2] < *(uint *)(iVar3 + 0x18));
      if ((local_24 < 1) && ((local_24 < 0 || (local_28 < 2)))) {
        local_28 = 1;
        local_24 = 0;
      }
      FUN_005c7760(iVar3,0,&local_28,2,0);
      iVar3 = *param_2;
      *(int *)(iVar3 + 0x80) = param_2[8];
      *(int *)(iVar3 + 0x84) = param_2[9];
      *(uint *)(*param_2 + 0x58) = *(uint *)(*param_2 + 0x58) | 0x100;
    }
    if ((param_2[4] != 0) && (iVar6 = FUN_004ea750(param_1,param_2[4],2,0), -1 < iVar6)) {
      iVar3 = param_2[4];
      uVar7 = *(uint *)(iVar3 + 0x18) - param_2[6];
      iVar5 = (*(int *)(iVar3 + 0x1c) - param_2[7]) -
              (uint)(*(uint *)(iVar3 + 0x18) < (uint)param_2[6]);
      local_1c = iVar5;
      local_8 = uVar7;
      if ((((*(uint *)(iVar3 + 0x10) & 0x100) == 0) &&
          (FUN_005c71f0(param_1,iVar3,0,0,&local_18,1), -1 < local_14)) &&
         ((0 < local_14 || (local_18 != 0)))) {
        uVar4 = *(uint *)(*(int *)(param_2[4] + 0x50) + 8);
        iVar3 = *(int *)(*(int *)(param_2[4] + 0x50) + 0xc);
        if ((iVar3 <= iVar5) && ((iVar3 < iVar5 || (uVar4 < uVar7)))) {
          uVar7 = uVar4;
          local_1c = iVar3;
        }
      }
      iVar3 = param_2[4];
      local_10 = *(uint *)(iVar3 + 0x18) - uVar7;
      local_c = (*(int *)(iVar3 + 0x1c) - local_1c) - (uint)(*(uint *)(iVar3 + 0x18) < uVar7);
      uVar4 = *(uint *)(iVar3 + 0x20) - local_10;
      local_28 = uVar4 + *(uint *)(iVar3 + 0x18);
      local_24 = ((*(int *)(iVar3 + 0x24) - local_c) - (uint)(*(uint *)(iVar3 + 0x20) < local_10)) +
                 *(int *)(iVar3 + 0x1c) + (uint)CARRY4(uVar4,*(uint *)(iVar3 + 0x18));
      if ((local_24 < 1) && ((local_24 < 0 || (local_28 == 0)))) {
        local_28 = 1;
        local_24 = 0;
      }
      FUN_005c7760(iVar3,&local_10,&local_28,3,0);
      uVar4 = param_2[8];
      iVar3 = param_2[4];
      uVar2 = uVar4 - local_8;
      iVar1 = param_2[9];
      *(uint *)(iVar3 + 0x78) = uVar2 + uVar7;
      *(uint *)(iVar3 + 0x7c) =
           ((iVar1 - iVar5) - (uint)(uVar4 < local_8)) + local_1c + (uint)CARRY4(uVar2,uVar7);
      if (uVar7 == 0 && local_1c == 0) {
        *(uint *)(param_2[4] + 0x58) = *(uint *)(param_2[4] + 0x58) | 0x20;
        iVar3 = *(int *)(param_2[4] + 0x3c) + 1;
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        *(int *)(param_2[4] + 0x3c) = iVar3;
        *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
        iVar3 = *(int *)(param_2[4] + 8);
        if (iVar3 != 0) {
          *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x200000;
          *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
        }
      }
      *(uint *)(param_2[4] + 0x58) = *(uint *)(param_2[4] + 0x58) | 0x100;
      return iVar6;
    }
  }
  return iVar6;
}


