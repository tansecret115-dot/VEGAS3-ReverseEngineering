/* Module: mpgvout.003
   Function: FUN_1001acb0
   Address: 1001acb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001acb0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  do {
    uVar3 = PackedAverageUnsignedBytes(*param_2,*param_1);
    uVar4 = PackedAverageUnsignedBytes
                      (*(undefined8 *)(param_6 + (int)param_2),
                       *(undefined8 *)(param_5 + (int)param_1));
    *param_2 = uVar3;
    *(undefined8 *)(param_6 + (int)param_2) = uVar4;
    param_4 = param_4 + -4;
    puVar1 = (undefined8 *)((int)param_1 + param_5 * 2);
    puVar2 = (undefined8 *)((int)param_2 + param_6 * 2);
    uVar3 = PackedAverageUnsignedBytes(*puVar2,*puVar1);
    uVar4 = PackedAverageUnsignedBytes
                      (*(undefined8 *)(param_6 + (int)puVar2),*(undefined8 *)(param_5 + (int)puVar1)
                      );
    *puVar2 = uVar3;
    *(undefined8 *)(param_6 + (int)puVar2) = uVar4;
    param_1 = (undefined8 *)((int)puVar1 + param_5 * 2);
    param_2 = (undefined8 *)((int)puVar2 + param_6 * 2);
  } while (param_4 != 0);
  return;
}


