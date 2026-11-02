/* Module: vidcap30.exe
   Function: FUN_005659a0
   Address: 005659a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005659a0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,param_2 << 5);
  iVar3 = 0;
  *puVar1 = 0;
  puVar1[1] = 0x1f;
  puVar1[2] = 0;
  puVar1[3] = 0x3f;
  puVar1[4] = 0;
  puVar1[5] = 0x1f;
  FUN_00565a30(param_1,puVar1);
  iVar2 = FUN_00565e80(param_1,puVar1,1,param_2);
  if (0 < iVar2) {
    do {
      FUN_00566030(param_1,puVar1,iVar3);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 8;
    } while (iVar3 < iVar2);
  }
  *(int *)((int)param_1 + 0xa2) = iVar2;
  *(undefined4 *)(*param_1 + 0x14) = 0x5f;
  *(int *)(*param_1 + 0x18) = iVar2;
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}


