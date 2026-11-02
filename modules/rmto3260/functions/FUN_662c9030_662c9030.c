/* Module: rmto3260.dll
   Function: FUN_662c9030
   Address: 662c9030
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c9030(uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x68))(*(int **)(param_1 + 0x40),&param_1);
  if (-1 < iVar2) {
    if (param_1 < *(uint *)(uVar1 + 0x30)) {
      *(uint *)(uVar1 + 0x30) = param_1;
    }
    (**(code **)(*param_2 + 0xc))(*(int *)(uVar1 + 0x30) - *(int *)(uVar1 + 0x2c));
  }
  return iVar2;
}


