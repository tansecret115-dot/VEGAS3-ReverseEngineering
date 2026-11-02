/* Module: vegas30.exe
   Function: FUN_005667e0
   Address: 005667e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_005667e0(int param_1,undefined4 *param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar2 = 0;
  sVar1 = **(short **)(param_1 + 0x18);
  if (((sVar1 == 3) || (sVar1 == 1)) ||
     (uVar3 = (ushort)(*(short **)(param_1 + 0x18))[8] + 0x12, uVar3 < 0x13)) {
    uVar3 = 0x12;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar3;
  }
  if (param_2 != (undefined4 *)0x0) {
    if ((int)param_3 < (int)uVar3) {
      if (param_3 < 0x12) {
        uVar2 = 0x8007000e;
      }
      else {
        puVar5 = *(undefined4 **)(param_1 + 0x18);
        *param_2 = *puVar5;
        param_2[1] = puVar5[1];
        param_2[2] = puVar5[2];
        param_2[3] = puVar5[3];
        *(undefined2 *)(param_2 + 4) = *(undefined2 *)(puVar5 + 4);
        *(undefined2 *)(param_2 + 4) = 0;
      }
    }
    else {
      puVar5 = *(undefined4 **)(param_1 + 0x18);
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *param_2 = *puVar5;
        puVar5 = puVar5 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  return uVar2;
}


