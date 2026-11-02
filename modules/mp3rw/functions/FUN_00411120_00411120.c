/* Module: mp3rw.dll
   Function: FUN_00411120
   Address: 00411120
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00411120(void *this,HKEY param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  LPCVOID local_4;
  
  local_8 = 0;
  local_4 = (LPCVOID)0x0;
  iVar1 = FUN_00410580(this,(LPCSTR)param_1,&local_4);
  if (iVar1 < 0) {
    iVar2 = -0x7ffb1ed3;
  }
  else {
    iVar1 = FUN_004109f0(this,(LPCSTR)param_1);
    if (iVar1 < 0) {
      iVar2 = FUN_00410ad0(this,(LPCSTR)param_1);
      if (iVar2 == -0x7ffb1eca) goto LAB_00411230;
      if (iVar2 == 0x4e132) {
        local_8 = -1;
        iVar1 = FUN_00410d30(this);
        if ((iVar1 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
          FUN_00411560(this,1);
        }
        *(undefined4 *)((int)this + 0x67c) = 1;
        iVar1 = iVar2;
        goto LAB_00411238;
      }
      iVar1 = FUN_00410b40(this,param_1,&local_8);
      if (iVar1 == 0x4e12e) goto LAB_00411238;
      iVar2 = FUN_00410d30(this);
      if (iVar2 < 0) {
        iVar1 = iVar2;
        if (*(int *)((int)this + 0x67c) == 0) {
          FUN_00411560(this,1);
        }
      }
      else {
        iVar2 = FUN_00410c90(this,param_1);
        if (iVar2 < 0) goto LAB_00411230;
      }
    }
    else {
      local_8 = -1;
      iVar2 = FUN_00410d30(this);
      if ((iVar2 < 0) && (*(int *)((int)this + 0x67c) == 0)) {
        FUN_00411560(this,1);
      }
      *(undefined4 *)((int)this + 0x67c) = 1;
    }
    iVar2 = iVar1;
    if (-1 < iVar1) goto LAB_00411238;
  }
LAB_00411230:
  local_8 = 0;
  iVar1 = iVar2;
LAB_00411238:
  if (param_2 != (int *)0x0) {
    *param_2 = local_8;
  }
  if (local_4 != (LPCVOID)0x0) {
    FUN_00401220(local_4);
  }
  return iVar1;
}


