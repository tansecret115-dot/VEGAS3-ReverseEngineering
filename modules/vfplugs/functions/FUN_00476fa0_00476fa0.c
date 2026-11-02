/* Module: vfplugs.dll
   Function: FUN_00476fa0
   Address: 00476fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00476fa0(void *this,HKEY param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  LPCVOID local_4;
  
  local_8 = 0;
  local_4 = (LPCVOID)0x0;
  iVar1 = FUN_00476400(this,(LPCSTR)param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_00476870(this,(LPCSTR)param_1);
    if (iVar1 < 0) {
      iVar2 = FUN_00476950(this,(LPCSTR)param_1);
      if (iVar2 == -0x7ffb1eca) goto LAB_004770b0;
      if (iVar2 == 0x4e132) {
        local_8 = -1;
        iVar1 = FUN_00476bb0(this);
        if ((iVar1 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
          FUN_004773e0(this,1);
        }
        *(undefined4 *)((int)this + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_004770b8;
      }
      iVar1 = FUN_004769c0(this,param_1,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_004770b8;
      iVar2 = FUN_00476bb0(this);
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)((int)this + 0x67c) == 0) {
          FUN_004773e0(this,1);
        }
      }
      else {
        iVar2 = FUN_00476b10(this,param_1);
        if (iVar2 < 0) goto LAB_004770b0;
      }
    }
    else {
      local_8 = -1;
      iVar2 = FUN_00476bb0(this);
      if ((iVar2 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
        FUN_004773e0(this,1);
      }
      *(undefined4 *)((int)this + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_004770b8;
  }
LAB_004770b0:
  local_8 = 0;
  iVar1 = iVar2;
LAB_004770b8:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_0040a640(local_4);
  }
  return iVar1;
}


