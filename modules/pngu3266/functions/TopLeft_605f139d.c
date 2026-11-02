/* Module: pngu3266.dll
   Function: TopLeft
   Address: 605f139d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNxPoint __thiscall CPNxRect::TopLeft(void)const  */

void __thiscall CPNxRect::TopLeft(CPNxRect *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x139d  2089  ?TopLeft@CPNxRect@@QBE?AVCPNxPoint@@XZ */
  uVar1 = *(undefined4 *)(this + 4);
  *in_stack_00000004 = *(undefined4 *)this;
  in_stack_00000004[1] = uVar1;
  return;
}


