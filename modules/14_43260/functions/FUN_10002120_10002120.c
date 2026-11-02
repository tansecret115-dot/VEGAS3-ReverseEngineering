/* Module: 14_43260.dll
   Function: FUN_10002120
   Address: 10002120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_10002120(void *this,undefined2 *param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar1 = (undefined2 *)(param_2 + *(int *)((int)this + 0x288) * 2);
  puVar3 = puVar1 + -param_3;
  puVar2 = param_1 + *(int *)((int)this + 0x264);
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


