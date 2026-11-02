/* Module: pngu3266.dll
   Function: ParentPaintBackground
   Address: 6060dab0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual int __thiscall XPNWindow::ParentPaintBackground(class CPNDC *,class CPNxRect
   *) */

int __thiscall XPNWindow::ParentPaintBackground(XPNWindow *this,CPNDC *param_1,CPNxRect *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  XPNWindow *local_8;
  
                    /* 0x1dab0  1714
                       ?ParentPaintBackground@XPNWindow@@MAEHPAVCPNDC@@PAVCPNxRect@@@Z */
  local_8 = this;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x14))();
  local_18 = *(undefined4 *)param_2;
  uStack_14 = *(undefined4 *)(param_2 + 4);
  uStack_10 = *(undefined4 *)(param_2 + 8);
  uStack_c = *(undefined4 *)(param_2 + 0xc);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    (**(code **)(*piVar1 + 0xe4))(local_8,&local_18);
    iVar2 = (**(code **)(*piVar1 + 0x108))(param_1,&local_18);
  }
  return iVar2;
}


