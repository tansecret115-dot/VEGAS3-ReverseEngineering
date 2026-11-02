/* Module: vidcap30.exe
   Function: FUN_00519080
   Address: 00519080
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00519080(byte *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  SHORT SVar2;
  HWND pHVar3;
  byte bVar4;
  int iVar5;
  HWND local_18;
  WPARAM local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pHVar3 = GetCapture();
  if (pHVar3 == *(HWND *)(param_1 + 0x3c)) {
    if ((param_2 == 0x1b) && (param_3 != 0)) {
      *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x7c);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x84);
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x88);
      FUN_00516ea0(param_1,0,0,0);
      return;
    }
  }
  else {
    if (param_3 != 0) {
      switch(param_2) {
      case 0x21:
        SVar2 = GetKeyState(0x11);
        iVar5 = ((-1 < SVar2) - 1 & 0xfffffffe) + 0x10;
        break;
      case 0x22:
        SVar2 = GetKeyState(0x11);
        iVar5 = ((-1 < SVar2) - 1 & 0xfffffffe) + 0x11;
        break;
      default:
        if ((*param_1 & 2) != 0) {
          if (param_2 != 9) {
            if (param_2 != 0x20) goto LAB_005193a7;
            if (*(int *)(param_1 + 0x18c) != -1) {
              bVar4 = (byte)*(int *)(param_1 + 0x18c);
              if (*(int *)(param_1 + 0x150) != 0) {
                *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) ^ 1 << (bVar4 & 0x1f);
                FUN_00515a00(param_1,1);
                return;
              }
              *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) ^ 1 << (bVar4 & 0x1f);
              FUN_00515a00(param_1,1);
              return;
            }
          }
          SVar2 = GetKeyState(0x10);
          if (SVar2 < 0) {
            if (*(int *)(param_1 + 0x98) != 0) {
              iVar5 = *(int *)(param_1 + 0x18c);
              *(int *)(param_1 + 0x18c) = iVar5 + -1;
              if (iVar5 + -1 < 0) {
                pHVar3 = *(HWND *)(param_1 + 0x44);
                param_1[0x18c] = 8;
                param_1[0x18d] = 0;
                param_1[0x18e] = 0;
                param_1[399] = 0;
                if (pHVar3 == (HWND)0x0) {
                  pHVar3 = GetParent(*(HWND *)(param_1 + 0x3c));
                }
                PostMessageA(pHVar3,0x28,1,0);
              }
              iVar5 = *(int *)(param_1 + 0x18c);
              uVar1 = *(uint *)(param_1 + 0x98) & 1 << ((byte)iVar5 & 0x1f);
              while (uVar1 == 0) {
                *(int *)(param_1 + 0x18c) = iVar5 + -1;
                if (iVar5 + -1 < 0) {
                  pHVar3 = *(HWND *)(param_1 + 0x44);
                  param_1[0x18c] = 8;
                  param_1[0x18d] = 0;
                  param_1[0x18e] = 0;
                  param_1[399] = 0;
                  if (pHVar3 == (HWND)0x0) {
                    pHVar3 = GetParent(*(HWND *)(param_1 + 0x3c));
                  }
                  PostMessageA(pHVar3,0x28,1,0);
                }
                iVar5 = *(int *)(param_1 + 0x18c);
                uVar1 = *(uint *)(param_1 + 0x98) & 1 << ((byte)iVar5 & 0x1f);
              }
              FUN_00515a00(param_1,1);
              return;
            }
          }
          else if (*(int *)(param_1 + 0x98) != 0) {
            iVar5 = *(int *)(param_1 + 0x18c);
            *(uint *)(param_1 + 0x18c) = iVar5 + 1U;
            if (8 < iVar5 + 1U) {
              pHVar3 = *(HWND *)(param_1 + 0x44);
              param_1[0x18c] = 0;
              param_1[0x18d] = 0;
              param_1[0x18e] = 0;
              param_1[399] = 0;
              if (pHVar3 == (HWND)0x0) {
                pHVar3 = GetParent(*(HWND *)(param_1 + 0x3c));
              }
              PostMessageA(pHVar3,0x28,0,0);
            }
            iVar5 = *(int *)(param_1 + 0x18c);
            uVar1 = *(uint *)(param_1 + 0x98) & 1 << ((byte)iVar5 & 0x1f);
            while (uVar1 == 0) {
              *(uint *)(param_1 + 0x18c) = iVar5 + 1U;
              if (8 < iVar5 + 1U) {
                pHVar3 = *(HWND *)(param_1 + 0x44);
                param_1[0x18c] = 0;
                param_1[0x18d] = 0;
                param_1[0x18e] = 0;
                param_1[399] = 0;
                if (pHVar3 == (HWND)0x0) {
                  pHVar3 = GetParent(*(HWND *)(param_1 + 0x3c));
                }
                PostMessageA(pHVar3,0x28,0,0);
              }
              iVar5 = *(int *)(param_1 + 0x18c);
              uVar1 = *(uint *)(param_1 + 0x98) & 1 << ((byte)iVar5 & 0x1f);
            }
            FUN_00515a00(param_1,1);
            return;
          }
        }
LAB_005193a7:
        local_14 = *(WPARAM *)(param_1 + 0x40);
        local_18 = *(HWND *)(param_1 + 0x3c);
        pHVar3 = *(HWND *)(param_1 + 0x44);
        local_10 = 0xffffff9a;
        local_c = param_2;
        local_8 = param_4;
        local_4 = param_5;
        if (pHVar3 == (HWND)0x0) {
          pHVar3 = GetParent(local_18);
        }
        SendMessageA(pHVar3,0x4e,local_14,(LPARAM)&local_18);
        return;
      case 0x25:
        iVar5 = 10;
        break;
      case 0x26:
        iVar5 = 0xb;
        break;
      case 0x27:
        iVar5 = 0xc;
        break;
      case 0x28:
        iVar5 = 0xd;
        break;
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
        goto switchD_0051911b_caseD_60;
      }
      FUN_00516fa0(param_1,iVar5,0,0x3ff00000);
      FUN_00515a00(param_1,1);
      (**(code **)(param_1 + 0x29c))
                (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x298),iVar5,
                 param_1 + 0xc,(1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) + -1);
      return;
    }
    switch(param_2) {
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
      (**(code **)(param_1 + 0x29c))
                (param_1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x298),8,
                 param_1 + 0xc,(1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) + -1);
    }
  }
switchD_0051911b_caseD_60:
  return;
}


