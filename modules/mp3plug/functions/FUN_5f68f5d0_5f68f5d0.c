/* Module: mp3plug.dll
   Function: FUN_5f68f5d0
   Address: 5f68f5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f68f5d0(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x11c) == 0) {
    FUN_5f6b67c0((int *)(param_1 + 0x11c),4,-1,-1,0);
  }
  (**(code **)(*param_2 + 4))(param_2);
  iVar1 = FUN_5f6b5190(*(int **)(param_1 + 0x11c),-1,(int *)&stack0x00000000,1);
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  }
  return 0;
}


