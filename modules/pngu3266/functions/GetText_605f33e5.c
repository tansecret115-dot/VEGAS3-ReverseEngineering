/* Module: pngu3266.dll
   Function: GetText
   Address: 605f33e5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNControl::GetText(char *,long)const  */

void __thiscall CPNControl::GetText(CPNControl *this,char *param_1,long param_2)

{
                    /* 0x33e5  1384  ?GetText@CPNControl@@UBEXPADJ@Z */
  (**(code **)(*(int *)this + 0x24))(param_1,param_2);
  return;
}


