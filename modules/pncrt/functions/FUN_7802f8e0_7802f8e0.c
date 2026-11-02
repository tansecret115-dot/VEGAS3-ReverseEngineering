/* Module: pncrt.dll
   Function: FUN_7802f8e0
   Address: 7802f8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_7802f8e0(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar1 = param_1[5];
  local_8 = *(undefined4 *)(param_1 + 1);
  local_c = *(undefined4 *)(param_1 + 3);
  local_4 = (uint)*param_1 << 0x10;
  uVar3 = uVar1 & 0x7fff;
  iVar2 = FUN_7802f520((int)&local_c,0x40);
  if (iVar2 != 0) {
    local_c = 0x80000000;
    uVar3 = uVar3 + 1;
  }
  *(ushort *)(param_2 + 2) = uVar1 & 0x8000 | uVar3;
  param_2[1] = local_c;
  *param_2 = local_8;
  return uVar3 == 0x7fff;
}


