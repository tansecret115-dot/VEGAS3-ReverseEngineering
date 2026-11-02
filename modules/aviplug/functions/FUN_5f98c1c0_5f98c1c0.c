/* Module: aviplug.dll
   Function: FUN_5f98c1c0
   Address: 5f98c1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

int FUN_5f98c1c0(HANDLE param_1,LPCVOID param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  int local_44;
  DWORD local_40 [3];
  int local_34;
  uint local_30 [8];
  uint uStack_10;
  uint auStack_c [2];
  uint *puStack_4;
  
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = FUN_5f98e860(param_1,&local_44,local_40 + 1);
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = *(int *)((int)param_2 + 4);
  FUN_5f98e290(param_1,local_40 + 2);
  local_34 = local_44;
  uVar2 = FUN_5f98e910(param_1,0x63727473,local_30,&local_34);
  if ((int)uVar2 < 0) {
    local_44 = local_40[2] + local_44;
  }
  else {
    if (iVar1 * 0x20 + 0x1cU <= local_30[0]) goto LAB_5f98c25e;
    SetFilePointer(param_1,-8,(PLONG)0x0,1);
    local_40[1] = 0x4b4e554a;
    BVar3 = WriteFile(param_1,local_40 + 1,4,local_40,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return -0x7ffb1ff7;
    }
    local_44 = local_40[2] + local_44;
  }
  SetFilePointer(param_1,local_44,(PLONG)0x0,0);
  iVar1 = FUN_5f98e5d0(param_1);
  if (iVar1 < 0) {
    return iVar1;
  }
LAB_5f98c25e:
  iVar1 = 0;
  BVar3 = WriteFile(param_1,param_2,0x1c,local_40,(LPOVERLAPPED)0x0);
  if (BVar3 == 0) {
    return -0x7ffb1ff7;
  }
  iVar4 = (**(code **)(*param_3 + 0x14))(param_3,0,0,0,0);
  if (-1 < iVar4) {
    auStack_c[0] = 0;
    iVar4 = (**(code **)(*param_3 + 0xc))(param_3,local_40,0xc,auStack_c);
    if ((-1 < iVar4) && (0 < (int)local_40[2])) {
      do {
        iVar4 = (**(code **)(*param_3 + 0xc))(param_3,&local_34,0x20,auStack_c);
        if ((-1 < iVar4) &&
           (BVar3 = WriteFile(param_1,&local_34,0x20,(LPDWORD)&stack0xffffffac,(LPOVERLAPPED)0x0),
           BVar3 == 0)) {
          return -0x7ffb1ff7;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)local_40[2]);
    }
  }
  if ((uStack_10 & 1) != 0) {
    auStack_c[0] = auStack_c[0] & 0xffffff00;
    BVar3 = WriteFile(param_1,auStack_c,1,(LPDWORD)&stack0xffffffac,(LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      return -0x7ffb1ff7;
    }
    uStack_10 = uStack_10 + 1;
  }
  *puStack_4 = uStack_10;
  if (uStack_10 != 0) {
    FUN_5f98e4f0(param_1,uStack_10);
  }
  return 0;
}


