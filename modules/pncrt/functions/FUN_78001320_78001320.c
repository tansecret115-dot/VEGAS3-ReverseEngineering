/* Module: pncrt.dll
   Function: FUN_78001320
   Address: 78001320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_78001320(uint *param_1)

{
  bool bVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  uint uVar4;
  DName *pDVar5;
  uint local_20;
  uint local_1c;
  DName local_18 [8];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  if ((_DAT_78041abc & 0x2000) != 0) {
    _DAT_78041abc = _DAT_78041abc & 0xffffdfff;
    FUN_78003cc0(&local_20,0);
    _DAT_78041abc = _DAT_78041abc | 0x2000;
    uVar4 = ((int)(local_1c << 0x1c) >> 0x1c ^ param_1[1]) & 0xf ^ param_1[1];
    uVar4 = (local_1c ^ uVar4) & 0x10 ^ uVar4;
    uVar4 = (local_1c ^ uVar4) & 0x20 ^ uVar4;
    param_1[1] = (local_1c ^ uVar4) & 0x40 ^ uVar4;
    *param_1 = local_20;
    return param_1;
  }
  if (*DAT_78041aac != '?') {
    if (*DAT_78041aac == '\0') {
      FUN_78006450(param_1,2);
      return param_1;
    }
    FUN_78006450(param_1,1);
    return param_1;
  }
  if (DAT_78041aac[1] == '?') {
    DAT_78041aac = DAT_78041aac + 2;
    FUN_78001690(&local_20);
  }
  else {
    DAT_78041aac = DAT_78041aac + 1;
    FUN_78001540((int *)&local_20);
  }
  iVar2 = DName::isEmpty((DName *)&local_20);
  if ((iVar2 == 0) && ((local_1c & 0x20) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar2 = DName::isValid((DName *)&local_20);
  if (iVar2 != 0) {
    if ((*DAT_78041aac != '\0') && (*DAT_78041aac != '@')) {
      FUN_78001c40((undefined4 *)local_18);
      iVar2 = DName::isEmpty(local_18);
      if (iVar2 == 0) {
        pDVar5 = (DName *)&local_20;
        puVar3 = local_10;
        this = (void *)FUN_780066a0(local_18,local_8,"::");
        puVar3 = (undefined4 *)FUN_78006750(this,puVar3,pDVar5);
        FUN_78006b80(&local_20,puVar3);
      }
    }
    if ((bVar1) && (iVar2 = DName::isEmpty((DName *)&local_20), iVar2 == 0)) {
      local_1c = local_1c | 0x20;
    }
    iVar2 = DName::isEmpty((DName *)&local_20);
    if ((iVar2 == 0) && (((_DAT_78041abc & 0x1000) == 0 || (bVar1)))) {
      if (*DAT_78041aac != '\0') {
        if (*DAT_78041aac != '@') {
          FUN_78006450(param_1,1);
          return param_1;
        }
        DAT_78041aac = DAT_78041aac + 1;
      }
      FUN_780025e0(param_1,(DName *)&local_20);
      return param_1;
    }
  }
  uVar4 = ((int)(local_1c << 0x1c) >> 0x1c ^ param_1[1]) & 0xf ^ param_1[1];
  uVar4 = (local_1c ^ uVar4) & 0x10 ^ uVar4;
  uVar4 = (local_1c ^ uVar4) & 0x20 ^ uVar4;
  param_1[1] = (local_1c ^ uVar4) & 0x40 ^ uVar4;
  *param_1 = local_20;
  return param_1;
}


