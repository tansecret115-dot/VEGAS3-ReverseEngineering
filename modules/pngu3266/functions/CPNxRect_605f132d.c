/* Module: pngu3266.dll
   Function: CPNxRect
   Address: 605f132d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNxRect::CPNxRect(long,long,long,long) */

void __thiscall
CPNxRect::CPNxRect(CPNxRect *this,long param_1,long param_2,long param_3,long param_4)

{
                    /* 0x132d  169  ??0CPNxRect@@QAE@JJJJ@Z */
  *(long *)this = param_1;
  *(long *)(this + 4) = param_2;
  *(long *)(this + 8) = param_3;
  *(long *)(this + 0xc) = param_4;
  return;
}


