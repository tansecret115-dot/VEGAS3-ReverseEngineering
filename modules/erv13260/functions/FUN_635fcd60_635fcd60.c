/* Module: erv13260.dll
   Function: FUN_635fcd60
   Address: 635fcd60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_635fcd60(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_5 + 8);
  iVar6 = (param_2 >> 1) * iVar2;
  puVar4 = (uint *)(param_4 + 0x500);
  param_5 = 8;
  do {
    iVar3 = 0;
    puVar5 = puVar4;
    do {
      puVar4 = puVar5 + 1;
      iVar1 = (param_1 >> 1) + iVar3;
      puVar5[-0x40] = (uint)*(byte *)((param_1 >> 1) + iVar3 + *(int *)(param_3 + 4) + iVar6);
      iVar3 = iVar3 + 1;
      *puVar5 = (uint)*(byte *)(iVar1 + *(int *)(param_3 + 8) + iVar6);
      puVar5 = puVar4;
    } while (iVar3 < 8);
    iVar6 = iVar6 + iVar2;
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}


