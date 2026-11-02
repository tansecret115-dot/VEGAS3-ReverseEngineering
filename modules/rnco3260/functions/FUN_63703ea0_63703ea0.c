/* Module: rnco3260.dll
   Function: FUN_63703ea0
   Address: 63703ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63703ea0(uint *param_1,int param_2,int param_3,int param_4,uint *param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = param_5;
  param_5 = (uint *)param_4;
  iVar5 = param_6 >> 1;
  if (param_4 != 0) {
    iVar2 = param_3 - (int)param_1;
    iVar3 = param_2 - (int)param_1;
    do {
      uVar1 = *puVar4;
      *(uint *)(iVar2 + (int)param_1) = uVar1;
      *(uint *)(iVar3 + (int)param_1) = ((*param_1 ^ uVar1) >> 1 & 0x7f7f7f) + (*param_1 & uVar1);
      param_1 = param_1 + 1;
      do {
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 - param_4;
      } while (-1 < iVar5);
      iVar5 = iVar5 + param_6;
      param_5 = (uint *)((int)param_5 + -1);
    } while (param_5 != (uint *)0x0);
  }
  return;
}


