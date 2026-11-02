/* Module: Setup.exe
   Function: FUN_004275a0
   Address: 004275a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004275a0(void *this,HKEY param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  LPCVOID local_4;
  
  local_8 = 0;
  local_4 = (LPCVOID)0x0;
  iVar2 = FUN_00426910(this,(LPCSTR)param_1,&local_4);
  if (iVar2 < 0) {
    iVar3 = -0x7ffb1ed3;
  }
  else {
    iVar2 = FUN_00427180(this);
    if (iVar2 < 0) {
      iVar1 = iVar2;
      if (*(int *)((int)this + 0x67c) == 0) {
        FUN_004279a0(this,1);
      }
joined_r0x00427661:
      iVar3 = iVar1;
      if (-1 < iVar1) goto LAB_00427679;
    }
    else {
      iVar3 = FUN_00426e50(this,(LPCSTR)param_1);
      if (-1 < iVar3) {
        iVar2 = FUN_00426d80(this,(LPCSTR)param_1);
        if (-1 < iVar2) {
          local_8 = -1;
          iVar1 = iVar2;
          goto joined_r0x00427661;
        }
        iVar2 = FUN_00426ee0(this,(LPCSTR)param_1);
        iVar3 = iVar2;
        if (iVar2 != -0x7ffb1eca) {
          if (iVar2 == 0x4e132) {
            local_8 = -1;
            goto LAB_00427679;
          }
          iVar2 = FUN_00426f50(this,param_1,&local_8);
          iVar3 = FUN_004270e0(this,param_1);
          iVar1 = iVar3;
          if ((iVar2 == 0x4e12e) || (iVar1 = iVar2, -1 < iVar3)) goto joined_r0x00427661;
        }
      }
    }
  }
  iVar2 = iVar3;
  local_8 = 0;
LAB_00427679:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_00403420(local_4);
  }
  return iVar2;
}


