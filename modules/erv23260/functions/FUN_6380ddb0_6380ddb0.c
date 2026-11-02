/* Module: erv23260.dll
   Function: FUN_6380ddb0
   Address: 6380ddb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_6380ddb0(void *this,uint *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = 4;
  piVar1 = (int *)(*(int *)((int)this + 8) + *(int *)((int)this + 0x120) * 0x7c);
  param_1[1] = piVar1[0x16];
  param_1[2] = piVar1[0x1a];
  param_1[0xc] = (uint)*(byte *)((int)piVar1 + 0x66);
  param_1[3] = piVar1[0x17];
  *param_1 = (uint)*(byte *)(piVar1 + 0x1b);
  puVar3 = param_1 + 4;
  puVar2 = (uint *)(piVar1 + 0xe);
  do {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 2;
  } while (iVar4 != 0);
  if (param_2 != 0) {
    bVar5 = *piVar1 == 0;
    if (piVar1[1] == 0) {
      bVar5 = bVar5 | 4;
    }
    if (*piVar1 == *(int *)((int)this + 0x124) * 0x10 + -0x10) {
      bVar5 = bVar5 | 2;
    }
    if (piVar1[1] == *(int *)((int)this + 0x128) * 0x10 + -0x10) {
      bVar5 = bVar5 | 8;
    }
    *(byte *)(piVar1 + 0x19) = bVar5;
  }
  *(int *)((int)this + 0x120) = *(int *)((int)this + 0x120) + 1;
  return 0;
}


