/* Module: pncrt.dll
   Function: FUN_78003b60
   Address: 78003b60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78003b60(undefined4 *param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 local_8;
  uint local_4;
  
  if (*DAT_78041aac == '\0') {
    FUN_78006450(param_1,2);
    return param_1;
  }
  uVar1 = (int)*DAT_78041aac - 0x41;
  DAT_78041aac = DAT_78041aac + 1;
  if (10 < uVar1) {
    FUN_78006450(param_1,1);
    return param_1;
  }
  local_8 = 0;
  local_4 = local_4 & 0xffffff80;
  if ((~DAT_78041abc & 2) != 0) {
    switch(uVar1 & 0xfffffffe) {
    case 0:
      iVar3 = 1;
      break;
    case 2:
      iVar3 = 2;
      break;
    case 4:
      iVar3 = 4;
      break;
    case 6:
      iVar3 = 3;
      break;
    case 8:
      iVar3 = 5;
      break;
    default:
      goto switchD_78003bbf_default;
    }
    pcVar2 = FUN_78006020(iVar3);
    FUN_78006b50(&local_8,pcVar2);
  }
switchD_78003bbf_default:
  uVar1 = ((int)(local_4 << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar1 = (local_4 ^ uVar1) & 0x10 ^ uVar1;
  uVar1 = (local_4 ^ uVar1) & 0x20 ^ uVar1;
  param_1[1] = (local_4 ^ uVar1) & 0x40 ^ uVar1;
  *param_1 = local_8;
  return param_1;
}


