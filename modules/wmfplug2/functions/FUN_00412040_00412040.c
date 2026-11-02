/* Module: wmfplug2.dll
   Function: FUN_00412040
   Address: 00412040
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00412040(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  HWND pHVar2;
  LRESULT LVar3;
  LPCVOID pMem;
  HGLOBAL pvVar4;
  WPARAM WVar5;
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      FUN_0041e600(param_1,param_4,(int *)&DAT_0047c5e8);
      return 1;
    }
    if (param_2 == 2) {
      FUN_00414170();
      pHVar2 = GetDlgItem(param_1,0x3ed);
      WVar5 = 0;
      LVar3 = SendMessageA(pHVar2,0x146,0,0);
      if (0 < LVar3) {
        do {
          pMem = (LPCVOID)SendMessageA(pHVar2,0x150,WVar5,0);
          if (pMem != (LPCVOID)0x0) {
            pvVar4 = GlobalHandle(pMem);
            GlobalUnlock(pvVar4);
            pvVar4 = GlobalHandle(pMem);
            GlobalFree(pvVar4);
          }
          WVar5 = WVar5 + 1;
          LVar3 = SendMessageA(pHVar2,0x146,0,0);
        } while ((int)WVar5 < LVar3);
      }
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if ((param_2 == 0x18) && (param_3 != 0)) {
      FUN_00411f80(this,param_1);
      return 0;
    }
  }
  else {
    if (param_2 == 0x110) {
      return 1;
    }
    if (param_2 == 0x111) {
      if ((param_3 & 0xffff) == 0x3ec) {
        if (param_3 >> 0x10 == 1) {
          pHVar2 = GetDlgItem(param_1,0x3ec);
          WVar5 = SendMessageA(pHVar2,0x147,0,0);
          if (WVar5 != 0xffffffff) {
            LVar3 = SendMessageA(pHVar2,0x150,WVar5,0);
            *(LRESULT *)(iVar1 + 0x3c) = LVar3;
            pHVar2 = GetDlgItem(param_1,0x3ed);
            FUN_00414a00(pHVar2);
            FUN_00411ed0(pHVar2,(int *)(iVar1 + 0x38));
            *(undefined4 *)((int)this + 0x24) = 1;
          }
        }
      }
      else if (((param_3 & 0xffff) == 0x3ed) && (param_3 >> 0x10 == 1)) {
        *(undefined4 *)((int)this + 0x24) = 1;
        return 0;
      }
    }
  }
  return 0;
}


