/* Module: sftrans1.dll
   Function: FUN_00480ff0
   Address: 00480ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00480ff0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  HWND pHVar4;
  uint uVar5;
  UINT UVar6;
  WPARAM WVar7;
  LPARAM lParam;
  int local_c [2];
  
  uVar5 = param_3 >> 0x10;
  switch(param_3 & 0xffff) {
  case 0x64e:
    if (uVar5 != 0x200) {
      return 0;
    }
    puVar2 = (undefined4 *)(param_1[0xc] + 0x90);
    goto LAB_0048103b;
  case 0x650:
    if (uVar5 != 0x200) {
      return 0;
    }
    puVar2 = (undefined4 *)(param_1[0xc] + 0x88);
LAB_0048103b:
    iVar3 = FUN_0047c4e0(param_4,puVar2,*puVar2,puVar2[1],0,0,0,0x40000000,0xd2f1a9fc,0x3f50624d);
joined_r0x004810c3:
    if (iVar3 == 0) {
LAB_004811c8:
      (**(code **)(*param_1 + 8))();
      return 0;
    }
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    break;
  case 0x653:
    UVar6 = IsDlgButtonChecked((HWND)param_1[1],0x653);
    *(UINT *)(param_1[0xc] + 0xa8) = UVar6;
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    break;
  case 0x662:
    if (uVar5 != 0x200) {
      return 0;
    }
    puVar2 = (undefined4 *)(param_1[0xc] + 0x98);
    iVar3 = FUN_0047c4e0(param_4,puVar2,*puVar2,*(undefined4 *)(param_1[0xc] + 0x9c),0,0,0,
                         0x40100000,0xd2f1a9fc,0x3f50624d);
    goto joined_r0x004810c3;
  case 0x663:
    if (uVar5 != 0x200) {
      return 0;
    }
    GetDlgItemInt((HWND)param_1[1],0x663,local_c,1);
    UVar6 = GetDlgItemInt((HWND)param_1[1],0x663,local_c,1);
    if (UVar6 < 0x3e9) {
      UVar6 = GetDlgItemInt((HWND)param_1[1],0x663,local_c,1);
    }
    else {
      UVar6 = 1000;
    }
    if ((local_c[0] != 0) && (UVar6 != *(UINT *)(param_1[0xc] + 0xac))) {
      *(UINT *)(param_1[0xc] + 0xac) = UVar6;
      lParam = *(LPARAM *)(param_1[0xc] + 0xac);
      WVar7 = 0;
      UVar6 = 0x610;
      pHVar4 = GetDlgItem((HWND)param_1[1],0x664);
      SendMessageA(pHVar4,UVar6,WVar7,lParam);
      piVar1 = (int *)param_1[0xd];
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    goto LAB_004811c8;
  case 0x678:
    iVar3 = param_1[0xc] + 400;
    WVar7 = 0;
    UVar6 = 0x702;
    pHVar4 = GetDlgItem((HWND)param_1[1],0x678);
    SendMessageA(pHVar4,UVar6,WVar7,iVar3);
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
    break;
  case 0x679:
    iVar3 = param_1[0xc] + 0x78;
    WVar7 = 0;
    UVar6 = 0x702;
    pHVar4 = GetDlgItem((HWND)param_1[1],0x679);
    SendMessageA(pHVar4,UVar6,WVar7,iVar3);
    piVar1 = (int *)param_1[0xd];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
    }
  }
  return 0;
}


