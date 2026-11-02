/* Module: sfpagepeel.dll
   Function: FUN_0040db00
   Address: 0040db00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040db00(void *this,undefined4 param_1,uint param_2,HWND param_3)

{
  HWND pHVar1;
  int iVar2;
  int iVar3;
  
  pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5d9);
  if (param_3 == pHVar1) {
    iVar2 = FUN_00423580(0x114,param_2,param_3,0x41,0xccc);
    iVar3 = ftol();
    if (iVar3 != iVar2) {
      *(double *)((int)this + 0x68) = (double)iVar2 * _DAT_00470960;
      (**(code **)(*(int *)this + 0x2c))(this);
      return 0;
    }
  }
  else {
    pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5dc);
    if (param_3 == pHVar1) {
      iVar2 = FUN_00423580(0x114,param_2,param_3,0x41,0xccc);
      iVar3 = ftol();
      if (iVar3 != iVar2) {
        *(double *)((int)this + 0x80) = (double)iVar2 * _DAT_00470958;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
    }
    else {
      pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5da);
      if (param_3 == pHVar1) {
        iVar2 = FUN_00423580(0x114,param_2,param_3,0x147,0xccc);
        iVar3 = ftol();
        if (iVar3 != iVar2) {
          *(double *)((int)this + 0x70) = (double)iVar2 * _DAT_00470bf8;
          (**(code **)(*(int *)this + 0x2c))(this);
          return 0;
        }
      }
      else {
        pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5db);
        if (param_3 == pHVar1) {
          iVar2 = FUN_00423580(0x114,param_2,param_3,0x41,0xccc);
          iVar3 = ftol();
          if (iVar3 != iVar2) {
            *(double *)((int)this + 0x78) = (double)iVar2 * _DAT_00470958;
            (**(code **)(*(int *)this + 0x2c))(this);
            return 0;
          }
        }
        else {
          pHVar1 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5dd);
          if (param_3 == pHVar1) {
            iVar2 = FUN_00423580(0x114,param_2,param_3,0x41,0xccc);
            iVar3 = ftol();
            if (iVar3 != iVar2) {
              *(double *)((int)this + 0x88) = (double)iVar2 * _DAT_00470958;
              (**(code **)(*(int *)this + 0x2c))(this);
            }
          }
        }
      }
    }
  }
  return 0;
}


