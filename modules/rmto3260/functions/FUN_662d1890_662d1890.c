/* Module: rmto3260.dll
   Function: FUN_662d1890
   Address: 662d1890
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662d1890(int param_1,int param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined4 local_18;
  short local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined1 local_c [4];
  undefined4 local_8;
  
  FUN_662e2a70(&local_18);
  sVar1 = *(short *)(param_2 + 10);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0x18))(0,local_c);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*param_3 + 8))(param_3,*(undefined4 *)(param_2 + 0x24));
  }
  while( true ) {
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(&local_18,&local_8);
    if (iVar3 == 0) break;
    if (iVar2 == -0x7ffbfc36) {
      return 0;
    }
    if (local_14 == sVar1) {
      local_24 = local_18;
      local_1c = local_10;
      local_1e = local_12;
      local_20 = 0;
      iVar2 = (**(code **)(*param_3 + 0x10))(param_3,&local_24,iVar3,local_8);
    }
  }
  return iVar2;
}


