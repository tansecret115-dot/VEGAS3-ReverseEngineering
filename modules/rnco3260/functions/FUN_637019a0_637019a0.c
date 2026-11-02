/* Module: rnco3260.dll
   Function: FUN_637019a0
   Address: 637019a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637019a0(uint *param_1,int param_2,int param_3,int param_4,uint3 *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint3 *puVar4;
  int iVar5;
  
  puVar4 = param_5;
  iVar5 = param_6 >> 1;
  param_5 = (uint3 *)param_4;
  if (param_4 != 0) {
    iVar1 = param_3 - (int)param_1;
    iVar2 = param_2 - (int)param_1;
    do {
      uVar3 = (uint)*puVar4;
      *(uint *)(iVar1 + (int)param_1) = uVar3;
      *(uint *)(iVar2 + (int)param_1) = ((*param_1 ^ uVar3) >> 1 & 0x7f7f7f) + (*param_1 & uVar3);
      param_1 = param_1 + 1;
      do {
        puVar4 = (uint3 *)((int)puVar4 + 3);
        iVar5 = iVar5 - param_4;
      } while (-1 < iVar5);
      iVar5 = iVar5 + param_6;
      param_5 = (uint3 *)((int)param_5 + -1);
    } while (param_5 != (uint3 *)0x0);
  }
  return;
}


