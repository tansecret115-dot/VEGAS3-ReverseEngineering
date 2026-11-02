/* Module: mcplugrw.dll
   Function: FUN_00446490
   Address: 00446490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00446490(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6,
            int param_7,undefined4 param_8,undefined *param_9)

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
  iVar2 = setjmp3((int)param_1 + 0x11,0);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  *(undefined4 *)((int)param_1 + 0x55) = param_4;
  *(undefined4 *)((int)param_1 + 0x59) = param_5;
  *(undefined4 *)((int)param_1 + 0x5d) = 3;
  *(undefined4 *)((int)param_1 + 0x61) = 2;
  FUN_00475260(param_1);
  FUN_00475240(param_1,param_6,'\x01');
  if (param_7 != 0) {
    FUN_004757a0(param_1);
  }
  FUN_00474f10(param_1,'\x01');
  uVar5 = *(uint *)((int)param_1 + 0x59);
  uVar6 = uVar5 / 100;
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  uVar3 = param_1[0x40];
  if (uVar3 < uVar5) {
    do {
      local_c = (undefined1 *)(((uVar5 - uVar3) + -1) * local_8 + param_2);
      uVar5 = 0;
      puVar4 = local_c;
      if (*(int *)((int)param_1 + 0x55) != 0) {
        do {
          uVar1 = puVar4[2];
          puVar4[2] = *puVar4;
          *puVar4 = uVar1;
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 3;
        } while (uVar5 < *(uint *)((int)param_1 + 0x55));
      }
      FUN_00474f80(param_1,&local_c,1);
      if ((((uint)param_1[0x40] % uVar6 == 0) && (param_9 != (undefined *)0x0)) &&
         (iVar2 = (*(code *)param_9)(param_8,(float)((float10)(uint)param_1[0x40] /
                                                    (float10)*(uint *)((int)param_1 + 0x59))),
         iVar2 == 0)) {
        return 0xffffffff;
      }
      uVar3 = param_1[0x40];
      uVar5 = *(uint *)((int)param_1 + 0x59);
    } while (uVar3 < uVar5);
  }
  FUN_004462a0(param_1);
  return 0;
}


