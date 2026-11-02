/* Module: vegas30k.dll
   Function: FUN_011ad410
   Address: 011ad410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_011ad410(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint unaff_retaddr;
  
  puVar1 = param_5;
  *param_5 = 0;
  *param_4 = 0xffffffff;
  uVar4 = 1;
  (**(code **)(*param_2 + 0x8c))(param_2,0xf,&param_5);
  if (param_2 == (int *)0x0) {
    return 1;
  }
  if ((uint)param_2[0x23] < unaff_retaddr) {
    return 1;
  }
  puVar2 = (undefined4 *)param_2[400];
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    while (uVar3 = uVar3 + puVar2[3], uVar3 <= unaff_retaddr) {
      puVar2 = (undefined4 *)puVar2[0xd];
      if (puVar2 == (undefined4 *)0x0) {
        return 1;
      }
    }
    *param_4 = *(undefined4 *)(puVar2[4] + unaff_retaddr * 4);
    *puVar1 = *puVar2;
    (**(code **)(*(int *)*puVar2 + 4))((int *)*puVar2);
    uVar4 = 0;
  }
  return uVar4;
}


