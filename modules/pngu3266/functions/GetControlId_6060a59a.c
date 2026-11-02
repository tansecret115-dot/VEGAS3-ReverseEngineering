/* Module: pngu3266.dll
   Function: GetControlId
   Address: 6060a59a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall CPNEvent::GetControlId(void)const  */

ulong __thiscall CPNEvent::GetControlId(CPNEvent *this)

{
                    /* 0x1a59a  1148  ?GetControlId@CPNEvent@@QBEKXZ
                       0x1a59a  1314  ?GetRegion@XPNDC@@QAEPAVCPNRegion@@XZ
                       0x1a59a  1333  ?GetScrollIncrement@CPNScrollHelper@@QAEJXZ
                       0x1a59a  1370  ?GetStyle@XPNFont@@QBEHXZ
                       0x1a59a  1514  ?IsPending@XPNTimer@@QBEHXZ */
  return *(ulong *)(this + 0x18);
}


