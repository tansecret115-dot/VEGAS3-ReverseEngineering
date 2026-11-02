/* Module: vegas30.exe
   Function: FUN_0043a8e0
   Address: 0043a8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043a8e0(int param_1,undefined4 param_2,LPARAM *param_3)

{
  int iVar1;
  LPSTR lpString1;
  WPARAM wParam;
  undefined4 uVar2;
  LPCSTR lpString2;
  uint uVar3;
  int iVar4;
  LPARAM *pLVar5;
  LPARAM *pLVar6;
  tagPOINT local_10 [2];
  
  uVar3 = param_3[2];
  if (uVar3 < 0xfffffff5) {
    if (uVar3 == 0xfffffff4) {
      if (DAT_0064bc7c != 0) {
        uVar3 = SendMessageA((HWND)*param_3,0x412,DAT_0064bc7c,0);
        SendMessageA(DAT_00647624,0x111,
                     (3 - (uint)((uVar3 & 2) != 0)) * 0x10000 | DAT_0064bc7c & 0xffff,*param_3);
      }
    }
    else {
      switch(uVar3) {
      case 0xfffffd3a:
        wParam = param_3[3];
        if ((wParam == 0x9d08) || (wParam == 0x9d09)) {
          SendMessageA(*(HWND *)(param_1 + 0x80),0x433,wParam,(LPARAM)local_10);
          MapWindowPoints(*(HWND *)(param_1 + 0x80),(HWND)0x0,local_10,2);
          FUN_004e89e0(param_3[3],local_10);
          return 0;
        }
        break;
      case 0xfffffd3b:
        _SfHelp_ContextHelp_20(1,DAT_00647624,0x3f2,0xf,0);
        return 1;
      case 0xfffffd3c:
        uVar2 = FUN_0043a5a0(*param_3,param_1 + 0x9c,0x57);
        *(undefined4 *)(param_1 + 0x98) = uVar2;
        FUN_0043a6a0(param_1);
        FUN_0043a890(param_1);
        DAT_0064767c = DAT_0064767c | 4;
        if (DAT_0064bc80 == 0) {
          FUN_0043a640(param_3[1],param_1 + 0x9c,*(undefined4 *)(param_1 + 0x98));
          return 0;
        }
        break;
      case 0xfffffd3d:
      case 0xfffffd3e:
        return 1;
      case 0xfffffd3f:
        FUN_0043a640(param_3[1],0,0);
        uVar2 = FUN_0043a430(param_3[1],param_1 + 0x9c,0x57);
        *(undefined4 *)(param_1 + 0x98) = uVar2;
        FUN_0043a6b0(*param_3,param_1 + 0x9c,uVar2);
        FUN_0043a6a0(param_1);
        FUN_0043a890(param_1);
        DAT_0064767c = DAT_0064767c | 4;
        return 0;
      case 0xfffffd40:
        uVar2 = FUN_0043a5a0(*param_3,param_1 + 0x9c,0x57);
        *(undefined4 *)(param_1 + 0x98) = uVar2;
        FUN_0043a890(param_1);
        FUN_0043a640(param_3[1],param_1 + 0x9c,*(undefined4 *)(param_1 + 0x98));
        DAT_0064bc80 = 0;
        return 0;
      case 0xfffffd41:
        FUN_0043a640(param_3[1],param_1 + 0x9c,*(undefined4 *)(param_1 + 0x98));
        DAT_0064767c = DAT_0064767c | 4;
        DAT_0064bc80 = 1;
        return 0;
      case 0xfffffd42:
        if (DAT_0064bc7c != 0) {
          SendMessageA(DAT_00647624,0x111,DAT_0064bc7c & 0xffff | 0x30000,*param_3);
          DAT_0064bc7c = 0;
          return 0;
        }
        break;
      case 0xfffffd43:
        DAT_0064bc7c = param_3[3];
        if ((DAT_0064bc7c != 0x9d73) && (DAT_0064bc7c != 0x9d70)) {
          DAT_0064bc7c = 0;
          return 0;
        }
        SendMessageA(DAT_00647624,0x111,DAT_0064bc7c & 0xffff | 0x20000,*param_3);
        return 0;
      case 0xfffffd44:
        iVar1 = param_3[3];
        if ((-1 < iVar1) && (iVar1 < 100)) {
          pLVar5 = (LPARAM *)(&DAT_00610ff8 + iVar1 * 0x14);
          pLVar6 = param_3 + 4;
          for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pLVar6 = *pLVar5;
            pLVar5 = pLVar5 + 1;
            pLVar6 = pLVar6 + 1;
          }
          lpString2 = (LPCSTR)FUN_0043b1a0(param_3[5]);
          if (lpString2 != (LPCSTR)0x0) {
            iVar1 = param_3[9];
            lpString1 = (LPSTR)param_3[10];
            lstrcpynA(lpString1,lpString2,iVar1);
            lpString1[iVar1 + -1] = '\0';
          }
          return 1;
        }
      }
    }
  }
  return 0;
}


