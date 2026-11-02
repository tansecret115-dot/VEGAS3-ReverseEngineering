/* Module: sfpublish.dll
   Function: FUN_00406c90
   Address: 00406c90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_00406c90(int param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FUN_00406d50(param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined ***)(param_1 + 0x44) = &PTR_LAB_00435bcc;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffffc0;
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffb | 3;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  DVar1 = GetSysColor(8);
  *(DWORD *)(param_1 + 0xbc) = DVar1;
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xffffffbf;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0x400;
  *(undefined4 *)(param_1 + 0x84) = 0xcdcdcdcd;
  *(undefined4 *)(param_1 + 0xcc) = 4;
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xffffffaf | 0x28;
  return param_1;
}


