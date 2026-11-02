/* Module: aifplug.dll
   Function: FUN_5fbd2f90
   Address: 5fbd2f90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbd2f90(int param_1,undefined4 *param_2,uint param_3,uint *param_4,undefined4 *param_5,
                uint param_6,undefined4 *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = 0;
  if (((*(int *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x54) != 0)) ||
     (iVar1 = FUN_5fbd2ef0(param_1), -1 < iVar1)) {
    uVar2 = *(ushort *)(*(int *)(param_1 + 0x50) + 0x10) + 0x12;
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar2;
    }
    if (param_2 != (undefined4 *)0x0) {
      if ((int)param_3 < (int)uVar2) {
        if (param_3 < 0x12) {
          iVar1 = -0x7ff8fff2;
        }
        else {
          puVar5 = *(undefined4 **)(param_1 + 0x50);
          *param_2 = *puVar5;
          param_2[1] = puVar5[1];
          param_2[2] = puVar5[2];
          param_2[3] = puVar5[3];
          *(undefined2 *)(param_2 + 4) = *(undefined2 *)(puVar5 + 4);
          *(undefined2 *)(param_2 + 4) = 0;
        }
      }
      else {
        puVar5 = *(undefined4 **)(param_1 + 0x50);
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *param_2 = *puVar5;
          puVar5 = puVar5 + 1;
          param_2 = param_2 + 1;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)param_2 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          param_2 = (undefined4 *)((int)param_2 + 1);
        }
      }
    }
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 0x20;
    }
    if (param_5 != (undefined4 *)0x0) {
      if (0x1f < param_6) {
        puVar5 = *(undefined4 **)(param_1 + 0x54);
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *param_5 = *puVar5;
          puVar5 = puVar5 + 1;
          param_5 = param_5 + 1;
        }
        return iVar1;
      }
      iVar1 = -0x7ff8fff2;
    }
  }
  return iVar1;
}


