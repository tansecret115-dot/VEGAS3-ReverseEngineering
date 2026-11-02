/* Module: sfs4rw.dll
   Function: FUN_004110a0
   Address: 004110a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_004110a0(void *this,HKEY param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  LPCVOID local_4;
  
  local_8 = 0;
  local_4 = (LPCVOID)0x0;
  iVar1 = FUN_00410500(this,(LPCSTR)param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_00410970(this,(LPCSTR)param_1);
    if (iVar1 < 0) {
      iVar2 = FUN_00410a50(this,(LPCSTR)param_1);
      if (iVar2 == -0x7ffb1eca) goto LAB_004111b0;
      if (iVar2 == 0x4e132) {
        local_8 = -1;
        iVar1 = FUN_00410cb0(this);
        if ((iVar1 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
          FUN_004114e0(this,1);
        }
        *(undefined4 *)((int)this + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_004111b8;
      }
      iVar1 = FUN_00410ac0(this,param_1,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_004111b8;
      iVar2 = FUN_00410cb0(this);
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)((int)this + 0x67c) == 0) {
          FUN_004114e0(this,1);
        }
      }
      else {
        iVar2 = FUN_00410c10(this,param_1);
        if (iVar2 < 0) goto LAB_004111b0;
      }
    }
    else {
      local_8 = -1;
      iVar2 = FUN_00410cb0(this);
      if ((iVar2 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
        FUN_004114e0(this,1);
      }
      *(undefined4 *)((int)this + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_004111b8;
  }
LAB_004111b0:
  local_8 = 0;
  iVar1 = iVar2;
LAB_004111b8:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_00401220(local_4);
  }
  return iVar1;
}


