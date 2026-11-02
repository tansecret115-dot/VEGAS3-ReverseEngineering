/* Module: g2plug.dll
   Function: FUN_5f804e50
   Address: 5f804e50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f804e50(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    FUN_5f81e2a0((int *)(param_1 + 0x118),4,-1,-1,0);
  }
  (**(code **)(*param_2 + 4))(param_2);
  iVar1 = FUN_5f81cc70(*(int **)(param_1 + 0x118),-1,(int *)&stack0x00000000,1);
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  }
  return 0;
}


