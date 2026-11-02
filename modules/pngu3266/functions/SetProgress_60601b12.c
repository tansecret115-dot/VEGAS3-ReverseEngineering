/* Module: pngu3266.dll
   Function: SetProgress
   Address: 60601b12
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNProgress::SetProgress(unsigned short) */

void __thiscall CPNProgress::SetProgress(CPNProgress *this,ushort param_1)

{
                    /* 0x11b12  1968  ?SetProgress@CPNProgress@@UAEXG@Z */
  CPNWindow::SendMessageA((CPNWindow *)this,0x402,(uint)param_1,0);
  return;
}


