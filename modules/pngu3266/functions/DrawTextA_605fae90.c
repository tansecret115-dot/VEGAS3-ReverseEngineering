/* Module: pngu3266.dll
   Function: DrawTextA
   Address: 605fae90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawTextA(char const *,long,long) */

void __thiscall CPNDC::DrawTextA(CPNDC *this,char *param_1,long param_2,long param_3)

{
  size_t c;
  
                    /* 0xae90  1018  ?DrawTextA@CPNDC@@UAEXPBDJJ@Z */
  c = strlen(param_1);
  TextOutA(*(HDC *)(this + 0x1cf),param_2,param_3,param_1,c);
  return;
}


