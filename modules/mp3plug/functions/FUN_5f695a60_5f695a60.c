/* Module: mp3plug.dll
   Function: FUN_5f695a60
   Address: 5f695a60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_5f695a60(void *this,HWND param_1)

{
  byte bVar1;
  int *piVar2;
  HWND pHVar3;
  int iVar4;
  LRESULT LVar5;
  HWND hWnd;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  BOOL bEnable;
  uint local_110;
  int *local_10c;
  int *local_108;
  int *local_104;
  CHAR local_100 [256];
  
  iVar4 = *(int *)(*(int *)((int)this + 0x34) + 0x424);
  piVar2 = *(int **)(iVar4 + 0x3e);
  if (piVar2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  local_110 = *(int *)(iVar4 + 0x16);
  if (*(int *)(iVar4 + 0x16) == 0) {
    local_110 = iVar4;
  }
  bVar6 = 1 < *(ushort *)(local_110 + 2);
  if (!bVar6) {
    bEnable = 0;
    pHVar3 = GetDlgItem(param_1,0x426);
    EnableWindow(pHVar3,bEnable);
  }
  CheckDlgButton(param_1,0x426,piVar2[0x10] & 1);
  bVar1 = *(byte *)(piVar2 + 0x10);
  bVar7 = 15999 < *(uint *)(local_110 + 4);
  if (!bVar7) {
    piVar2[0xd] = 0;
  }
  uVar8 = (uint)bVar7;
  pHVar3 = GetDlgItem(param_1,0x444);
  EnableWindow(pHVar3,uVar8);
  iVar4 = FUN_5f681cc0(*(int *)(local_110 + 4),0x1f400,(int *)&local_104);
  if (iVar4 == 0) {
    local_104 = *(int **)(local_110 + 4);
  }
  local_108 = (int *)(((bVar1 & 1) == 0 && bVar6) + 1);
  if (piVar2[1] < 3) {
    local_110 = 0;
  }
  else {
    local_110 = (6 < piVar2[1]) + 1;
  }
  pHVar3 = GetDlgItem(param_1,0x408);
  iVar4 = FUN_5f6b67c0((int *)&local_10c,4,-1,-1,0x80000000);
  if (-1 < iVar4) {
    FUN_5f695fe0(local_10c,local_104,(uint)local_108,local_110);
    if ((local_104 != (int *)0xac44) && (piVar2[0xd] == 0)) {
      FUN_5f695fe0(local_10c,(int *)0xac44,(uint)local_108,local_110);
    }
    FUN_5f695e10(pHVar3,local_10c);
    FUN_5f6b66f0(local_10c);
    EnableWindow(pHVar3,(uint)(piVar2[0xd] == 0));
    SendMessageA(pHVar3,0x14e,0,0);
    local_110 = 0;
    LVar5 = SendMessageA(pHVar3,0x146,0,0);
    if (0 < LVar5) {
      do {
        local_108 = (int *)SendMessageA(pHVar3,0x150,local_110,0);
        if ((local_108 != (int *)0x0) && (*local_108 == *piVar2)) {
          SendMessageA(pHVar3,0x14e,local_110,0);
          if ((piVar2[0xe] == 0) || (local_108[1] == piVar2[0xe])) break;
        }
        local_110 = local_110 + 1;
        LVar5 = SendMessageA(pHVar3,0x146,0,0);
      } while ((int)local_110 < LVar5);
    }
    pHVar3 = GetDlgItem(param_1,0x428);
    SendMessageA(pHVar3,0x406,0,0x20000);
    if (piVar2[1] < 3) {
      SendMessageA(pHVar3,0x405,1,0);
      uVar8 = 0xab;
    }
    else if (piVar2[1] < 7) {
      SendMessageA(pHVar3,0x405,1,1);
      uVar8 = 0xac;
    }
    else {
      SendMessageA(pHVar3,0x405,1,2);
      uVar8 = 0xad;
    }
    FUN_5f69dd80(DAT_5f74d2f4,uVar8,local_100,0xff);
    SetDlgItemTextA(param_1,0x446,local_100);
    CheckDlgButton(param_1,0x444,(uint)(piVar2[0xd] != 0));
    pHVar3 = GetDlgItem(param_1,0x429);
    EnableWindow(pHVar3,(uint)(piVar2[0xd] != 0));
    uVar8 = (uint)(piVar2[0xd] != 0);
    hWnd = GetDlgItem(param_1,0x447);
    EnableWindow(hWnd,uVar8);
    wsprintfA(local_100,"%d",piVar2[0xd]);
    SetDlgItemTextA(param_1,0x447,local_100);
    SendMessageA(pHVar3,0x406,0,0x640001);
    SendMessageA(pHVar3,0x414,10,0);
    if (piVar2[0xd] != 0) {
      SendMessageA(pHVar3,0x405,1,piVar2[0xd]);
    }
    CheckDlgButton(param_1,0x411,piVar2[10]);
    CheckDlgButton(param_1,0x412,piVar2[9]);
    CheckDlgButton(param_1,0x413,piVar2[0xb]);
    iVar4 = 0;
  }
  return iVar4;
}


