/* Module: pngu3266.dll
   Function: XPNFrame
   Address: 605f375a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNFrame::XPNFrame(class XPNFrame const &) */

XPNFrame * __thiscall XPNFrame::XPNFrame(XPNFrame *this,XPNFrame *param_1)

{
                    /* 0x375a  219  ??0XPNFrame@@QAE@ABV0@@Z */
  CPNWindow::CPNWindow((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


