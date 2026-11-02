/* Module: pngu3266.dll
   Function: operator&=
   Address: 605f1463
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxRect::operator&=(class CPNxRect const &) */

void __thiscall CPNxRect::operator&=(CPNxRect *this,CPNxRect *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x1463  617  ??_4CPNxRect@@QAEXABV0@@Z */
  iVar3 = *(int *)this;
  if (*(int *)this <= *(int *)param_1) {
    iVar3 = *(int *)param_1;
  }
  *(int *)this = iVar3;
  iVar2 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) < *(int *)(this + 4)) {
    iVar2 = *(int *)(this + 4);
  }
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 4) = iVar2;
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = iVar1;
  if (iVar5 <= iVar1) {
    iVar4 = iVar5;
  }
  if ((iVar3 < iVar4) && (iVar3 = iVar1, iVar5 <= iVar1)) {
    iVar3 = iVar5;
  }
  *(int *)(this + 8) = iVar3;
  iVar3 = *(int *)(this + 0xc);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar5 = iVar3;
  if (iVar1 <= iVar3) {
    iVar5 = iVar1;
  }
  if ((iVar2 < iVar5) && (iVar2 = iVar1, iVar3 < iVar1)) {
    iVar2 = iVar3;
  }
  *(int *)(this + 0xc) = iVar2;
  return;
}


