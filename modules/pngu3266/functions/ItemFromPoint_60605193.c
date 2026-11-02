/* Module: pngu3266.dll
   Function: ItemFromPoint
   Address: 60605193
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNTreeControl::ItemFromPoint(class CPNxPoint,int)const
    */

ulong __thiscall
CPNTreeControl::ItemFromPoint(CPNTreeControl *this,undefined4 param_2,ulong *param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_14;
  undefined4 local_10;
  byte local_c;
  uint local_8;
  
                    /* 0x15193  1531  ?ItemFromPoint@CPNTreeControl@@UBEKVCPNxPoint@@H@Z */
  local_14 = param_2;
  local_10 = param_3;
  SendMessageA(*(HWND *)(this + 0xc),0x1111,0,(LPARAM)&local_14);
  if (local_8 != 0) {
    param_3 = (ulong *)0x0;
    uVar2 = 0;
    iVar1 = FUN_60619b60(*(void **)(this + 200),local_8,&param_3);
    if ((iVar1 != 0) && (param_3 != (ulong *)0x0)) {
      uVar2 = *param_3;
    }
    if (param_4 == 0) {
      return uVar2;
    }
    if ((local_c & 0x46) != 0) {
      return uVar2;
    }
  }
  return 0xffffffff;
}


