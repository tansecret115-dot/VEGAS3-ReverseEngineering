/* Module: erv13260.dll
   Function: FUN_635fb6b0
   Address: 635fb6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_635fb6b0(int param_1,int param_2,int param_3,uint param_4,int *param_5)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_3;
  if (*(char *)(param_3 + 8) == '\0') {
    bVar2 = *(byte *)(param_3 + 0x1cf9);
  }
  else {
    bVar2 = *(byte *)(param_3 + 0x1cf6);
  }
  FUN_635f20b0(param_5,1,1);
  FUN_635f20b0(param_5,1,(uint)*(byte *)(param_3 + 8));
  FUN_635f20b0(param_5,1,0);
  FUN_635f20b0(param_5,5,(uint)bVar2);
  pcVar1 = (char *)(param_3 + 8);
  param_3 = 8;
  if (*pcVar1 == '\0') {
    if (param_4 == 0x20000000) {
      iVar4 = 0;
    }
    else {
      iVar4 = (-(uint)(0x20000000 < param_4) & 2) - 1;
    }
    if (iVar4 != 0) {
      FUN_635f20b0(param_5,8,0);
      FUN_635f20b0(param_5,8,0);
      FUN_635f20b0(param_5,8,0);
      param_3 = 0x20;
    }
  }
  if (*(int *)(iVar3 + 0x1d05) != 0) {
    FUN_635f20b0(param_5,6,param_1);
    FUN_635f20b0(param_5,6,param_2);
    FUN_635f20b0(param_5,0xc,0);
    param_3 = param_3 + 0x18;
  }
  if (param_4 == 0x30000000) {
    iVar4 = 0;
  }
  else {
    iVar4 = (-(uint)(0x30000000 < param_4) & 2) - 1;
  }
  if (iVar4 == 0) {
    FUN_635f20b0(param_5,1,*(int *)(iVar3 + 0x1c8a));
    FUN_635f20b0(param_5,1,*(int *)(iVar3 + 0x1c86));
    FUN_635f20b0(param_5,1,*(int *)(iVar3 + 0xd));
    return param_3 + 3;
  }
  FUN_635f20b0(param_5,3,*(uint *)(iVar3 + 4) & 7);
  return param_3 + 3;
}


