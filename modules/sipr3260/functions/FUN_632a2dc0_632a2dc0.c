/* Module: sipr3260.dll
   Function: FUN_632a2dc0
   Address: 632a2dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_632a2dc0(void *this,undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = param_4 + param_2;
  if (iVar1 == 0) {
    FUN_632a2c10(param_1);
    return;
  }
  if (param_4 == 0) {
    FUN_632a2d00(param_1,iVar1);
  }
  else {
    FUN_632a2d50(param_1,iVar1);
  }
  puVar3 = (undefined4 *)(param_3 + *(int *)this);
  puVar4 = (undefined4 *)*param_1;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return;
}


