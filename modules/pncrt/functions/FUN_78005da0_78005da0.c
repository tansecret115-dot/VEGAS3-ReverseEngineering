/* Module: pncrt.dll
   Function: FUN_78005da0
   Address: 78005da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78005da0(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  void *this;
  undefined4 *puVar3;
  DName *pDVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  uVar6 = param_2[1];
  uVar1 = local_2c ^ ((int)(uVar6 << 0x1c) >> 0x1c ^ local_2c) & 0xf;
  uVar1 = uVar1 ^ (uVar1 ^ uVar6) & 0x10;
  uVar1 = uVar1 ^ (uVar1 ^ uVar6) & 0x20;
  local_2c = uVar1 ^ (uVar1 ^ uVar6) & 0x40;
  local_30 = *param_2;
  iVar2 = DName::isValid((DName *)&local_30);
  if ((iVar2 == 0) || (*DAT_78041aac == '\0')) {
    iVar2 = DName::isValid((DName *)&local_30);
    if (iVar2 != 0) {
      pDVar4 = (DName *)&local_30;
      puVar3 = local_18;
      puVar5 = FUN_78006450(local_8,2);
      FUN_78006750(puVar5,puVar3,pDVar4);
      FUN_78006b80(&local_30,local_18);
    }
  }
  else {
    local_24 = local_24 & 0xffffff80;
    local_28 = 0;
    local_20 = 0;
    local_1c = local_1c & 0xffffff80;
    FUN_78005780(local_18,(DName *)&local_20,'\0',(DName *)&local_28,0);
    pDVar4 = (DName *)&local_30;
    puVar3 = local_10;
    this = (void *)FUN_780065f0(local_18,local_8,' ');
    puVar3 = (undefined4 *)FUN_78006750(this,puVar3,pDVar4);
    FUN_78006b80(&local_30,puVar3);
    iVar2 = DName::isValid((DName *)&local_30);
    if (iVar2 != 0) {
      if (*DAT_78041aac != '@') {
        FUN_78006950(&local_30,"{for ");
        iVar2 = DName::isValid((DName *)&local_30);
        while (((iVar2 != 0 && (*DAT_78041aac != '\0')) && (*DAT_78041aac != '@'))) {
          pDVar4 = (DName *)FUN_78001c40(local_8);
          puVar3 = local_18;
          puVar5 = FUN_780061c0(local_10,'`');
          FUN_78006750(puVar5,puVar3,pDVar4);
          pDVar4 = (DName *)FUN_780065f0(local_18,&local_20,'\'');
          FUN_780069e0(&local_30,pDVar4);
          if (*DAT_78041aac == '@') {
            DAT_78041aac = DAT_78041aac + 1;
          }
          iVar2 = DName::isValid((DName *)&local_30);
          if ((iVar2 != 0) && (*DAT_78041aac != '@')) {
            FUN_78006950(&local_30,"s ");
          }
          iVar2 = DName::isValid((DName *)&local_30);
        }
        iVar2 = DName::isValid((DName *)&local_30);
        if (iVar2 != 0) {
          if (*DAT_78041aac == '\0') {
            FUN_78006a60(&local_30,2);
          }
          FUN_780068d0(&local_30,'}');
        }
      }
      if (*DAT_78041aac == '@') {
        DAT_78041aac = DAT_78041aac + 1;
      }
    }
  }
  uVar6 = ((int)(local_2c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar6 = (local_2c ^ uVar6) & 0x10 ^ uVar6;
  uVar6 = (local_2c ^ uVar6) & 0x20 ^ uVar6;
  param_1[1] = (local_2c ^ uVar6) & 0x40 ^ uVar6;
  *param_1 = local_30;
  return;
}


