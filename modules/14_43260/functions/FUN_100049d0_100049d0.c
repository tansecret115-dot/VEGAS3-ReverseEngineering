/* Module: 14_43260.dll
   Function: FUN_100049d0
   Address: 100049d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_100049d0(void *this,undefined4 param_1,undefined4 param_2,float *param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,int param_9,
            undefined4 param_10,undefined4 param_11,int param_12,float param_13)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *_Memory;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 in_stack_ffffffcc;
  float *in_stack_ffffffd0;
  int in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  undefined4 uVar11;
  
  _Memory = calloc(10,4);
  fVar4 = (float)(param_12 + 1) / (float)*(int *)((int)this + 0x95a);
  if (fVar4 < (float)_DAT_10010c88) {
    fVar4 = (float)_DAT_10010c90 - fVar4;
  }
  fVar5 = (float)_DAT_10010c90;
  if (param_12 == 0) {
    DAT_10015f58 = *(float **)((int)this + 0x9ae);
    *(undefined4 *)((int)this + 0x12e6) = *(undefined4 *)((int)this + 0x9ae);
    *(undefined4 *)((int)this + 0x12ea) = *(undefined4 *)((int)this + 0x9b2);
  }
  iVar8 = param_6 * 0x28;
  pfVar1 = param_3 + param_6 * 10;
  if (param_3 < pfVar1) {
    iVar7 = param_9 - (int)param_3;
    do {
      pfVar2 = (float *)((int)param_3 + iVar7);
      fVar3 = *param_3;
      param_3 = param_3 + 1;
      *DAT_10015f58 = fVar4 * fVar3 + *pfVar2 * (fVar5 - fVar4);
      DAT_10015f58 = DAT_10015f58 + 1;
    } while (param_3 < pfVar1);
  }
  uVar11 = 0x10004aa7;
  iVar7 = FUN_100052d0(*(undefined4 **)((int)this + 0x12e6),(int)_Memory);
  if (iVar7 == 1) {
    puVar9 = (undefined4 *)&stack0xffffffcc;
    for (iVar6 = 5; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar6 != 0;
        iVar6 = iVar6 + -1) {
      *puVar9 = *(undefined4 *)register0x00000010;
      puVar9 = puVar9 + 1;
    }
    FUN_10004b20(this,in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8,uVar11
                 ,param_6,param_13);
  }
  else {
    fVar10 = FUN_10004b80(param_13,_Memory);
    **(float **)((int)this + 0x12ea) = (float)fVar10;
    *(int *)((int)this + 0x12ea) = *(int *)((int)this + 0x12ea) + 8;
  }
  *(int *)((int)this + 0x12e6) = *(int *)((int)this + 0x12e6) + iVar8;
  free(_Memory);
  return iVar7;
}


