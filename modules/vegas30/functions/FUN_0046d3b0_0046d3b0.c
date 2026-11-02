/* Module: vegas30.exe
   Function: FUN_0046d3b0
   Address: 0046d3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0046d3b0(int param_1,uint param_2,int param_3,uint param_4,int param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_10;
  int local_c;
  
  local_10 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  iVar2 = **(int **)(param_1 + 0xcd0);
  FUN_005b83b0(uVar1,1);
  local_c = 0;
  if (0 < iVar2) {
    do {
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd0) + 8) + local_c * 4);
      iVar5 = FUN_005d9be0(uVar1,0,iVar3);
      if (((iVar5 != 0) && ((*(uint *)(iVar3 + 0x10) & 8) == 0)) &&
         ((*(uint *)(iVar3 + 0x10) & 0x100000) == 0)) {
        iVar5 = *(int *)(iVar3 + 0x1c);
        uVar4 = *(uint *)(iVar3 + 0x18);
        if ((param_3 <= iVar5) && ((param_3 < iVar5 || (param_2 <= uVar4)))) {
          iVar5 = *(int *)(iVar3 + 0x24) + iVar5 + (uint)CARRY4(*(uint *)(iVar3 + 0x20),uVar4);
          iVar6 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
          if ((iVar5 <= iVar6) &&
             ((iVar5 < iVar6 || (*(uint *)(iVar3 + 0x20) + uVar4 <= param_2 + param_4)))) {
            local_10 = local_10 + 1;
            *(undefined4 *)(*(int *)(iVar3 + 0x218) + 0xa0) = param_6;
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  FUN_005b84d0(uVar1,1);
  return local_10;
}


