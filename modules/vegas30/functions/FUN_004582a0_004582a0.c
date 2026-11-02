/* Module: vegas30.exe
   Function: FUN_004582a0
   Address: 004582a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004582a0(int param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0xb7c);
  uVar4 = *(uint *)(param_1 + 0xb78);
  if ((iVar1 < 1) && (iVar1 < 0)) {
    uVar5 = *(uint *)(param_1 + 0xb70);
    iVar2 = *(int *)(param_1 + 0xb74);
    *param_2 = uVar5 + uVar4;
    param_2[1] = iVar2 + iVar1 + (uint)CARRY4(uVar5,uVar4);
    iVar1 = *(int *)(param_1 + 0xb78);
    iVar2 = *(int *)(param_1 + 0xb7c);
    *param_3 = -iVar1;
    uVar4 = -(iVar2 + (uint)(iVar1 != 0));
  }
  else {
    *param_2 = *(uint *)(param_1 + 0xb70);
    param_2[1] = *(uint *)(param_1 + 0xb74);
    *param_3 = *(uint *)(param_1 + 0xb78);
    uVar4 = *(uint *)(param_1 + 0xb7c);
  }
  param_3[1] = uVar4;
  uVar4 = param_2[1];
  uVar5 = *param_2;
  if (((int)uVar4 < 1) && ((int)uVar4 < 0)) {
    uVar3 = *param_3;
    *param_3 = uVar3 + uVar5;
    param_3[1] = param_3[1] + uVar4 + (uint)CARRY4(uVar3,uVar5);
    *param_2 = 0;
    param_2[1] = 0;
  }
  uVar4 = param_3[1];
  uVar5 = *param_3;
  if (((int)uVar4 < 1) && ((int)uVar4 < 0)) {
    uVar5 = 0;
    uVar4 = 0;
  }
  *param_3 = uVar5;
  param_3[1] = uVar4;
  return;
}


