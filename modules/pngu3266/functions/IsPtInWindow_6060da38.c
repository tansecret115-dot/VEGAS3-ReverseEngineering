/* Module: pngu3266.dll
   Function: IsPtInWindow
   Address: 6060da38
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall XPNWindow::IsPtInWindow(class CPNxPoint const &)const  */

int __thiscall XPNWindow::IsPtInWindow(XPNWindow *this,CPNxPoint *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x1da38  1515  ?IsPtInWindow@XPNWindow@@UBEHABVCPNxPoint@@@Z */
  (**(code **)(*(int *)this + 0x40))(&local_14);
  if ((((*(int *)param_1 < local_14) || (local_c < *(int *)param_1)) ||
      (*(int *)(param_1 + 4) < local_10)) || (local_8 < *(int *)(param_1 + 4))) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


