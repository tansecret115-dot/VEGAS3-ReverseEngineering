/* Module: mp3plug.dll
   Function: FUN_5f71ee70
   Address: 5f71ee70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f71ee70(void *this,HKEY param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  HKEY pHVar4;
  int iVar5;
  LPCVOID local_10;
  int local_c;
  HKEY local_8;
  int local_4;
  
  iVar5 = 0;
  local_10 = (LPCVOID)0x0;
  local_8 = (HKEY)0x0;
  local_4 = FUN_5f7266c0((int *)&local_8);
  pHVar4 = param_1;
  iVar2 = FUN_5f71e8b0(this,(LPCSTR)param_1,&local_10);
  if (iVar2 < 0) {
    iVar2 = -0x7ffb1ed3;
    goto LAB_5f71ef8b;
  }
  if (*(int *)((int)local_10 + 4) == 0) {
    iVar2 = FUN_5f722f90(this,pHVar4,(uint *)&param_1);
    pHVar4 = param_1;
    if (iVar2 < 0) {
      iVar2 = -0x7ffb1ed2;
      goto LAB_5f71ef8b;
    }
    iVar2 = 0x4e130;
    iVar3 = FUN_5f71f1d0(this,&local_c,(int)local_10);
    if (iVar3 < 0) {
      iVar2 = -0x7ffb1ed2;
      goto LAB_5f71ef8b;
    }
    if (iVar3 == 0x4e135) {
      iVar2 = 0x4e135;
      goto LAB_5f71ef8b;
    }
  }
  else {
    uVar1 = *(uint *)((int)local_10 + 0x14);
    if ((uVar1 == 0) || ((2 < uVar1 && (uVar1 != 7)))) {
      local_c = 0;
      iVar2 = -0x7ffb1ed4;
      goto LAB_5f71ef8b;
    }
    local_c = FUN_5f727760((int)local_10);
    if (local_c < 0) {
      iVar5 = -1;
      iVar2 = 0x4e12e;
      goto LAB_5f71ef8b;
    }
    iVar2 = 0x4e12f;
    pHVar4 = *(HKEY *)((int)local_10 + 0x10);
  }
  if (-1 < local_4) {
    if ((int)pHVar4 - (int)local_8 == 1) {
      pHVar4 = local_8;
    }
    iVar5 = (local_c - (int)local_8) + (int)pHVar4;
    if ((iVar5 < 1) || (0x3fe < iVar5)) {
      iVar5 = 0;
      iVar2 = -0x7ffb1ecb - (uint)(*(int *)((int)local_10 + 4) != 0);
    }
  }
LAB_5f71ef8b:
  if (local_10 == (LPCVOID)0x0) {
    *param_2 = iVar5;
    return iVar2;
  }
  FUN_5f681ba0(local_10);
  *param_2 = iVar5;
  return iVar2;
}


