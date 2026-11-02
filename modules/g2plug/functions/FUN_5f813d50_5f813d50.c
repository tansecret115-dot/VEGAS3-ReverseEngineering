/* Module: g2plug.dll
   Function: FUN_5f813d50
   Address: 5f813d50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5f813d50(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  HWND pHVar2;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  if (*(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e) == 0) {
    return 0x80070057;
  }
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      FUN_5f8112a0(param_1,param_4,(int *)&DAT_5f86b5a0);
      return 1;
    }
    if (param_2 == 2) {
      FUN_5f814610();
      *(undefined4 *)((int)this + 0x10) = 0;
      return 1;
    }
    if ((param_2 == 0x18) && (param_3 != 0)) {
      FUN_5f813ce0(this,param_1);
      return 0;
    }
  }
  else {
    if (param_2 == 0x110) {
      LVar5 = 0;
      WVar4 = 3;
      UVar3 = 0xc5;
      pHVar2 = GetDlgItem(param_1,0x3fe);
      SendMessageA(pHVar2,UVar3,WVar4,LVar5);
      LVar5 = 0;
      WVar4 = 3;
      UVar3 = 0xc5;
      pHVar2 = GetDlgItem(param_1,0x3ff);
      SendMessageA(pHVar2,UVar3,WVar4,LVar5);
      return 1;
    }
    if (param_2 == 0x111) {
      uVar1 = param_3 & 0xffff;
      if (uVar1 < 0x3f0) {
        if (uVar1 != 0x3ef) {
          if (uVar1 == 9) {
            return 1;
          }
          if (uVar1 != 1000) {
            return 0;
          }
        }
      }
      else {
        if (uVar1 < 0x3f1) {
          return 0;
        }
        if (0x3f2 < uVar1) {
          return 0;
        }
      }
      *(undefined4 *)((int)this + 0x24) = 1;
    }
  }
  return 0;
}


