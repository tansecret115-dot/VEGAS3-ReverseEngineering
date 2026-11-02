/* Module: pngu3266.dll
   Function: OnPaint
   Address: 60611aad
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNScrollingText::OnPaint(class CPNDC &) */

void __thiscall XPNScrollingText::OnPaint(XPNScrollingText *this,CPNDC *param_1)

{
  CPNFont *pCVar1;
  CPNBrush *pCVar2;
  CPNMemoryDC local_258 [500];
  CPNBrush local_64 [60];
  CPNFont *local_28;
  CPNColor *local_20;
  CPNxRect local_1c [20];
  CPNColor *local_8;
  
                    /* 0x21aad  1672  ?OnPaint@XPNScrollingText@@UAEXAAVCPNDC@@@Z */
  (**(code **)(*(int *)this + 0x3c))(local_1c);
  CPNMemoryDC::CPNMemoryDC(local_258,param_1,local_1c);
  if (&stack0x00000000 != (undefined1 *)0x258) {
    local_8 = XPNDC::SetTextFgColor((XPNDC *)local_258,(CPNColor *)(this + 0xdf));
    local_20 = XPNDC::SetTextBgColor((XPNDC *)local_258,(CPNColor *)(this + 0xc0));
  }
  pCVar1 = CPNDrawHelper::GetControlsFont();
  if (&stack0x00000000 != (undefined1 *)0x258) {
    local_28 = XPNDC::SetFont((XPNDC *)local_258,pCVar1);
  }
  pCVar2 = (CPNBrush *)CPNBrush::CPNBrush(local_64,(CPNColor *)(this + 0xc0),8);
  CPNDC::FillRectangle((CPNDC *)local_258,local_1c,pCVar2);
  CPNBrush::~CPNBrush(local_64);
  if (*(int *)(this + 0x12e) == 3) {
    OnPaintScrollUp(this,(CPNDC *)local_258);
  }
  else {
    OnPaintNoScroll(this,(CPNDC *)local_258);
  }
  XPNWindow::PaintToScreen
            ((XPNWindow *)this,param_1,(CPNDC *)local_258,local_1c,(CPNColor *)(this + 0xc0));
  if (&stack0x00000000 != (undefined1 *)0x258) {
    XPNDC::SetFont((XPNDC *)local_258,local_28);
    XPNDC::SetTextBgColor((XPNDC *)local_258,local_20);
    XPNDC::SetTextFgColor((XPNDC *)local_258,local_8);
  }
  CPNMemoryDC::~CPNMemoryDC(local_258);
  return;
}


