/* Module: pngu3266.dll
   Function: operator+
   Address: 605f12eb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNxPoint __thiscall CPNxPoint::operator+(class CPNxSize const &)const  */

void __thiscall CPNxPoint::operator+(CPNxPoint *this,CPNxSize *param_1)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
                    /* 0x12eb  608  ??HCPNxPoint@@QBE?AV0@ABVCPNxSize@@@Z
                       0x12eb  610  ??HCPNxSize@@QBE?AV0@ABV0@@Z */
  iVar1 = *(int *)(this + 4);
  iVar2 = in_stack_00000008[1];
  *(int *)param_1 = *in_stack_00000008 + *(int *)this;
  *(int *)(param_1 + 4) = iVar1 + iVar2;
  return;
}


