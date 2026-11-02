/* Module: vegas30.exe
   Function: FUN_00453280
   Address: 00453280
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00453280(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = param_2 + param_4;
  iVar1 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
  if ((param_3 <= iVar1) && ((param_3 < iVar1 || (param_2 < uVar2)))) {
    iVar1 = param_3;
    uVar2 = param_2;
  }
  uVar4 = -param_4;
  iVar3 = -(param_5 + (uint)(param_4 != 0));
  if ((iVar3 <= param_5) && ((iVar3 < param_5 || (uVar4 < param_4)))) {
    iVar3 = param_5;
    uVar4 = param_4;
  }
  if ((((*(uint *)(param_1 + 0xb48) != uVar2) || (*(int *)(param_1 + 0xb4c) != iVar1)) ||
      (*(uint *)(param_1 + 0xb50) != uVar4)) || (*(int *)(param_1 + 0xb54) != iVar3)) {
    *(uint *)(param_1 + 0xb48) = uVar2;
    *(int *)(param_1 + 0xb4c) = iVar1;
    *(uint *)(param_1 + 0xb50) = uVar4;
    *(int *)(param_1 + 0xb54) = iVar3;
    if (*(int *)(param_1 + 0xab4) != 0) {
      (**(code **)(*(int *)(param_1 + 0xab4) + 0x20))(param_1,0);
    }
    FUN_004530a0(param_1,CONCAT31((int3)((-(uint)(param_6 != 0) & 0xffff8000) + 0x8000 >> 8),5));
  }
  return;
}


