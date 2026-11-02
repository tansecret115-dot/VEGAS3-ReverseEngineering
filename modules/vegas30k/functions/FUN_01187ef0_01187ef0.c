/* Module: vegas30k.dll
   Function: FUN_01187ef0
   Address: 01187ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_01187ef0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint local_10;
  int iStack_c;
  int local_4;
  
  iVar4 = *(int *)(param_1 + 0x8bc);
  if (*(int *)(param_1 + 0x48) == 0) {
    if (((iVar4 == 0) && (param_2 == 0)) || (*(int *)(param_1 + 0x8c0) != 0)) {
      *(undefined4 *)(param_1 + 0x8bc) = 0;
      return 0;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0x600);
    if ((iVar4 != 2) && (iVar4 != 3)) {
      iVar4 = *(int *)(param_1 + 0x85c);
      uVar1 = *(uint *)(param_1 + 0x858);
      uVar2 = *(uint *)(param_1 + 0x878);
      iVar3 = *(int *)(param_1 + 0x87c);
      iVar5 = 0;
      local_4 = 0;
      if ((iVar3 <= iVar4) && ((iVar3 < iVar4 || (uVar2 < uVar1)))) {
        iVar5 = uVar1 - uVar2;
        local_4 = (iVar4 - iVar3) - (uint)(uVar1 < uVar2);
      }
      if (*(int *)(param_1 + 0x6c4) == 0) {
        (**(code **)(**(int **)(param_1 + 0x638) + 0x48))(*(int **)(param_1 + 0x638),&local_10);
        iVar4 = (*(int *)(param_1 + 0x8ac) - iStack_c) -
                (uint)(*(uint *)(param_1 + 0x8a8) < local_10);
        if ((iVar3 <= iVar4) &&
           (((iVar3 < iVar4 || (uVar2 <= *(uint *)(param_1 + 0x8a8) - local_10)) &&
            (local_10 != 0 || iStack_c != 0)))) {
          local_4 = *(int *)(param_1 + 0x85c);
          iVar5 = *(int *)(param_1 + 0x858);
        }
      }
      FUN_01187840(iVar5,local_4);
      return 0;
    }
  }
  else if (iVar4 != 0) {
    *(int *)(param_1 + 0x8bc) = iVar4 + -1;
  }
  return 0;
}


