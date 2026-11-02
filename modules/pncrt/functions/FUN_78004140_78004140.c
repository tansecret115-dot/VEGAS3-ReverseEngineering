/* Module: pncrt.dll
   Function: FUN_78004140
   Address: 78004140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78004140(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8 [2];
  
  if (*DAT_78041aac == 'X') {
    DAT_78041aac = DAT_78041aac + 1;
    FUN_780062b0(param_1,"void");
    return param_1;
  }
  if (*DAT_78041aac == 'Z') {
    DAT_78041aac = DAT_78041aac + 1;
    FUN_780062b0(param_1,"...");
    return param_1;
  }
  FUN_78004330(&local_10);
  if ((local_c & 0xf) != 0) {
    uVar3 = ((int)(local_c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
    uVar3 = (local_c ^ uVar3) & 0x10 ^ uVar3;
    uVar3 = (local_c ^ uVar3) & 0x20 ^ uVar3;
    param_1[1] = (local_c ^ uVar3) & 0x40 ^ uVar3;
    *param_1 = local_10;
    return param_1;
  }
  cVar1 = *DAT_78041aac;
  if (cVar1 != '\0') {
    if (cVar1 == '@') {
      DAT_78041aac = DAT_78041aac + 1;
      uVar3 = ((int)(local_c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
      uVar3 = (local_c ^ uVar3) & 0x10 ^ uVar3;
      uVar3 = (local_c ^ uVar3) & 0x20 ^ uVar3;
      param_1[1] = (local_c ^ uVar3) & 0x40 ^ uVar3;
      *param_1 = local_10;
      return param_1;
    }
    if (cVar1 != 'Z') {
      FUN_78006450(param_1,1);
      return param_1;
    }
    DAT_78041aac = DAT_78041aac + 1;
    puVar2 = (undefined4 *)FUN_780066a0(&local_10,local_8,",...");
    uVar3 = ((int)(puVar2[1] << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
    param_1[1] = uVar3;
    uVar3 = (uVar3 ^ puVar2[1]) & 0x10 ^ uVar3;
    param_1[1] = uVar3;
    uVar3 = (uVar3 ^ puVar2[1]) & 0x20 ^ uVar3;
    param_1[1] = uVar3;
    param_1[1] = (uVar3 ^ puVar2[1]) & 0x40 ^ uVar3;
    *param_1 = *puVar2;
    return param_1;
  }
  uVar3 = ((int)(local_c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar3 = (local_c ^ uVar3) & 0x10 ^ uVar3;
  uVar3 = (local_c ^ uVar3) & 0x20 ^ uVar3;
  param_1[1] = (local_c ^ uVar3) & 0x40 ^ uVar3;
  *param_1 = local_10;
  return param_1;
}


