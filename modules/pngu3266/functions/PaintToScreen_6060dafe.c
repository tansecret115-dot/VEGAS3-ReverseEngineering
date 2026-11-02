/* Module: pngu3266.dll
   Function: PaintToScreen
   Address: 6060dafe
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: int __thiscall XPNWindow::PaintToScreen(class CPNDC *,class CPNDC *,class CPNxRect
   *,class CPNColor *) */

int __thiscall
XPNWindow::PaintToScreen
          (XPNWindow *this,CPNDC *param_1,CPNDC *param_2,CPNxRect *param_3,CPNColor *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CPNMemoryDC local_1fc [500];
  XPNWindow *local_8;
  
                    /* 0x1dafe  1713
                       ?PaintToScreen@XPNWindow@@IAEHPAVCPNDC@@0PAVCPNxRect@@PAVCPNColor@@@Z */
  local_8 = this;
  if ((zm_bParentPaintBackground == 0) || (((byte)this[0xb] & 1) == 0)) {
    (**(code **)(*(int *)param_1 + 0x60))
              (param_2,*(int *)param_3,*(int *)(param_3 + 4),*(int *)(param_3 + 8) - *(int *)param_3
               ,*(int *)(param_3 + 0xc) - *(int *)(param_3 + 4),0,0,10);
  }
  else {
    CPNMemoryDC::CPNMemoryDC(local_1fc,param_1,param_3);
    iVar3 = (**(code **)(*(int *)local_8 + 0x108))(local_1fc,param_3);
    iVar1 = *(int *)param_3;
    iVar2 = *(int *)(param_3 + 4);
    if (iVar3 == 0) {
      (**(code **)(*(int *)param_1 + 0x60))
                (param_2,iVar1,iVar2,*(int *)(param_3 + 8) - iVar1,*(int *)(param_3 + 0xc) - iVar2,0
                 ,0,10);
    }
    else {
      CPNDC::TransparentBlitTo
                ((CPNDC *)local_1fc,param_2,iVar1,iVar2,*(int *)(param_3 + 8) - iVar1,
                 *(int *)(param_3 + 0xc) - iVar2,0,0,param_4);
      CPNMemoryDC::BlitToScreen(local_1fc);
    }
    CPNMemoryDC::~CPNMemoryDC(local_1fc);
  }
  return 1;
}


