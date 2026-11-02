/* Module: pngu3266.dll
   Function: operator_struct_tagPOINT
   Address: 605f131c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNxPoint::operator struct tagPOINT(void) */

tagPOINT __thiscall CPNxPoint::operator_struct_tagPOINT(CPNxPoint *this)

{
  LONG LVar1;
  LONG LVar2;
  tagPOINT tVar3;
  LONG *in_stack_00000004;
  
                    /* 0x131c  596  ??BCPNxPoint@@QAE?AUtagPOINT@@XZ
                       0x131c  597  ??BCPNxPoint@@QBE?AUtagPOINT@@XZ
                       0x131c  600  ??BCPNxSize@@QAE?AUtagSIZE@@XZ
                       0x131c  601  ??BCPNxSize@@QBE?AUtagSIZE@@XZ */
  LVar1 = *(LONG *)this;
  LVar2 = *(LONG *)(this + 4);
  *in_stack_00000004 = LVar1;
  in_stack_00000004[1] = LVar2;
  tVar3.y = LVar1;
  tVar3.x = (LONG)in_stack_00000004;
  return tVar3;
}


