/* Module: pngu3266.dll
   Function: BottomRight
   Address: 605f13ae
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNxPoint __thiscall CPNxRect::BottomRight(void)const  */

void __thiscall CPNxRect::BottomRight(CPNxRect *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x13ae  835  ?BottomRight@CPNxRect@@QBE?AVCPNxPoint@@XZ */
  uVar1 = *(undefined4 *)(this + 0xc);
  *in_stack_00000004 = *(undefined4 *)(this + 8);
  in_stack_00000004[1] = uVar1;
  return;
}


