/* Module: 14_43260.dll
   Function: FUN_10004b20
   Address: 10004b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_10004b20(void *this,undefined4 param_1,float *param_2,int param_3,undefined4 param_4,
            undefined4 param_5,int param_6,float param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  
  fVar5 = FUN_10004b80(param_7,param_2);
  iVar4 = param_3 + -4;
  **(float **)((int)this + 0x12ea) = (float)fVar5;
  *(int *)((int)this + 0x12ea) = *(int *)((int)this + 0x12ea) + 8;
  puVar3 = *(undefined4 **)((int)this + 0x12e6);
  puVar2 = puVar3 + param_6 * 10;
  for (; puVar3 < puVar2; puVar3 = puVar3 + 1) {
    puVar1 = (undefined4 *)(iVar4 + 4);
    iVar4 = iVar4 + 4;
    *puVar3 = *puVar1;
  }
  return;
}


