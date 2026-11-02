/* Module: erv13260.dll
   Function: FUN_635fcd10
   Address: 635fcd10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fcd10(int param_1,int param_2,int *param_3,uint *param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = param_4;
  iVar5 = param_5 * param_2 + param_1;
  param_4 = (uint *)0x10;
  do {
    iVar1 = 0;
    puVar3 = puVar2;
    do {
      iVar4 = iVar1 + *param_3;
      iVar1 = iVar1 + 1;
      puVar2 = puVar3 + 1;
      *puVar3 = (uint)*(byte *)(iVar4 + iVar5);
      puVar3 = puVar2;
    } while (iVar1 < 0x10);
    iVar5 = iVar5 + param_5;
    param_4 = (uint *)((int)param_4 + -1);
  } while (param_4 != (uint *)0x0);
  return;
}


