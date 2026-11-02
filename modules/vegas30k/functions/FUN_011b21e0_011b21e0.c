/* Module: vegas30k.dll
   Function: FUN_011b21e0
   Address: 011b21e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_011b21e0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (param_2 == -1) {
    uVar2 = FUN_011b1f70();
    return uVar2;
  }
  piVar1 = *(int **)(param_1 + 0xc6c);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  iVar5 = 0;
  if (0 < iVar3) {
    while (piVar4 = (int *)(piVar1[1] * iVar5 + piVar1[2]), param_2 != *piVar4) {
      iVar5 = iVar5 + 1;
      if (iVar3 <= iVar5) {
        return 0;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))(*(int **)(param_1 + 0x1c),piVar4[3]);
    (**(code **)(*(int *)piVar4[3] + 8))((int *)piVar4[3]);
    piVar4[3] = 0;
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0xc6c),iVar5,1,0);
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x28))(*(int **)(param_1 + 0x1c));
  }
  return 0;
}


