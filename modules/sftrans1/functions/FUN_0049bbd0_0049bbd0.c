/* Module: sftrans1.dll
   Function: FUN_0049bbd0
   Address: 0049bbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0049bbd0(int param_1)

{
  int iVar1;
  int *piVar2;
  UINT UVar3;
  int iVar4;
  int *unaff_EBP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *local_24;
  DWORD DStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  DWORD DStack_14;
  int *piStack_10;
  
  if (*(int *)(param_1 + 0x70) == 0) {
    return;
  }
  puVar5 = (undefined4 *)**(int **)(param_1 + 8);
  local_24 = (int *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(puVar5,&DAT_00554c10,&local_24);
  }
  (**(code **)(*local_24 + 0x34))(local_24,param_1 + 0x4c,0x24);
  piVar2 = (int *)GetSysColor(0xd);
  local_24 = piVar2;
  DStack_20 = GetSysColor(0xc);
  uStack_18 = 0;
  uStack_1c = 0;
  DStack_14 = GetSysColor(10);
  piStack_10 = piVar2;
  puVar5 = (undefined4 *)&stack0xffffffd4;
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x70) + 0x174);
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar7 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x1d0) = 0;
  if (*(int *)(param_1 + 0x80) == 4) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    puVar5 = (undefined4 *)(param_1 + 0x58);
    puVar6 = (undefined4 *)(param_1 + 0x50);
    iVar4 = FUN_0049d160(puVar6,puVar5);
    if (iVar4 == 0) {
      iVar4 = FUN_0049d160(puVar6,param_1 + 0x60);
      if (iVar4 == 0) {
        iVar4 = FUN_0049d160(puVar5,param_1 + 0x60);
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0x8c) = 1;
          *(undefined4 *)(param_1 + 0x88) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x8c) = 1;
        *(undefined4 *)(param_1 + 0x84) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x88) = 1;
      *(undefined4 *)(param_1 + 0x84) = 1;
      iVar4 = FUN_0049d160(puVar6,param_1 + 0x60);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x8c) = 1;
      }
    }
    FUN_00550110(3);
    iVar4 = FUN_0054fd50(*(undefined4 *)(param_1 + 0x54),*puVar6,0,0x80);
    if (iVar4 != 0) {
      FUN_0049d200(0,param_1 + 0x90);
      uVar7 = 1;
    }
    iVar4 = FUN_0054fd50(*(undefined4 *)(param_1 + 0x5c),*puVar5,1,0x8000);
    if (iVar4 != 0) {
      FUN_0049d200(1,param_1 + 400);
      uVar7 = 1;
    }
    iVar4 = FUN_0054fd50(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x60),2,0x800000);
    if (iVar4 != 0) {
      FUN_0049d200(2,param_1 + 0x290);
      uVar7 = 1;
    }
    if (*(int *)(param_1 + 0x84) == 0) {
      if (*(int *)(param_1 + 0x88) == 0) {
        if (*(int *)(param_1 + 0x8c) == 0) {
          iVar4 = *(int *)(param_1 + 0x70);
          if ((-1 < *(int *)(iVar4 + 0x148)) && (*(int *)(iVar4 + 0x14c) != -1)) {
            *(undefined4 *)(iVar4 + 0x14c) = 0xffffffff;
            uVar7 = uVar7 | 1;
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x70);
          if ((2 < *(int *)(iVar4 + 0x148)) && (*(int *)(iVar4 + 0x14c) != 2)) {
            *(undefined4 *)(iVar4 + 0x14c) = 2;
            FUN_0054ddf0();
            uVar7 = uVar7 | 1;
          }
        }
      }
      else {
        iVar4 = *(int *)(param_1 + 0x70);
        if ((1 < *(int *)(iVar4 + 0x148)) && (*(int *)(iVar4 + 0x14c) != 1)) {
          *(undefined4 *)(iVar4 + 0x14c) = 1;
          FUN_0054ddf0();
          uVar7 = uVar7 | 1;
        }
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x70);
      if ((0 < *(int *)(iVar4 + 0x148)) && (*(int *)(iVar4 + 0x14c) != 0)) {
        *(undefined4 *)(iVar4 + 0x14c) = 0;
        FUN_0054ddf0();
        uVar7 = uVar7 | 1;
      }
    }
LAB_0049c056:
    if (uVar7 == 0) {
LAB_0049c060:
      if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x80)) goto LAB_0049bf9f;
    }
  }
  else {
    UVar3 = IsDlgButtonChecked(*(HWND *)(param_1 + 0x30),0x70c);
    if (UVar3 == 0) {
      iVar4 = *(int *)(param_1 + 0x80);
      if (iVar4 == 0) {
        piVar2 = (int *)0x80;
      }
      else if (iVar4 == 1) {
        piVar2 = (int *)0x8000;
      }
      else {
        piVar2 = unaff_EBP;
        if (iVar4 == 2) {
          piVar2 = (int *)0x800000;
        }
      }
      FUN_00550110(1);
      iVar4 = *(int *)(param_1 + 0x70);
      if ((0 < *(int *)(iVar4 + 0x148)) && (*(int *)(iVar4 + 0x14c) != 0)) {
        *(undefined4 *)(iVar4 + 0x14c) = 0;
        FUN_0054ddf0();
      }
      iVar4 = FUN_0054fd50(*(undefined4 *)(param_1 + 0x54 + *(int *)(param_1 + 0x80) * 8),
                           *(undefined4 *)(param_1 + 0x50 + *(int *)(param_1 + 0x80) * 8),0,piVar2);
      if (iVar4 == 0) goto LAB_0049c060;
      FUN_0049d200(0,*(int *)(param_1 + 0x80) * 0x100 + 0x90 + param_1);
    }
    else {
      FUN_00550110(3);
      iVar4 = *(int *)(param_1 + 0x70);
      iVar1 = *(int *)(param_1 + 0x80);
      if ((iVar1 < *(int *)(iVar4 + 0x148)) && (iVar1 != *(int *)(iVar4 + 0x14c))) {
        *(int *)(iVar4 + 0x14c) = iVar1;
        if (-1 < iVar1) {
          FUN_0054ddf0();
        }
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      iVar4 = FUN_0054fd50(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50),0,0x80);
      if (iVar4 != 0) {
        FUN_0049d200(0,param_1 + 0x90);
        uVar7 = 1;
      }
      iVar4 = FUN_0054fd50(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58),1,0x8000)
      ;
      if (iVar4 != 0) {
        FUN_0049d200(1,param_1 + 400);
        uVar7 = 1;
      }
      iVar4 = FUN_0054fd50(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x60),2,0x800000
                          );
      if (iVar4 == 0) goto LAB_0049c056;
      FUN_0049d200(2,param_1 + 0x290);
    }
  }
  iVar4 = *(int *)(param_1 + 0x70);
  GetClientRect(*(HWND *)(iVar4 + 4),(LPRECT)&stack0xffffffd4);
  InvalidateRect(*(HWND *)(iVar4 + 4),(RECT *)&stack0xffffffd4,0);
LAB_0049bf9f:
  UVar3 = IsDlgButtonChecked(*(HWND *)(param_1 + 0x30),0x70c);
  iVar4 = *(int *)(param_1 + 0x74);
  if (UVar3 == 0) {
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0x80);
  }
  else {
    *(undefined4 *)(iVar4 + 0xc) = 4;
  }
  *(int *)(iVar4 + 0x10) = param_1 + 0x90;
  iVar4 = *(int *)(param_1 + 0x74);
  GetClientRect(*(HWND *)(iVar4 + 4),(LPRECT)&stack0xffffffd4);
  InvalidateRect(*(HWND *)(iVar4 + 4),(RECT *)&stack0xffffffd4,0);
  *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x1d0) = 1;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x80);
  FUN_0049c100(param_1 + 0x50);
  FUN_0049c100(param_1 + 0x58);
  FUN_0049c100(param_1 + 0x60);
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return;
}


