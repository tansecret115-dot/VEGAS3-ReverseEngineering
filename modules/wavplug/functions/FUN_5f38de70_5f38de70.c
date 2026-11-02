/* Module: wavplug.dll
   Function: FUN_5f38de70
   Address: 5f38de70
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f38de70(int param_1,undefined4 *param_2,uint param_3,uint *param_4,undefined4 *param_5,
                uint param_6,undefined4 *param_7)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar2 = 0;
  if (((*(int *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x2c) != 0)) ||
     (iVar2 = FUN_5f38ddc0(param_1 + -0xa8), -1 < iVar2)) {
    sVar1 = **(short **)(param_1 + 0x28);
    if (((sVar1 == 3) || (sVar1 == 1)) ||
       (uVar3 = (ushort)(*(short **)(param_1 + 0x28))[8] + 0x12, uVar3 < 0x13)) {
      uVar3 = 0x12;
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar3;
    }
    if (param_2 != (undefined4 *)0x0) {
      if ((int)param_3 < (int)uVar3) {
        if (param_3 < 0x12) {
          iVar2 = -0x7ff8fff2;
        }
        else {
          puVar6 = *(undefined4 **)(param_1 + 0x28);
          *param_2 = *puVar6;
          param_2[1] = puVar6[1];
          param_2[2] = puVar6[2];
          param_2[3] = puVar6[3];
          *(undefined2 *)(param_2 + 4) = *(undefined2 *)(puVar6 + 4);
          *(undefined2 *)(param_2 + 4) = 0;
        }
      }
      else {
        puVar6 = *(undefined4 **)(param_1 + 0x28);
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *param_2 = *puVar6;
          puVar6 = puVar6 + 1;
          param_2 = param_2 + 1;
        }
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)param_2 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
      }
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 0x20;
    }
    if (param_5 != (undefined4 *)0x0) {
      if (0x1f < param_6) {
        puVar6 = *(undefined4 **)(param_1 + 0x2c);
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *param_5 = *puVar6;
          puVar6 = puVar6 + 1;
          param_5 = param_5 + 1;
        }
        return iVar2;
      }
      iVar2 = -0x7ff8fff2;
    }
  }
  return iVar2;
}


