/* Module: vegas30.exe
   Function: FUN_005b7180
   Address: 005b7180
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005b7180(int param_1,undefined4 *param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_3c [6];
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  uint local_8;
  int local_4;
  
  piVar1 = param_4;
  iVar2 = 0;
  *param_4 = 0;
  uStack_20 = *(undefined4 *)(param_1 + 8);
  piStack_1c = (int *)0x0;
  uStack_24 = 0x5b719c;
  FUN_005b83b0();
  local_8 = 0;
  if (param_3 != 0) {
    param_4 = param_2;
    do {
      piStack_1c = &local_4;
      puVar3 = param_4;
      puVar4 = auStack_3c;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      iVar2 = FUN_005b5af0();
      *piVar1 = *piVar1 + local_4;
      if (iVar2 < 0) goto LAB_005b720c;
      local_8 = local_8 + 1;
      param_4 = param_4 + 8;
    } while (local_8 < param_3);
  }
  *(uint *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + param_3;
LAB_005b720c:
  uStack_20 = *(undefined4 *)(param_1 + 8);
  piStack_1c = (int *)0x0;
  uStack_24 = 0x5b7217;
  FUN_005b84d0();
  return iVar2;
}


