/* Module: pngu3266.dll
   Function: CPNxRect
   Address: 605f134d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNxRect::CPNxRect(class CPNxPoint const &,class CPNxSize const &) */

void __thiscall CPNxRect::CPNxRect(CPNxRect *this,CPNxPoint *param_1,CPNxSize *param_2)

{
  int iVar1;
  
                    /* 0x134d  168  ??0CPNxRect@@QAE@ABVCPNxPoint@@ABVCPNxSize@@@Z */
  iVar1 = *(int *)param_1;
  *(int *)this = iVar1;
  *(int *)(this + 8) = *(int *)param_2 + iVar1;
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(this + 4) = iVar1;
  *(int *)(this + 0xc) = *(int *)(param_2 + 4) + iVar1;
  return;
}


