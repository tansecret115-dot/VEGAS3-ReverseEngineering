/* Module: stl2plg.dll
   Function: FUN_0044eb30
   Address: 0044eb30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_0044eb30(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = param_1[1];
  if (0xffe4 < param_3) {
    FUN_0044eb10(param_1,3);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    *(undefined4 *)(*param_1 + 0x14) = 0xc;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar3 = (undefined4 *)FUN_00455c30(param_1,param_3 + 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0044eb10(param_1,4);
  }
  *(uint *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + param_3 + 0xc;
  uVar2 = *(undefined4 *)(iVar1 + 0x38 + param_2 * 4);
  puVar3[1] = param_3;
  *puVar3 = uVar2;
  puVar3[2] = 0;
  *(undefined4 **)(iVar1 + 0x38 + param_2 * 4) = puVar3;
  return puVar3 + 3;
}


