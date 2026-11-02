/* Module: 14_43260.dll
   Function: FUN_10005280
   Address: 10005280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10005280(void *this,undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)(param_2 + *(int *)((int)this + 0x986) * 4);
  puVar3 = puVar1 + -param_3;
  puVar2 = param_1 + *(int *)((int)this + 0x996);
  puVar5 = puVar3;
  for (; param_1 < puVar2; param_1 = param_1 + 1) {
    puVar4 = puVar5 + 1;
    *param_1 = *puVar5;
    puVar5 = puVar4;
    if (puVar4 == puVar1) {
      puVar5 = puVar3;
    }
  }
  return;
}


