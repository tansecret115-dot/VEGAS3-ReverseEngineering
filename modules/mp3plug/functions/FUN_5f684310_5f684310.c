/* Module: mp3plug.dll
   Function: FUN_5f684310
   Address: 5f684310
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f684310(HWND param_1,int *param_2)

{
  HWND pHVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  HWND pHVar6;
  int *lParam;
  LRESULT LVar7;
  int *piVar8;
  WPARAM wParam;
  longlong lVar9;
  BOOL BVar10;
  uint local_224;
  int local_220;
  int iStack_21c;
  uint uStack_214;
  WPARAM WStack_210;
  uint auStack_20c [3];
  uchar auStack_200 [256];
  BYTE aBStack_100 [256];
  
  if ((int *)*param_2 == (int *)0x0) {
    local_224 = 1;
  }
  else {
    local_220 = (**(code **)(*(int *)*param_2 + 0xc))();
    local_224 = (uint)(1 < *(ushort *)(local_220 + 2));
    if (local_224 == 0) {
      uVar3 = local_224;
      pHVar1 = GetDlgItem(param_1,0x426);
      EnableWindow(pHVar1,uVar3);
    }
  }
  CheckDlgButton(param_1,0x426,param_2[0x16] & 1);
  if ((*(byte *)(param_2 + 0x16) & 1) != 0) {
    local_224 = 0;
  }
  if (*(uint *)(local_220 + 4) < 16000) {
    BVar10 = 0;
    param_2[0x13] = 0;
    pHVar1 = GetDlgItem(param_1,0x444);
    EnableWindow(pHVar1,BVar10);
  }
  iVar2 = FUN_5f681cc0(*(int *)(local_220 + 4),0x1f400,(int *)&uStack_214);
  if (iVar2 == 0) {
    uStack_214 = *(uint *)(local_220 + 4);
  }
  if (param_2[5] < 3) {
    uVar3 = 0;
  }
  else {
    uVar3 = (6 < param_2[5]) + 1;
  }
  lVar9 = FUN_5f6ce290(uStack_214,(local_224 != 0) + 1,uVar3);
  pHVar1 = (HWND)lVar9;
  if (pHVar1 != (HWND)0x0) {
    puVar4 = (uint *)FUN_5f6cec90((int)pHVar1);
    if (puVar4 != (uint *)0x0) {
      puVar4[9] = param_2[0xf];
      puVar4[8] = param_2[0xe];
      puVar4[7] = param_2[0xd];
      puVar4[2] = 1;
      puVar4[4] = 1;
      if (param_2[0x13] != 0) {
        puVar4[6] = param_2[0x13];
      }
      FUN_5f6cecb0((uint *)pHVar1,puVar4);
    }
    if (param_2[0x13] == 0) {
      auStack_20c[2] = param_2[4];
      auStack_20c[0] = 0;
      auStack_20c[1] = 0;
      FUN_5f6cea30((uint *)pHVar1,auStack_20c);
    }
    piVar5 = FUN_5f6ce870(&pHVar1->unused);
    pHVar6 = pHVar1;
    if (piVar5 != (int *)0x0) {
      pHVar6 = GetDlgItem(param_1,0x408);
      FUN_5f6842b0(pHVar6);
      FUN_5f69dd80(DAT_5f74d2f4,0x7f,(LPSTR)aBStack_100,0xff);
      iStack_21c = 0;
      if (0 < *piVar5) {
        piVar8 = piVar5 + 1;
        do {
          if (local_224 == 0) {
            if (piVar8[1] == 1) goto LAB_5f6844f1;
          }
          else if (piVar8[1] == 2) {
LAB_5f6844f1:
            FUN_5f6b1a30(auStack_200,aBStack_100);
            WStack_210 = SendMessageA(pHVar6,0x143,0,(LPARAM)auStack_200);
            lParam = calloc(1,0xc);
            if (lParam != (int *)0x0) {
              *lParam = 0;
              lParam[1] = 0;
              lParam[2] = 0;
              *lParam = piVar8[2];
              lParam[1] = *piVar8;
              lParam[2] = piVar8[1];
              SendMessageA(pHVar6,0x151,WStack_210,(LPARAM)lParam);
            }
          }
          iStack_21c = iStack_21c + 1;
          piVar8 = piVar8 + 3;
        } while (iStack_21c < *piVar5);
      }
    }
    FUN_5f6ce3a0(pHVar1);
    if (param_2[0x13] != 0) {
      EnableWindow(pHVar6,0);
    }
    SendMessageA(pHVar6,0x14e,0,0);
    wParam = 0;
    LVar7 = SendMessageA(pHVar6,0x146,0,0);
    if (0 < LVar7) {
      do {
        piVar5 = (int *)SendMessageA(pHVar6,0x150,wParam,0);
        if ((piVar5 != (int *)0x0) && (*piVar5 == param_2[4])) {
          SendMessageA(pHVar6,0x14e,wParam,0);
          if ((param_2[0x14] == 0) || (piVar5[1] == param_2[0x14])) break;
        }
        wParam = wParam + 1;
        LVar7 = SendMessageA(pHVar6,0x146,0,0);
      } while ((int)wParam < LVar7);
    }
    pHVar1 = GetDlgItem(param_1,0x428);
    SendMessageA(pHVar1,0x406,0,0x20000);
    if (param_2[5] < 3) {
      SendMessageA(pHVar1,0x405,1,0);
      uVar3 = 0xab;
    }
    else if (param_2[5] < 7) {
      SendMessageA(pHVar1,0x405,1,1);
      uVar3 = 0xac;
    }
    else {
      SendMessageA(pHVar1,0x405,1,2);
      uVar3 = 0xad;
    }
    FUN_5f69dd80(DAT_5f74d2f4,uVar3,(LPSTR)auStack_200,0xff);
    SetDlgItemTextA(param_1,0x446,(LPCSTR)auStack_200);
    CheckDlgButton(param_1,0x444,(uint)(param_2[0x13] != 0));
    pHVar1 = GetDlgItem(param_1,0x429);
    if (param_2[0x13] == 0) {
      EnableWindow(pHVar1,0);
      BVar10 = 0;
      pHVar6 = GetDlgItem(param_1,0x447);
      EnableWindow(pHVar6,BVar10);
    }
    wsprintfA((LPSTR)auStack_200,"%d",param_2[0x13]);
    SetDlgItemTextA(param_1,0x447,(LPCSTR)auStack_200);
    SendMessageA(pHVar1,0x406,0,0x640001);
    SendMessageA(pHVar1,0x414,10,0);
    if (param_2[0x13] != 0) {
      SendMessageA(pHVar1,0x405,1,param_2[0x13]);
    }
    CheckDlgButton(param_1,0x411,param_2[0xe]);
    CheckDlgButton(param_1,0x412,param_2[0xd]);
    CheckDlgButton(param_1,0x413,param_2[0xf]);
  }
  return;
}


