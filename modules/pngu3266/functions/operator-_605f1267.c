/* Module: pngu3266.dll
   Function: operator-
   Address: 605f1267
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNxPoint __thiscall CPNxPoint::operator-(class CPNxSize const &)const  */

void __thiscall CPNxPoint::operator-(CPNxPoint *this,CPNxSize *param_1)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
                    /* 0x1267  602  ??GCPNxPoint@@QBE?AV0@ABVCPNxSize@@@Z
                       0x1267  604  ??GCPNxPoint@@QBE?AVCPNxSize@@ABV0@@Z
                       0x1267  606  ??GCPNxSize@@QBE?AV0@ABV0@@Z */
  iVar1 = *(int *)(this + 4);
  iVar2 = in_stack_00000008[1];
  *(int *)param_1 = *(int *)this - *in_stack_00000008;
  *(int *)(param_1 + 4) = iVar1 - iVar2;
  return;
}


