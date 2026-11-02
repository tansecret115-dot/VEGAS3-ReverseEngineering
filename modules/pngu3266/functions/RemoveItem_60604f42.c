/* Module: pngu3266.dll
   Function: RemoveItem
   Address: 60604f42
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual unsigned long __thiscall CPNTreeControl::RemoveItem(unsigned long) */

ulong __thiscall CPNTreeControl::RemoveItem(CPNTreeControl *this,ulong param_1)

{
  uint lParam;
  int iVar1;
  ulong uVar2;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* 0x14f42  1762  ?RemoveItem@CPNTreeControl@@UAEKK@Z */
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    local_8 = 0;
    iVar1 = FUN_60619b60(*(void **)(this + 0xc0),param_1,&local_8);
    if ((iVar1 != 0) && (local_8 != 0)) {
      if (*(int *)(local_8 + 0xc) != 0) {
        while (local_10 = -(uint)(*(int *)(*(int *)(local_8 + 0xc) + 8) != 0), local_10 != 0) {
          local_c = 0;
          local_14 = 0;
          FUN_60619c50(*(void **)(local_8 + 0xc),&local_10,&local_c,&local_14);
          (**(code **)(*(int *)this + 0x184))(local_c);
        }
      }
      lParam = **(uint **)(local_8 + 0x10);
      SendMessageA(*(HWND *)(this + 0xc),0x1101,0,lParam);
      FUN_60619c00(*(void **)(this + 200),lParam);
      if (*(void **)(local_8 + 0x10) != (void *)0x0) {
        operator_delete(*(void **)(local_8 + 0x10));
        *(undefined4 *)(local_8 + 0x10) = 0;
      }
      uVar2 = XPNTreeControl::RemoveItem((XPNTreeControl *)this,param_1);
      return uVar2;
    }
  }
  return 0;
}


