/* Module: pngu3266.dll
   Function: Size
   Address: 605f1384
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNxSize __thiscall CPNxRect::Size(void)const  */

void __thiscall CPNxRect::Size(CPNxRect *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  
                    /* 0x1384  2068  ?Size@CPNxRect@@QBE?AVCPNxSize@@XZ */
  iVar1 = *(int *)(this + 8);
  iVar2 = *(int *)this;
  in_stack_00000004[1] = *(int *)(this + 0xc) - *(int *)(this + 4);
  *in_stack_00000004 = iVar1 - iVar2;
  return;
}


