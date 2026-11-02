/* Module: vegas30.exe
   Function: FUN_0049b150
   Address: 0049b150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0049b150(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xcec) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xcec) + 0x218);
    *(uint *)(iVar2 + 0x68) = *(uint *)(iVar2 + 0x68) & 0xffffefff;
    iVar2 = *(int *)(*(int *)(param_1 + 0xcec) + 0x218);
    *(uint *)(iVar2 + 0x68) = *(uint *)(iVar2 + 0x68) & 0xffffdfff;
    *(uint *)(*(int *)(param_1 + 0xcec) + 0x10) =
         *(uint *)(*(int *)(param_1 + 0xcec) + 0x10) & 0xff7fffff;
    *(uint *)(*(int *)(param_1 + 0xcec) + 0x10) =
         *(uint *)(*(int *)(param_1 + 0xcec) + 0x10) & 0xfeffffff;
    puVar1 = (uint *)(*(int *)(param_1 + 0xcec) + 0x58);
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1b8) + 0x218);
    *(uint *)(iVar2 + 0x68) = *(uint *)(iVar2 + 0x68) & 0xffffefff;
    puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x1b8) + 0x218) + 0x68);
    *puVar1 = *puVar1 & 0xffffdfff;
  }
  if (DAT_00647788 != 0) {
    if (*(int *)(param_1 + 0xbc8) == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    }
    iVar2 = *piVar4;
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = *(int *)(piVar4[2] + iVar5 * 4);
        if ((*(uint *)(iVar3 + 0x10) & 0x100000) != 0) {
          FUN_005cbf20(iVar3);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  if (param_2 == 0) {
    FUN_00499d20(param_1,*(undefined4 *)(param_1 + 0xa4));
  }
  FUN_0049b100(param_1,param_1 + 0xcd8);
  FUN_0046b9e0(param_1);
  FUN_004ea040(*(undefined4 *)(param_1 + 0xbc8),param_2);
  FUN_00455e00(param_1);
  if (param_2 != 0) {
    DAT_0064767c = DAT_0064767c | 0x1000;
  }
  return;
}


