/* Module: mpgvout.004
   Function: FUN_1001aea0
   Address: 1001aea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_1001aea0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,int param_4,int param_5,
            int param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  do {
    uVar1 = *(undefined8 *)(param_5 + (int)param_1);
    *param_2 = *param_1;
    *(undefined8 *)(param_6 + (int)param_2) = uVar1;
    param_4 = param_4 + -4;
    puVar2 = (undefined8 *)((int)param_1 + param_5 * 2);
    puVar3 = (undefined8 *)((int)param_2 + param_6 * 2);
    uVar1 = *(undefined8 *)(param_5 + (int)puVar2);
    *puVar3 = *puVar2;
    *(undefined8 *)(param_6 + (int)puVar3) = uVar1;
    param_1 = (undefined8 *)((int)puVar2 + param_5 * 2);
    param_2 = (undefined8 *)((int)puVar3 + param_6 * 2);
  } while (param_4 != 0);
  return;
}


