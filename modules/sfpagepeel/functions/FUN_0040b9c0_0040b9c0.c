/* Module: sfpagepeel.dll
   Function: FUN_0040b9c0
   Address: 0040b9c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0040b9c0(void *this,undefined4 param_1,uint param_2,HWND param_3)

{
  int iVar1;
  HWND pHVar2;
  int iVar3;
  
  iVar1 = FUN_00423580(0x114,param_2,param_3,0x41,0xccc);
  pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5d3);
  if (param_3 == pHVar2) {
    iVar3 = ftol();
    if (iVar3 != iVar1) {
      *(double *)((int)this + 0x68) = (double)iVar1 * _DAT_00470960;
      (**(code **)(*(int *)this + 0x2c))(this);
      return 0;
    }
  }
  else {
    pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5b7);
    if (param_3 == pHVar2) {
      iVar3 = ftol();
      if (iVar3 != iVar1) {
        *(double *)((int)this + 0x80) = (double)iVar1 * _DAT_00470958;
        (**(code **)(*(int *)this + 0x2c))(this);
        return 0;
      }
    }
    else {
      pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5d4);
      if (param_3 == pHVar2) {
        iVar3 = ftol();
        if (iVar3 != iVar1) {
          *(double *)((int)this + 0x70) = (double)iVar1 * _DAT_00470958;
          (**(code **)(*(int *)this + 0x2c))(this);
          return 0;
        }
      }
      else {
        pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5d5);
        if (param_3 == pHVar2) {
          iVar3 = ftol();
          if (iVar3 != iVar1) {
            *(double *)((int)this + 0x78) = (double)iVar1 * _DAT_00470958;
            (**(code **)(*(int *)this + 0x2c))(this);
            return 0;
          }
        }
        else {
          pHVar2 = GetDlgItem(*(HWND *)((int)this + 0x30),0x5b9);
          if (param_3 == pHVar2) {
            iVar3 = ftol();
            if (iVar3 != iVar1) {
              *(double *)((int)this + 0x88) = (double)iVar1 * _DAT_00470958;
              (**(code **)(*(int *)this + 0x2c))(this);
            }
          }
        }
      }
    }
  }
  return 0;
}


