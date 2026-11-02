/* Module: wavplug.dll
   Function: FUN_5f3bccf0
   Address: 5f3bccf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f3bccf0(void *this,HKEY param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  LPCVOID local_4;
  
  local_8 = 0;
  local_4 = (LPCVOID)0x0;
  iVar1 = FUN_5f3bc150(this,(LPCSTR)param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_5f3bc5c0(this,(LPCSTR)param_1);
    if (iVar1 < 0) {
      iVar2 = FUN_5f3bc6a0(this,(LPCSTR)param_1);
      if (iVar2 == -0x7ffb1eca) goto LAB_5f3bce00;
      if (iVar2 == 0x4e132) {
        local_8 = -1;
        iVar1 = FUN_5f3bc900(this);
        if ((iVar1 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
          FUN_5f3bd130(this,1);
        }
        *(undefined4 *)((int)this + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_5f3bce08;
      }
      iVar1 = FUN_5f3bc710(this,param_1,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_5f3bce08;
      iVar2 = FUN_5f3bc900(this);
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)((int)this + 0x67c) == 0) {
          FUN_5f3bd130(this,1);
        }
      }
      else {
        iVar2 = FUN_5f3bc860(this,param_1);
        if (iVar2 < 0) goto LAB_5f3bce00;
      }
    }
    else {
      local_8 = -1;
      iVar2 = FUN_5f3bc900(this);
      if ((iVar2 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
        FUN_5f3bd130(this,1);
      }
      *(undefined4 *)((int)this + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_5f3bce08;
  }
LAB_5f3bce00:
  local_8 = 0;
  iVar1 = iVar2;
LAB_5f3bce08:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_5f382130(local_4);
  }
  return iVar1;
}


