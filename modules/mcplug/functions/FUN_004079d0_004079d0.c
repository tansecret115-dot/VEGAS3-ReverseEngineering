/* Module: mcplug.dll
   Function: FUN_004079d0
   Address: 004079d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004079d0(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    FUN_0042bda0((int *)(param_1 + 0x118),4,-1,-1,0);
  }
  (**(code **)(*param_2 + 4))(param_2);
  iVar1 = FUN_0042a770(*(int **)(param_1 + 0x118),-1,(int *)&stack0x00000000,1);
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  }
  return 0;
}


