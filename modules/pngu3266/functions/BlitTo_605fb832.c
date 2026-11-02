/* Module: pngu3266.dll
   Function: BlitTo
   Address: 605fb832
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::BlitTo(class CPNDC *,long,long,long,long,long,long,long)
    */

void __thiscall
CPNDC::BlitTo(CPNDC *this,CPNDC *param_1,long param_2,long param_3,long param_4,long param_5,
             long param_6,long param_7,long param_8)

{
  DWORD rop;
  
                    /* 0xb832  831  ?BlitTo@CPNDC@@UAEXPAV1@JJJJJJJ@Z */
  rop = TranslateBlitRopCodes(this,param_8);
  if (param_1 != (CPNDC *)0x0) {
    BitBlt(*(HDC *)(this + 0x1cf),param_2,param_3,param_4,param_5,*(HDC *)(param_1 + 0x1cf),param_6,
           param_7,rop);
  }
  return;
}


