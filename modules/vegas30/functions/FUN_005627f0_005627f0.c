/* Module: vegas30.exe
   Function: FUN_005627f0
   Address: 005627f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005627f0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x16c) != 0) {
    return 0;
  }
  uVar1 = param_1 + 0x120;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x118) + 0x10))
                    (*(int **)(param_1 + 0x118),uVar1,&param_1);
  return (iVar2 < 0) - 1 & uVar1;
}


