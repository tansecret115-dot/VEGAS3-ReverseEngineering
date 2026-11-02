/* Module: wmfplug2.dll
   Function: FUN_00413af0
   Address: 00413af0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00413af0(void *this,HWND param_1)

{
  int iVar1;
  UINT UVar2;
  undefined4 uVar3;
  CHAR local_100 [256];
  
  iVar1 = *(int *)(*(int *)(*(int *)((int)this + 0x34) + 0x424) + 0x3e);
  if (iVar1 == 0) {
    return 0x80070057;
  }
  UVar2 = IsDlgButtonChecked(param_1,0xf8);
  *(UINT *)(iVar1 + 0x10) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0xf9);
  *(UINT *)(iVar1 + 0x14) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0xfa);
  *(UINT *)(iVar1 + 0x18) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0xfb);
  *(UINT *)(iVar1 + 0x1c) = UVar2;
  UVar2 = IsDlgButtonChecked(param_1,0xfc);
  *(UINT *)(iVar1 + 0x20) = UVar2;
  GetDlgItemTextA(param_1,0xd4,local_100,0x100);
  uVar3 = FUN_00413c10(local_100);
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  GetDlgItemTextA(param_1,0xd5,local_100,0x100);
  uVar3 = FUN_00413c10(local_100);
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  GetDlgItemTextA(param_1,0xf5,local_100,0x100);
  uVar3 = FUN_00413c10(local_100);
  *(undefined4 *)(iVar1 + 0x2c) = uVar3;
  GetDlgItemTextA(param_1,0xf6,local_100,0x100);
  uVar3 = FUN_00413c10(local_100);
  *(undefined4 *)(iVar1 + 0x30) = uVar3;
  GetDlgItemTextA(param_1,0xf7,local_100,0x100);
  uVar3 = FUN_00413c10(local_100);
  *(undefined4 *)(iVar1 + 0x34) = uVar3;
  return 0;
}


