/* Module: vidcap30.exe
   Function: FUN_00549280
   Address: 00549280
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00549280(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (((param_1 != 0) && (*(int **)(param_1 + 0x1c) != (int *)0x0)) &&
     (**(int **)(param_1 + 0x1c) == 6)) {
    iVar1 = FUN_0055cd80(1,param_2,param_3);
    if (iVar1 != *(int *)(param_1 + 0x30)) {
      return 0xfffffffd;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
    uVar2 = 1 << ((byte)*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) & 0x1f);
    uVar3 = param_3;
    if (uVar2 <= param_3) {
      uVar3 = uVar2 - 1;
      param_2 = param_2 + (param_3 - uVar3);
    }
    FUN_0055cd30(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14),param_2,uVar3);
    **(undefined4 **)(param_1 + 0x1c) = 7;
    return 0;
  }
  return 0xfffffffe;
}


