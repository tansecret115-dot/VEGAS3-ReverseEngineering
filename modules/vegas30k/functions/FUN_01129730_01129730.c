/* Module: vegas30k.dll
   Function: FUN_01129730
   Address: 01129730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_01129730(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,undefined4 param_8,code *param_9)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *local_c;
  int local_8;
  
  local_8 = param_3;
  iVar2 = setjmp3(param_1 + 0x11,0);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x55) = param_4;
  *(undefined4 *)(param_1 + 0x59) = param_5;
  *(undefined4 *)(param_1 + 0x5d) = 3;
  *(undefined4 *)(param_1 + 0x61) = 2;
  FUN_0115fa60(param_1);
  FUN_0115fa40(param_1,param_6,1);
  if (param_7 != 0) {
    FUN_0115ffa0(param_1);
  }
  FUN_0115f710(param_1,1);
  uVar5 = *(uint *)(param_1 + 0x59);
  uVar6 = uVar5 / 100;
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x100);
  if (uVar3 < uVar5) {
    do {
      local_c = (undefined1 *)(((uVar5 - uVar3) + -1) * local_8 + param_2);
      uVar5 = 0;
      puVar4 = local_c;
      if (*(int *)(param_1 + 0x55) != 0) {
        do {
          uVar1 = puVar4[2];
          puVar4[2] = *puVar4;
          *puVar4 = uVar1;
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 3;
        } while (uVar5 < *(uint *)(param_1 + 0x55));
      }
      FUN_0115f780(param_1,&local_c,1);
      if (((*(uint *)(param_1 + 0x100) % uVar6 == 0) && (param_9 != (code *)0x0)) &&
         (iVar2 = (*param_9)(param_8,(float)((float10)*(uint *)(param_1 + 0x100) /
                                            (float10)*(uint *)(param_1 + 0x59))), iVar2 == 0)) {
        return 0xffffffff;
      }
      uVar3 = *(uint *)(param_1 + 0x100);
      uVar5 = *(uint *)(param_1 + 0x59);
    } while (uVar3 < uVar5);
  }
  FUN_01129540(param_1);
  return 0;
}


