/* Module: wmfplug2.dll
   Function: FUN_00415980
   Address: 00415980
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415980(int *param_1)

{
  int iVar1;
  int *unaff_EDI;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  puVar2 = local_48;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_48[0] = DAT_0047c820;
  local_48[3] = DAT_0047c82c;
  local_48[1] = DAT_0047c824;
  local_48[2] = DAT_0047c828;
  local_30 = DAT_00485200;
  local_38 = DAT_004851f8;
  local_34 = DAT_004851fc;
  local_18 = DAT_0047c814;
  local_4 = &local_58;
  local_2c = DAT_00485204;
  local_1c = DAT_0047c810;
  local_14 = DAT_0047c818;
  local_10 = DAT_0047c81c;
  local_50 = DAT_0047c808;
  local_58 = DAT_0047c800;
  local_54 = DAT_0047c804;
  local_5c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_c = 0;
  local_8 = 0x10;
  local_4c = DAT_0047c80c;
  iVar1 = (**(code **)(*param_1 + 0x3c))(param_1,&DAT_0047c820,&local_5c);
  if (-1 < iVar1) {
    iVar1 = FUN_00414480(unaff_EDI,local_4,L"Script Stream",L"Script",unaff_retaddr);
    if (-1 < iVar1) {
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1,unaff_EDI);
    }
  }
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  return iVar1;
}


