/* Module: vidcap30.exe
   Function: FUN_0057c190
   Address: 0057c190
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_0057c190(int param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
    return -0x7ffbfded;
  }
  iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  if (-1 < iVar4) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar3 = *param_2;
    *param_2 = uVar3 - uVar2;
    iVar4 = 0;
    param_2[1] = (param_2[1] - *(int *)(param_1 + 0x1c)) - (uint)(uVar3 < uVar2);
  }
  return iVar4;
}


