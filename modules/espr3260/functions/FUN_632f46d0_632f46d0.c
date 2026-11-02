/* Module: espr3260.dll
   Function: FUN_632f46d0
   Address: 632f46d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_632f46d0(int *param_1)

{
  int iVar1;
  
  *(int **)(*(int *)(*param_1 + 4) + 4 + (int)param_1) = param_1 + 0x549a;
  FUN_632f4950(*(int *)(*param_1 + 4) + (int)param_1);
  *(int **)(*(int *)(param_1[0x211] + 4) + 0x848 + (int)param_1) = param_1 + 0x949a;
  FUN_632f4950(*(int *)(param_1[0x211] + 4) + 0x844 + (int)param_1);
  param_1[0x457] = (int)(param_1 + 0xd49a);
  FUN_632f5560((int)(param_1 + 0x457));
  iVar1 = FUN_632f8ff0();
  param_1[0x145e] = iVar1;
  *(int *)(*(int *)(param_1[0x211] + 4) + 0x104c + (int)param_1) = iVar1;
  *(undefined4 *)(*(int *)(*param_1 + 4) + 0x808 + (int)param_1) =
       *(undefined4 *)(*(int *)(param_1[0x211] + 4) + 0x104c + (int)param_1);
  param_1[0x149a] = *(int *)(*(int *)(*param_1 + 4) + 0x808 + (int)param_1);
  return 0;
}


