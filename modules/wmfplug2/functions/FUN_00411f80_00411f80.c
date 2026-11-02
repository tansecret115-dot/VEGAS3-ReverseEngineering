/* Module: wmfplug2.dll
   Function: FUN_00411f80
   Address: 00411f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00411f80(void *this,HWND param_1)

{
  int iVar1;
  HWND pHVar2;
  WPARAM WVar3;
  LRESULT LVar4;
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  pHVar2 = GetDlgItem(param_1,0x3ec);
  if (pHVar2 != (HWND)0x0) {
    WVar3 = SendMessageA(pHVar2,0x147,0,0);
    if (WVar3 != 0xffffffff) {
      LVar4 = SendMessageA(pHVar2,0x150,WVar3,0);
      *(LRESULT *)(iVar1 + 0x3c) = LVar4;
    }
  }
  pHVar2 = GetDlgItem(param_1,0x3ed);
  if (pHVar2 != (HWND)0x0) {
    WVar3 = SendMessageA(pHVar2,0x147,0,0);
    if (WVar3 != 0xffffffff) {
      LVar4 = SendMessageA(pHVar2,0x150,WVar3,0);
      if (LVar4 != 0) {
        *(int *)(iVar1 + 0x38) = *(int *)(LVar4 + 8) << 3;
        *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(LVar4 + 4);
        *(uint *)(iVar1 + 0x44) = (uint)*(ushort *)(LVar4 + 2);
        *(uint *)(iVar1 + 0x48) = (uint)*(ushort *)(LVar4 + 0xc);
      }
    }
  }
  return 0;
}


