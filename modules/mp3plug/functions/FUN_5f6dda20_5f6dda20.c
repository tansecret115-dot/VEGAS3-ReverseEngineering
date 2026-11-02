/* Module: mp3plug.dll
   Function: FUN_5f6dda20
   Address: 5f6dda20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl
FUN_5f6dda20(undefined8 *param_1,undefined8 param_2,int param_3,double param_4,undefined8 param_5,
            int param_6,double param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return 5;
  }
  puVar3 = param_1;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)puVar3 = 0;
    puVar3 = (undefined8 *)((int)puVar3 + 4);
  }
  param_1[6] = param_2;
  *(int *)(param_1 + 7) = param_3;
  *(int *)(param_1 + 0xb) = param_8;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  if (param_8 == 0) {
    iVar2 = FUN_5f6dd6a0(param_1,param_4,param_5,param_6,param_7);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = *(int *)((int)param_1 + 0x14) * 2 * param_3;
    *(int *)((int)param_1 + 0x3c) = *(int *)((int)param_1 + 0x14) * param_3;
    *(int *)(param_1 + 8) = iVar2;
    iVar2 = FUN_5f6d9760(iVar2 * 4);
    *(int *)(param_1 + 10) = iVar2;
    if (iVar2 == 0) {
      FUN_5f6ddb50((int)param_1);
      return 1;
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 10) + uVar1 * 4) = 0;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)(param_1 + 8));
    }
  }
  *(undefined8 **)((int)param_1 + 0x5c) = param_1;
  return 0;
}


