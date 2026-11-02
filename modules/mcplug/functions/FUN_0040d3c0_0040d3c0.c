/* Module: mcplug.dll
   Function: FUN_0040d3c0
   Address: 0040d3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0040d3c0(void *this,HWND param_1,uint param_2,uint param_3,int param_4)

{
  short sVar1;
  HWND pHVar2;
  LRESULT LVar3;
  HWND pHVar4;
  LRESULT LVar5;
  LPSTR pCVar6;
  code *pcVar7;
  bool bVar8;
  UINT UVar9;
  WPARAM WVar10;
  LPARAM LVar11;
  BOOL BVar12;
  uint uVar13;
  
  pHVar4 = param_1;
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      *(HWND *)((int)this + 0x10) = param_1;
      FUN_00410a10(this);
      return 1;
    }
    if (param_2 == 2) {
      *(undefined4 *)((int)this + 0x10) = 0;
      return 0;
    }
    if (param_2 == 0x53) {
      FUN_00418240(0,param_1,0,*(int *)(param_4 + 8),(int *)&DAT_004860e0,(uchar *)0x0);
      return 1;
    }
  }
  else if (param_2 == 0x111) {
    sVar1 = (short)(param_3 >> 0x10);
    switch(param_3 & 0xffff) {
    case 0x40c:
      FUN_004167c0(&param_4,param_1,(int *)&param_2,(int *)&param_1,0,
                   *(undefined1 **)((int)this + 0x5c));
      FUN_00415880(pHVar4,*(int *)((int)this + 0x5c));
      break;
    case 0x414:
    case 0x416:
    case 0x417:
    case 0x41e:
    case 0x420:
      if (sVar1 == 1) goto switchD_0040d46a_caseD_418;
      break;
    case 0x415:
      if (sVar1 == 1) {
        LVar11 = 0;
        WVar10 = 0;
        UVar9 = 0x147;
        pHVar2 = GetDlgItem(param_1,0x415);
        LVar3 = SendMessageA(pHVar2,UVar9,WVar10,LVar11);
        pHVar4 = GetDlgItem(pHVar4,0x416);
        LVar5 = SendMessageA(pHVar4,0x147,0,0);
        if (LVar3 == 0) {
          SendMessageA(pHVar4,0x14b,0,0);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1036);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1037);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1038);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1039);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x103a);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x103b);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x103c);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x103d);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x103e);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x103f);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1040);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1041);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1042);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1043);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          WVar10 = *(WPARAM *)(&DAT_00476ce8 + LVar5 * 4);
        }
        else {
          SendMessageA(pHVar4,0x14b,0,0);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1068);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1069);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x106a);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x106b);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x106c);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x106d);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x106e);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x106f);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1070);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1071);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1072);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1073);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1074);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          pCVar6 = FUN_00419470(DAT_00487a6c,0x1075);
          SendMessageA(pHVar4,0x143,0,(LPARAM)pCVar6);
          WVar10 = *(WPARAM *)(&DAT_00476cb0 + LVar5 * 4);
        }
        SendMessageA(pHVar4,0x14e,WVar10,0);
        *(undefined4 *)((int)this + 0x24) = 1;
        return 0;
      }
      break;
    case 0x418:
    case 0x419:
    case 0x41a:
switchD_0040d46a_caseD_418:
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    case 0x422:
      LVar11 = 0;
      WVar10 = 0;
      UVar9 = 0xf0;
      pHVar2 = GetDlgItem(param_1,0x422);
      LVar3 = SendMessageA(pHVar2,UVar9,WVar10,LVar11);
      bVar8 = LVar3 != 0;
      if (bVar8) {
        BVar12 = 1;
        pHVar2 = GetDlgItem(pHVar4,0x414);
        pcVar7 = EnableWindow_exref;
        EnableWindow(pHVar2,BVar12);
        BVar12 = 1;
        pHVar2 = GetDlgItem(pHVar4,0x41e);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 1;
        pHVar2 = GetDlgItem(pHVar4,0x415);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 1;
        pHVar2 = GetDlgItem(pHVar4,0x416);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 1;
        pHVar2 = GetDlgItem(pHVar4,0x417);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 1;
        pHVar2 = GetDlgItem(pHVar4,0x420);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 1;
        pHVar2 = GetDlgItem(pHVar4,0x418);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 1;
        pHVar2 = GetDlgItem(pHVar4,0x419);
        EnableWindow(pHVar2,BVar12);
      }
      else {
        pHVar2 = GetDlgItem(pHVar4,0x414);
        pcVar7 = EnableWindow_exref;
        EnableWindow(pHVar2,LVar3);
        BVar12 = 0;
        pHVar2 = GetDlgItem(pHVar4,0x41e);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 0;
        pHVar2 = GetDlgItem(pHVar4,0x415);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 0;
        pHVar2 = GetDlgItem(pHVar4,0x416);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 0;
        pHVar2 = GetDlgItem(pHVar4,0x417);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 0;
        pHVar2 = GetDlgItem(pHVar4,0x420);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 0;
        pHVar2 = GetDlgItem(pHVar4,0x418);
        EnableWindow(pHVar2,BVar12);
        BVar12 = 0;
        pHVar2 = GetDlgItem(pHVar4,0x419);
        EnableWindow(pHVar2,BVar12);
      }
      uVar13 = (uint)bVar8;
      pHVar4 = GetDlgItem(pHVar4,0x41a);
      (*pcVar7)(pHVar4,uVar13);
      *(undefined4 *)((int)this + 0x24) = 1;
      return 0;
    }
  }
  return 0;
}


