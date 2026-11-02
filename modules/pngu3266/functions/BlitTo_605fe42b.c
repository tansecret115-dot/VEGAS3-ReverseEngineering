/* Module: pngu3266.dll
   Function: BlitTo
   Address: 605fe42b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNMemoryDC::BlitTo(class CPNDC *,class CPNxRect &,class CPNxRect
   &,unsigned long) */

void __thiscall
CPNMemoryDC::BlitTo(CPNMemoryDC *this,CPNDC *param_1,CPNxRect *param_2,CPNxRect *param_3,
                   ulong param_4)

{
  HDC hdc;
  
                    /* 0xe42b  832  ?BlitTo@CPNMemoryDC@@QAEXPAVCPNDC@@AAVCPNxRect@@1K@Z */
  if (param_1 == (CPNDC *)0x0) {
    hdc = *(HDC *)(this + 0x1e3);
  }
  else {
    hdc = *(HDC *)(param_1 + 0x1cf);
  }
  if (hdc != (HDC)0x0) {
    BitBlt(hdc,*(int *)param_2,*(int *)(param_2 + 4),*(int *)(param_2 + 8) - *(int *)param_2,
           *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4),*(HDC *)(this + 0x1cf),*(int *)param_3,
           *(int *)(param_3 + 4),param_4);
  }
  return;
}


