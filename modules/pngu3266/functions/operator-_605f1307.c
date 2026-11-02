/* Module: pngu3266.dll
   Function: operator-
   Address: 605f1307
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNxPoint __thiscall CPNxPoint::operator-(void)const  */

void __thiscall CPNxPoint::operator-(CPNxPoint *this)

{
  int iVar1;
  int *in_stack_00000004;
  
                    /* 0x1307  603  ??GCPNxPoint@@QBE?AV0@XZ
                       0x1307  607  ??GCPNxSize@@QBE?AV0@XZ */
  iVar1 = *(int *)(this + 4);
  *in_stack_00000004 = -*(int *)this;
  in_stack_00000004[1] = -iVar1;
  return;
}


