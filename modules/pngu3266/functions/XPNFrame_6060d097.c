/* Module: pngu3266.dll
   Function: XPNFrame
   Address: 6060d097
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall XPNFrame::XPNFrame(void) */

XPNFrame * __thiscall XPNFrame::XPNFrame(XPNFrame *this)

{
                    /* 0x1d097  220  ??0XPNFrame@@QAE@XZ */
  CPNWindow::CPNWindow((CPNWindow *)this);
  *(undefined ***)this = &_vftable_;
  return this;
}


