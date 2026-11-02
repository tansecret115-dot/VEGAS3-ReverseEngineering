/* Module: pngu3266.dll
   Function: DrawRectangle
   Address: 605fad8b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawRectangle(class CPNxRect &) */

void __thiscall CPNDC::DrawRectangle(CPNDC *this,CPNxRect *param_1)

{
                    /* 0xad8b  1008  ?DrawRectangle@CPNDC@@UAEXAAVCPNxRect@@@Z */
  Rectangle(*(HDC *)(this + 0x1cf),*(int *)param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8),
            *(int *)(param_1 + 0xc));
  return;
}


