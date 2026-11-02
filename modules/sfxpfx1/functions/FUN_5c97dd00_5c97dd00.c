/* Module: sfxpfx1.dll
   Function: FUN_5c97dd00
   Address: 5c97dd00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5c97dd00(void *this,HKEY param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  LPCVOID local_4;
  
  local_8 = 0;
  local_4 = (LPCVOID)0x0;
  iVar1 = FUN_5c97d160(this,(LPCSTR)param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_5c97d5d0(this,(LPCSTR)param_1);
    if (iVar1 < 0) {
      iVar2 = FUN_5c97d6b0(this,(LPCSTR)param_1);
      if (iVar2 == -0x7ffb1eca) goto LAB_5c97de10;
      if (iVar2 == 0x4e132) {
        local_8 = -1;
        iVar1 = FUN_5c97d910(this);
        if ((iVar1 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
          FUN_5c97e140(this,1);
        }
        *(undefined4 *)((int)this + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_5c97de18;
      }
      iVar1 = FUN_5c97d720(this,param_1,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_5c97de18;
      iVar2 = FUN_5c97d910(this);
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)((int)this + 0x67c) == 0) {
          FUN_5c97e140(this,1);
        }
      }
      else {
        iVar2 = FUN_5c97d870(this,param_1);
        if (iVar2 < 0) goto LAB_5c97de10;
      }
    }
    else {
      local_8 = -1;
      iVar2 = FUN_5c97d910(this);
      if ((iVar2 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
        FUN_5c97e140(this,1);
      }
      *(undefined4 *)((int)this + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_5c97de18;
  }
LAB_5c97de10:
  local_8 = 0;
  iVar1 = iVar2;
LAB_5c97de18:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_5c942920(local_4);
  }
  return iVar1;
}


