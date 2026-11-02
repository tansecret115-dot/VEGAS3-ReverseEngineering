/* Module: pngu3266.dll
   Function: OnPaint
   Address: 60610348
   Source: Ghidra pseudocode (Stage 10 batch) */


/* protected: void __thiscall XPNScrollButton::OnPaint(class CPNDC &) */

void __thiscall XPNScrollButton::OnPaint(XPNScrollButton *this,CPNDC *param_1)

{
  ulong uVar1;
  CPNColor *pCVar2;
  CPNMemoryDC local_208 [500];
  CPNxRect local_14 [16];
  
                    /* 0x20348  1671  ?OnPaint@XPNScrollButton@@IAEXAAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(local_14);
  CPNMemoryDC::CPNMemoryDC(local_208,param_1,local_14);
  uVar1 = *(ulong *)(this + 0xb8);
  CPNDC::FillRectangle((CPNDC *)local_208,local_14,&CPNDrawHelper::m_btnFaceBrush);
  DrawBorders(this,(CPNDC *)local_208,local_14,uVar1);
  DrawArrows(this,(CPNDC *)local_208,local_14,uVar1);
  pCVar2 = CPNDrawHelper::GetBtnFaceColor();
  XPNWindow::PaintToScreen((XPNWindow *)this,param_1,(CPNDC *)local_208,local_14,pCVar2);
  CPNMemoryDC::~CPNMemoryDC(local_208);
  return;
}


