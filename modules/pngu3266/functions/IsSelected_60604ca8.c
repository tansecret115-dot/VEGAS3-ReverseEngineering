/* Module: pngu3266.dll
   Function: IsSelected
   Address: 60604ca8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNTreeControl::IsSelected(unsigned long)const  */

int __thiscall CPNTreeControl::IsSelected(CPNTreeControl *this,ulong param_1)

{
  uint uVar1;
  int iVar2;
  CPNTreeControl *local_8;
  
                    /* 0x14ca8  1520  ?IsSelected@CPNTreeControl@@UBEHK@Z */
  local_8 = this;
  uVar1 = SendMessageA(*(HWND *)(this + 0xc),0x110a,9,0);
  if (uVar1 != 0) {
    local_8 = (CPNTreeControl *)0x0;
    iVar2 = FUN_60619b60(*(void **)(this + 200),uVar1,&local_8);
    if ((iVar2 != 0) && (local_8 != (CPNTreeControl *)0x0)) {
      return (uint)(*(ulong *)local_8 == param_1);
    }
  }
  return 0;
}


