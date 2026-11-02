/* Module: vidcap30.exe
   Function: FUN_00550040
   Address: 00550040
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00550040(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar2 = param_1[1];
  uVar3 = uVar2;
  if (param_3 < uVar2) {
    uVar3 = param_3;
  }
  if (uVar3 == 0) {
    return 0;
  }
  param_1[1] = uVar2 - uVar3;
  if (*(int *)(param_1[7] + 0x18) == 0) {
    iVar1 = FUN_0055cd80(param_1[0xc],*param_1,uVar3);
    param_1[0xc] = iVar1;
  }
  puVar4 = (undefined4 *)*param_1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  *param_1 = *param_1 + uVar3;
  param_1[2] = param_1[2] + uVar3;
  return uVar3;
}


