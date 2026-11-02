/* Module: pngu3266.dll
   Function: operator+=
   Address: 605f151b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxRect::operator+=(class CPNxPoint const &) */

void __thiscall CPNxRect::operator+=(CPNxRect *this,CPNxPoint *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x151b  612  ??YCPNxRect@@QAEXABVCPNxPoint@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)param_1;
  *(int *)this = *(int *)this + iVar2;
  *(int *)(this + 4) = *(int *)(this + 4) + iVar1;
  *(int *)(this + 8) = *(int *)(this + 8) + iVar2;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + iVar1;
  return;
}


