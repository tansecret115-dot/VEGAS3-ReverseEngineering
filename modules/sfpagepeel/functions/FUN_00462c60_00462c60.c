/* Module: sfpagepeel.dll
   Function: FUN_00462c60
   Address: 00462c60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00462c60(void *this,HKEY param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  LPCVOID local_4;
  
  local_8 = 0;
  local_4 = (LPCVOID)0x0;
  iVar1 = FUN_004620c0(this,(LPCSTR)param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_00462530(this,(LPCSTR)param_1);
    if (iVar1 < 0) {
      iVar2 = FUN_00462610(this,(LPCSTR)param_1);
      if (iVar2 == -0x7ffb1eca) goto LAB_00462d70;
      if (iVar2 == 0x4e132) {
        local_8 = -1;
        iVar1 = FUN_00462870(this);
        if ((iVar1 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
          FUN_004630a0(this,1);
        }
        *(undefined4 *)((int)this + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_00462d78;
      }
      iVar1 = FUN_00462680(this,param_1,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_00462d78;
      iVar2 = FUN_00462870(this);
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)((int)this + 0x67c) == 0) {
          FUN_004630a0(this,1);
        }
      }
      else {
        iVar2 = FUN_004627d0(this,param_1);
        if (iVar2 < 0) goto LAB_00462d70;
      }
    }
    else {
      local_8 = -1;
      iVar2 = FUN_00462870(this);
      if ((iVar2 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
        FUN_004630a0(this,1);
      }
      *(undefined4 *)((int)this + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_00462d78;
  }
LAB_00462d70:
  local_8 = 0;
  iVar1 = iVar2;
LAB_00462d78:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_004096f0(local_4);
  }
  return iVar1;
}


