/* Module: vegas30.exe
   Function: FUN_0046d230
   Address: 0046d230
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046d230(int param_1,uint param_2,int param_3,uint param_4,int param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_20;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  piVar6 = (int *)FUN_005b87b0(uVar1);
  iVar2 = *piVar6;
  local_20 = 0;
  FUN_005b83b0(uVar1,1);
  param_1 = 0;
  if (0 < iVar2) {
    iVar7 = param_5 + (uint)(0xfffffffd < param_4);
    iVar11 = param_3 - (uint)(param_2 == 0);
    do {
      iVar3 = *(int *)(piVar6[2] + param_1 * 4);
      for (iVar8 = FUN_005cade0(uVar1,iVar3,0,param_2 - 1,iVar11,param_4 + 2,iVar7,0); -1 < iVar8;
          iVar8 = FUN_005cade0(uVar1,iVar3,iVar8 + 1,param_2 - 1,iVar11,param_4 + 2,iVar7,0)) {
        iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 0x24) + 8) + iVar8 * 4);
        iVar9 = FUN_005d9be0(uVar1,0,iVar4);
        if (((iVar9 != 0) && ((*(uint *)(iVar4 + 0x10) & 8) == 0)) &&
           ((*(uint *)(iVar4 + 0x10) & 0x100000) == 0)) {
          iVar9 = *(int *)(iVar4 + 0x1c);
          uVar5 = *(uint *)(iVar4 + 0x18);
          if ((param_3 <= iVar9) && ((param_3 < iVar9 || (param_2 <= uVar5)))) {
            iVar9 = *(int *)(iVar4 + 0x24) + iVar9 + (uint)CARRY4(*(uint *)(iVar4 + 0x20),uVar5);
            iVar10 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
            if ((iVar9 <= iVar10) &&
               ((iVar9 < iVar10 || (*(uint *)(iVar4 + 0x20) + uVar5 <= param_2 + param_4)))) {
              local_20 = local_20 + 1;
              *(undefined4 *)(*(int *)(iVar4 + 0x218) + 0xa0) = param_6;
            }
          }
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar2);
  }
  FUN_005b84d0(uVar1,1);
  return local_20;
}


