/* Module: pncrt.dll
   Function: FUN_78001540
   Address: 78001540
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78001540(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_10;
  uint local_c;
  undefined4 local_8 [2];
  
  iVar2 = *DAT_78041aac + -0x30;
  if ((-1 < iVar2) && (iVar2 < 10)) {
    DAT_78041aac = DAT_78041aac + 1;
    piVar3 = FUN_78006dd0(DAT_78041aa4,iVar2);
    uVar5 = ((piVar3[1] << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
    param_1[1] = uVar5;
    uVar5 = (piVar3[1] ^ uVar5) & 0x10 ^ uVar5;
    param_1[1] = uVar5;
    uVar5 = (piVar3[1] ^ uVar5) & 0x20 ^ uVar5;
    param_1[1] = uVar5;
    param_1[1] = (piVar3[1] ^ uVar5) & 0x40 ^ uVar5;
    *param_1 = *piVar3;
    return;
  }
  local_10 = 0;
  local_c = local_c & 0xffffff80;
  if (*DAT_78041aac == '?') {
    puVar4 = FUN_780020d0(local_8);
    FUN_78006b80(&local_10,puVar4);
    pcVar1 = DAT_78041aac + 1;
    if (*DAT_78041aac != '@') {
      FUN_78006be0(&local_10,2 - (*DAT_78041aac != '\0'));
      pcVar1 = DAT_78041aac;
    }
  }
  else {
    puVar4 = FUN_780062f0(local_8,(int *)&DAT_78041aac,'@');
    FUN_78006b80(&local_10,puVar4);
    pcVar1 = DAT_78041aac;
  }
  DAT_78041aac = pcVar1;
  if (*DAT_78041aa4 != 9) {
    FUN_78006d40(DAT_78041aa4,(DName *)&local_10);
  }
  uVar5 = ((int)(local_c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar5 = (local_c ^ uVar5) & 0x10 ^ uVar5;
  uVar5 = (local_c ^ uVar5) & 0x20 ^ uVar5;
  param_1[1] = (local_c ^ uVar5) & 0x40 ^ uVar5;
  *param_1 = local_10;
  return;
}


