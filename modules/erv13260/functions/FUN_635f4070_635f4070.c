/* Module: erv13260.dll
   Function: FUN_635f4070
   Address: 635f4070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_635f4070(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
            undefined4 *param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)(param_1 + param_6 * param_3 + param_2);
  if (param_5 != 0) {
    param_3 = param_5;
    do {
      uVar3 = param_4;
      if (7 < (int)param_4) {
        uVar4 = param_4 >> 3;
        puVar2 = puVar1;
        do {
          puVar1 = puVar2 + 2;
          *param_7 = *puVar2;
          param_7[1] = puVar2[1];
          param_7 = param_7 + 2;
          uVar3 = uVar3 - 8;
          uVar4 = uVar4 - 1;
          puVar2 = puVar1;
        } while (uVar4 != 0);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_7 = *(undefined1 *)puVar1;
        param_7 = (undefined4 *)((int)param_7 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + (param_6 - param_4));
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


