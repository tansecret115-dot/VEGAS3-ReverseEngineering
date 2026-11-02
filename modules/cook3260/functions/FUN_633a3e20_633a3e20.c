/* Module: cook3260.dll
   Function: FUN_633a3e20
   Address: 633a3e20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_633a3e20(void *this,int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_248 [102];
  int local_b0 [20];
  undefined1 local_60 [80];
  int local_10;
  int *local_c;
  int *local_8;
  
  iVar4 = 0;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 0x20)) {
    local_8 = local_248;
    local_10 = param_4 - (int)local_248;
    do {
      local_c = *(int **)(local_10 + (int)local_8);
      FUN_633a62b0((int)local_c,iVar3,param_1,param_2,local_b0,(int)local_60);
      iVar1 = FUN_633a6340(this,iVar3,(int)local_c,local_b0,(int)local_60);
      iVar4 = iVar4 + iVar1;
      iVar3 = iVar3 + 1;
      *local_8 = iVar1;
      local_8 = local_8 + 1;
    } while (iVar3 < *(int *)((int)this + 0x20));
  }
  iVar3 = 0;
  if (param_3 < iVar4) {
    while( true ) {
      iVar1 = iVar3 + 1;
      local_c = param_5 + 1;
      if ((iVar1 == *(int *)((int)this + 0x28)) || (iVar2 = *param_5, iVar2 == -1)) break;
      iVar3 = local_248[iVar2];
      local_10 = *(int *)(param_4 + iVar2 * 4) + 1;
      *(int *)(param_4 + iVar2 * 4) = local_10;
      local_8 = local_248 + iVar2;
      FUN_633a62b0(local_10,iVar2,param_1,param_2,local_b0,(int)local_60);
      iVar2 = FUN_633a6340(this,iVar2,local_10,local_b0,(int)local_60);
      iVar4 = (iVar4 - iVar3) + iVar2;
      *local_8 = iVar2;
      iVar3 = iVar1;
      param_5 = local_c;
      if (iVar4 <= param_3) {
        *(int *)((int)this + 0x35c) = iVar1;
        return iVar4;
      }
    }
  }
  *(int *)((int)this + 0x35c) = iVar3;
  return iVar4;
}


