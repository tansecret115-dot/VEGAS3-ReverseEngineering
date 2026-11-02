/* Module: vegas30k.dll
   Function: FUN_0119fdd0
   Address: 0119fdd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0119fdd0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  uint uVar7;
  
  puVar2 = *(undefined4 **)(param_1 + 0x640);
  uVar5 = 1;
  *param_2 = *(undefined4 *)(param_1 + 0x8c);
  while (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)*puVar2;
    *param_3 = piVar3;
    (**(code **)(*piVar3 + 4))(piVar3);
    iVar4 = puVar2[3];
    param_3[1] = iVar4;
    pvVar6 = calloc(1,iVar4 * 4);
    param_3[3] = pvVar6;
    uVar7 = 0;
    if (param_3[1] != 0) {
      do {
        pvVar6 = calloc(1,8);
        *(void **)(param_3[3] + uVar7 * 4) = pvVar6;
        **(uint **)(param_3[3] + uVar7 * 4) = uVar7;
        iVar4 = uVar7 * 4;
        iVar1 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        *(undefined4 *)(*(int *)(param_3[3] + iVar4) + 4) = *(undefined4 *)(puVar2[4] + iVar1);
      } while (uVar7 < (uint)param_3[1]);
    }
    puVar2 = (undefined4 *)puVar2[0xd];
    if (puVar2 != (undefined4 *)0x0) {
      if (param_3[4] == 0) {
        pvVar6 = calloc(1,0x14);
        param_3[4] = pvVar6;
      }
      param_3 = (undefined4 *)param_3[4];
    }
    uVar5 = 0;
  }
  return uVar5;
}


