/* Module: pngu3266.dll
   Function: OnPaint
   Address: 6060e49b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: virtual void __thiscall XPNSlider::OnPaint(class CPNDC *) */

void __thiscall XPNSlider::OnPaint(XPNSlider *this,CPNDC *param_1)

{
  int iVar1;
  CPNColor *pCVar2;
  CPNMemoryDC local_208 [500];
  CPNxRect local_14 [16];
  
                    /* 0x1e49b  1673  ?OnPaint@XPNSlider@@MAEXPAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(local_14);
  CPNMemoryDC::CPNMemoryDC(local_208,param_1,local_14);
  (**(code **)(*(int *)this + 0x138))(local_208,local_14);
  (**(code **)(*(int *)this + 300))(local_208,this + 0x13b);
  ComputeTickMarkRects(this,(CPNDC *)local_208);
  ComputeThumb(this,(CPNDC *)local_208);
  iVar1 = (**(code **)(*(int *)this + 0x104))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x140))(local_208,local_14);
  }
  pCVar2 = CPNDrawHelper::GetBtnFaceColor();
  XPNWindow::PaintToScreen((XPNWindow *)this,param_1,(CPNDC *)local_208,local_14,pCVar2);
  CPNMemoryDC::~CPNMemoryDC(local_208);
  return;
}


