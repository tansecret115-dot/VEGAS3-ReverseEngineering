/* Module: sfxpfx2.dll
   Function: FUN_5c8d13a0
   Address: 5c8d13a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_5c8d13a0(void *this,int *param_1,uint *param_2,HKEY param_3,uint *param_4,undefined4 *param_5)

{
  ushort uVar1;
  int iVar2;
  HKEY pHVar3;
  int local_4;
  
  local_4 = 0;
  *param_1 = 0;
  iVar2 = FUN_5c8cf630(this,param_3,&local_4);
  if (iVar2 != -0x7ffb1ed3) {
    uVar1 = FUN_5c8cee40(this,(LPCSTR)param_3);
    pHVar3 = (HKEY)(uint)uVar1;
    if (pHVar3 == (HKEY)0x0) {
      iVar2 = -0x7ffb1ec0;
      if (param_4 != (uint *)0x0) {
        *param_4 = 0;
      }
    }
    else if (param_4 != (uint *)0x0) {
      uVar1 = FUN_5c8ceea0(this,(LPCSTR)param_3);
      *param_4 = (uint)uVar1;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    param_3 = pHVar3;
    if (iVar2 == 0x4e135) {
      local_4 = 0;
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 1;
      }
      if (*(int *)((int)this + 0x680) == 0) {
        if ((*(int *)((int)this + 0x7f4) == 0) || (*(int *)((int)this + 0x7f0) == 0)) {
          iVar2 = -0x7ffb1eb2;
        }
        else {
          iVar2 = 0x4e137;
        }
      }
      else {
        iVar2 = 0x4e136;
      }
    }
  }
  *param_1 = local_4;
  *param_2 = (uint)param_3;
  return iVar2;
}


