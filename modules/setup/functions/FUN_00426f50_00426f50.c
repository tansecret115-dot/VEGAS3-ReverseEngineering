/* Module: Setup.exe
   Function: FUN_00426f50
   Address: 00426f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00426f50(void *this,HKEY param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HKEY pHVar5;
  LPCVOID local_10;
  HKEY local_c;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  local_10 = (LPCVOID)0x0;
  local_c = (HKEY)0x0;
  iVar2 = FUN_0042e1b0((int *)&local_c);
  FUN_0042e120(&local_8,0x7d1,0xb,0x1e);
  pHVar5 = param_1;
  local_8 = local_8 - (int)local_c;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar3 = local_8;
  if (iVar2 < 0) {
    iVar2 = -0x7ffb1ecf;
  }
  else {
    iVar2 = FUN_00426910(this,(LPCSTR)param_1,&local_10);
    if (iVar2 < 0) {
      iVar2 = -0x7ffb1ed3;
    }
    else {
      if (*(int *)((int)local_10 + 4) == 0) {
        iVar2 = FUN_0042b0a0(this,pHVar5,(uint *)&param_1);
        pHVar5 = param_1;
        if (iVar2 < 0) {
          iVar2 = -0x7ffb1ed2;
          goto LAB_004270a7;
        }
        iVar2 = 0x4e130;
        iVar3 = FUN_004272f0(this,&local_4,(int)local_10);
        if (iVar3 < 0) {
          iVar2 = -0x7ffb1ed2;
          goto LAB_004270a7;
        }
        if (iVar3 == 0x4e135) {
          iVar2 = 0x4e135;
          goto LAB_004270a7;
        }
      }
      else {
        uVar1 = *(uint *)((int)local_10 + 0x14);
        if ((uVar1 == 0) || ((2 < uVar1 && (uVar1 != 7)))) {
          local_4 = 0;
          iVar2 = -0x7ffb1ed4;
          goto LAB_004270a7;
        }
        local_4 = FUN_0042f580((int)local_10);
        if (local_4 < 0) {
          iVar2 = 0x4e12e;
          iVar4 = iVar3;
          goto LAB_004270a7;
        }
        iVar2 = 0x4e12f;
        pHVar5 = *(HKEY *)((int)local_10 + 0x10);
      }
      if ((int)pHVar5 - (int)local_c == 1) {
        pHVar5 = local_c;
      }
      iVar4 = (local_4 - (int)local_c) + (int)pHVar5;
      if ((iVar4 < 1) || (0x3fe < iVar4)) {
        iVar4 = 0;
        iVar2 = -0x7ffb1ecb - (uint)(*(int *)((int)local_10 + 4) != 0);
      }
      if (local_8 < iVar4) {
        iVar4 = local_8;
      }
    }
  }
LAB_004270a7:
  if (local_10 == (LPCVOID)0x0) {
    *param_2 = iVar4;
    return iVar2;
  }
  FUN_00403420(local_10);
  *param_2 = iVar4;
  return iVar2;
}


