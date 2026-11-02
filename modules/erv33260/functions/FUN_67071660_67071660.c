/* Module: erv33260.dll
   Function: FUN_67071660
   Address: 67071660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_67071660(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (((param_5 | param_3 | (uint)param_2 | (uint)param_1) & 3) == 0) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      uVar3 = param_3;
      if (0xf < param_3) {
        uVar4 = param_3 >> 4;
        do {
          uVar1 = param_1[1];
          *param_2 = *param_1;
          param_2[1] = uVar1;
          uVar1 = param_1[3];
          param_2[2] = param_1[2];
          param_2[3] = uVar1;
          param_1 = param_1 + 4;
          param_2 = param_2 + 4;
          uVar3 = uVar3 - 0x10;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (3 < uVar3) {
        uVar3 = uVar3 >> 2;
        do {
          uVar1 = *param_1;
          param_1 = param_1 + 1;
          *param_2 = uVar1;
          param_2 = param_2 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      param_1 = (undefined4 *)((int)param_1 + (param_5 - param_3 & 0xfffffffc));
    }
  }
  else if (param_4 != 0) {
    do {
      uVar3 = param_3;
      if (3 < param_3) {
        uVar4 = param_3 >> 2;
        puVar2 = param_1;
        do {
          param_1 = puVar2 + 1;
          *(undefined1 *)param_2 = *(undefined1 *)puVar2;
          *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)((int)puVar2 + 1);
          *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)((int)puVar2 + 2);
          *(undefined1 *)((int)param_2 + 3) = *(undefined1 *)((int)puVar2 + 3);
          param_2 = param_2 + 1;
          uVar3 = uVar3 - 4;
          uVar4 = uVar4 - 1;
          puVar2 = param_1;
        } while (uVar4 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)param_1;
        param_2 = (undefined4 *)((int)param_2 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      param_1 = (undefined4 *)((int)param_1 + (param_5 - param_3));
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    return;
  }
  return;
}


