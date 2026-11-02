/* Module: extmondrv.dll
   Function: FUN_00409b50
   Address: 00409b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00409b50(void *this,int param_1,uint param_2,uint param_3,HWND param_4)

{
  undefined4 uVar1;
  int iVar2;
  HWND pHVar3;
  UINT Msg;
  WPARAM wParam;
  uchar *lpString;
  LPARAM lParam;
  uchar local_104 [260];
  
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(int *)((int)this + 0x10) = param_1;
      *(undefined4 *)((int)this + 0x28) = 1;
      (**(code **)(*(int *)this + 0x44))();
      FUN_00409da0(this);
      *(undefined4 *)((int)this + 0x24) = 0;
      *(undefined4 *)((int)this + 0x28) = 0;
      return 1;
    }
    if (param_2 == 2) {
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if (param_2 == 0x53) {
      uVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,param_4);
      return uVar1;
    }
  }
  else {
    if (param_2 == 0x111) {
      if (*(int *)((int)this + 0x30) == 0) {
        return 1;
      }
      uVar1 = (**(code **)(*(int *)this + 0x48))(param_1,param_3 >> 0x10,param_3 & 0xffff,param_4);
      return uVar1;
    }
    if ((param_2 == 0x114) && (iVar2 = GetDlgCtrlID(param_4), iVar2 == 0x3f5)) {
      iVar2 = FUN_0040ff80(0x114,param_3,param_4,1,4);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (8 < iVar2) {
        iVar2 = 8;
      }
      *(int *)((int)this + 0x40) = iVar2;
      FUN_004220d0(local_104,"%d");
      lpString = local_104;
      pHVar3 = GetDlgItem(*(HWND *)((int)this + 0x10),0x3f7);
      SetWindowTextA(pHVar3,(LPCSTR)lpString);
      lParam = 0;
      wParam = 0x3000000;
      *(undefined4 *)((int)this + 0x24) = 1;
      Msg = 0x111;
      pHVar3 = GetParent(*(HWND *)((int)this + 0x10));
      pHVar3 = GetParent(pHVar3);
      SendMessageA(pHVar3,Msg,wParam,lParam);
    }
  }
  return 0;
}


