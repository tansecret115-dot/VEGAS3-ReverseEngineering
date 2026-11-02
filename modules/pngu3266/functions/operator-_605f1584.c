/* Module: pngu3266.dll
   Function: operator-
   Address: 605f1584
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNxRect __thiscall CPNxRect::operator-(class CPNxPoint const &)const  */

void __thiscall CPNxRect::operator-(CPNxRect *this,CPNxPoint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_stack_00000008;
  
                    /* 0x1584  605  ??GCPNxRect@@QBE?AV0@ABVCPNxPoint@@@Z */
  iVar1 = *(int *)(this + 4);
  iVar4 = in_stack_00000008[1];
  iVar5 = *in_stack_00000008;
  iVar2 = *(int *)(this + 8);
  iVar3 = *(int *)(this + 0xc);
  *(int *)param_1 = *(int *)this + -iVar5;
  *(int *)(param_1 + 4) = iVar1 + -iVar4;
  *(int *)(param_1 + 8) = iVar2 + -iVar5;
  *(int *)(param_1 + 0xc) = iVar3 + -iVar4;
  return;
}


