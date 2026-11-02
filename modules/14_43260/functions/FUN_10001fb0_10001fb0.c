/* Module: 14_43260.dll
   Function: FUN_10001fb0
   Address: 10001fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_10001fb0(void *this,undefined4 param_1,int *param_2,int param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  iVar3 = FUN_10002010(param_7,param_2);
  iVar5 = param_3 + -4;
  **(int **)((int)this + 0x8d2) = iVar3;
  *(int *)((int)this + 0x8d2) = *(int *)((int)this + 0x8d2) + 8;
  puVar4 = *(undefined2 **)((int)this + 0x8ce);
  puVar2 = puVar4 + param_6 * 10;
  for (; puVar4 < puVar2; puVar4 = puVar4 + 1) {
    puVar1 = (undefined2 *)(iVar5 + 4);
    iVar5 = iVar5 + 4;
    *puVar4 = *puVar1;
  }
  return;
}


