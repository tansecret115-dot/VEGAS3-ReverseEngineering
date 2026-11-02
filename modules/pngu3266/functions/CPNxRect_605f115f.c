/* Module: pngu3266.dll
   Function: CPNxRect
   Address: 605f115f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNxRect::CPNxRect(struct _PNxRect const &) */

void __thiscall CPNxRect::CPNxRect(CPNxRect *this,_PNxRect *param_1)

{
                    /* 0x115f  167  ??0CPNxRect@@QAE@ABU_PNxRect@@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return;
}


