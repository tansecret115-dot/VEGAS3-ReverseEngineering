/* Module: wmfplug2.dll
   Function: FUN_004133f0
   Address: 004133f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004133f0(void *this,HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  undefined4 uVar1;
  HWND pHVar2;
  int iVar3;
  uint uVar4;
  BOOL BVar5;
  LRESULT LVar6;
  uint nIDDlgItem;
  UINT UVar7;
  WPARAM WVar8;
  LPARAM LVar9;
  CHAR local_68 [40];
  uchar local_40 [64];
  
  iVar3 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar3 == 0) {
    return 0x80070057;
  }
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      LVar9 = 0;
      WVar8 = 5;
      UVar7 = 0xc5;
      pHVar2 = GetDlgItem(param_1,0x3f7);
      SendMessageA(pHVar2,UVar7,WVar8,LVar9);
      LVar9 = 0;
      WVar8 = 5;
      UVar7 = 0xc5;
      pHVar2 = GetDlgItem(param_1,0x3f8);
      SendMessageA(pHVar2,UVar7,WVar8,LVar9);
      LVar9 = 0;
      WVar8 = 2;
      UVar7 = 0xc5;
      pHVar2 = GetDlgItem(param_1,0x3ee);
      SendMessageA(pHVar2,UVar7,WVar8,LVar9);
      LVar9 = 0;
      WVar8 = 4;
      UVar7 = 0xc5;
      pHVar2 = GetDlgItem(param_1,0x3ef);
      SendMessageA(pHVar2,UVar7,WVar8,LVar9);
      LVar9 = 0;
      WVar8 = 2;
      UVar7 = 0xc5;
      pHVar2 = GetDlgItem(param_1,0x401);
      SendMessageA(pHVar2,UVar7,WVar8,LVar9);
      return 1;
    }
    if (param_2 == 2) {
      FUN_00414170();
      *(undefined4 *)((int)this + 0x10) = 0;
      return 1;
    }
    if (param_2 == 0x18) {
      if (param_3 != 0) {
        FUN_00412fb0(this,param_1);
        return 0;
      }
    }
    else if (param_2 == 0x53) {
      FUN_0041e600(param_1,(int)param_4,(int *)&DAT_0047c630);
      return 1;
    }
  }
  else if (param_2 == 0x111) {
    nIDDlgItem = param_3 & 0xffff;
    uVar4 = param_3 >> 0x10;
    switch(nIDDlgItem) {
    case 0x3ec:
      if (uVar4 == 1) {
        *(undefined4 *)((int)this + 0x24) = 1;
        WVar8 = SendMessageA(param_4,0x147,0,0);
        if (WVar8 != 0xffffffff) {
          LVar6 = SendMessageA(param_4,0x150,WVar8,0);
          uVar4 = (uint)(LVar6 == 0x32564d57);
          pHVar2 = GetDlgItem(param_1,0x402);
          EnableWindow(pHVar2,uVar4);
          return 0;
        }
      }
      break;
    case 0x3ee:
    case 0x3ef:
    case 0x3f7:
    case 0x3f8:
    case 0x401:
      if (uVar4 == 0x200) {
        if ((nIDDlgItem == 0x3f7) || (nIDDlgItem == 0x3f8)) {
          local_68[0] = '\0';
          GetWindowTextA(param_4,local_68,0x28);
          uVar1 = *(undefined4 *)((int)this + 0x24);
          if (nIDDlgItem == 0x3f7) {
            pHVar2 = (HWND)FUN_0042d3e0(local_68,0x140,2,800,(undefined4 *)0x0);
          }
          else {
            pHVar2 = param_1;
            if (nIDDlgItem == 0x3f8) {
              pHVar2 = (HWND)FUN_0042d3e0(local_68,0xf0,2,600,(undefined4 *)0x0);
            }
          }
          if (((uint)pHVar2 & 1) != 0) {
            pHVar2 = (HWND)((int)&pHVar2->unused + 1);
          }
          SetDlgItemInt(param_1,nIDDlgItem,(UINT)pHVar2,1);
          *(undefined4 *)((int)this + 0x24) = uVar1;
          return 0;
        }
      }
      else if (uVar4 == 0x300) {
        *(undefined4 *)((int)this + 0x24) = 1;
      }
      break;
    case 0x3f5:
      if (uVar4 == 1) {
        FUN_00412fb0(this,param_1);
        SetDlgItemInt(param_1,0x3f7,*(UINT *)(iVar3 + 0x5c),1);
        SetDlgItemInt(param_1,0x3f8,*(UINT *)(iVar3 + 0x60),1);
        FUN_00412f60(param_1,(uint)(*(int *)(iVar3 + 0x58) == 5));
        *(undefined4 *)((int)this + 0x24) = 1;
        return 0;
      }
      break;
    case 0x3fb:
      if (uVar4 == 0) {
        uVar4 = (uint)(*(int *)(iVar3 + 4) == 0);
        *(uint *)(iVar3 + 4) = uVar4;
        FUN_00412eb0(param_1,uVar4);
        if ((*(int *)(iVar3 + 4) == 0) || (*(int *)(iVar3 + 0x58) != 5)) {
          BVar5 = 0;
        }
        else {
          BVar5 = 1;
        }
        FUN_00412f60(param_1,BVar5);
        *(undefined4 *)((int)this + 0x24) = 1;
      }
      return 1;
    case 0x400:
      if (uVar4 == 0) {
        *(undefined4 *)((int)this + 0x24) = 1;
        UVar7 = IsDlgButtonChecked(param_1,0x400);
        pHVar2 = GetDlgItem(param_1,0x401);
        EnableWindow(pHVar2,UVar7);
      }
      return 1;
    case 0x402:
      if (uVar4 == 0) {
        *(undefined4 *)((int)this + 0x24) = 1;
        return 0;
      }
    }
  }
  else if (((param_2 == 0x114) && (iVar3 = GetDlgCtrlID(param_4), iVar3 == 0x3eb)) &&
          ((ushort)param_3 < 6)) {
    SendMessageA(param_4,0x400,0,0);
    FUN_00425a40(local_40,(BYTE *)"%d %%");
    SetDlgItemTextA(param_1,0x3f0,(LPCSTR)local_40);
    *(undefined4 *)((int)this + 0x24) = 1;
    return 0;
  }
  return 0;
}


