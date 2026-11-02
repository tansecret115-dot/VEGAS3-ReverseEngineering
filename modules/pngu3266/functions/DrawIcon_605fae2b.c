/* Module: pngu3266.dll
   Function: DrawIcon
   Address: 605fae2b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDC::DrawIcon(class CPNIcon *,long,long) */

void __thiscall CPNDC::DrawIcon(CPNDC *this,CPNIcon *param_1,long param_2,long param_3)

{
  CPNDC *local_c;
  CPNDC *local_8;
  
                    /* 0xae2b  998  ?DrawIcon@CPNDC@@UAEXPAVCPNIcon@@JJ@Z */
  if (param_1 != (CPNIcon *)0x0) {
    local_c = this;
    local_8 = this;
    (**(code **)(*(int *)param_1 + 0x40))(&local_c);
    if ((local_c == (CPNDC *)0x0) || (local_8 == (CPNDC *)0x0)) {
      ::DrawIcon(*(HDC *)(this + 0x1cf),param_2,param_3,*(HICON *)(param_1 + 0x2a));
    }
    else {
      DrawIconEx(*(HDC *)(this + 0x1cf),param_2,param_3,*(HICON *)(param_1 + 0x2a),(int)local_c,
                 (int)local_8,0,(HBRUSH)0x0,3);
    }
  }
  return;
}


