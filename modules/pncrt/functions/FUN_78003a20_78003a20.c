/* Module: pncrt.dll
   Function: FUN_78003a20
   Address: 78003a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78003a20(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *this;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  DName *pDVar8;
  undefined4 local_20;
  uint local_1c;
  int local_18 [2];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  local_20 = 0;
  local_1c = local_1c & 0xffffff80;
  puVar1 = (undefined4 *)FUN_78001540(local_18);
  FUN_78006b80(&local_20,puVar1);
  if ((((local_1c & 0xf) == 0) && (*DAT_78041aac != '\0')) && (*DAT_78041aac != '@')) {
    pDVar8 = (DName *)&local_20;
    piVar7 = local_18;
    puVar1 = local_10;
    pcVar6 = "::";
    pvVar2 = (void *)FUN_78001c40(local_8);
    pvVar2 = (void *)FUN_780066a0(pvVar2,puVar1,pcVar6);
    puVar1 = (undefined4 *)FUN_78006750(pvVar2,piVar7,pDVar8);
    FUN_78006b80(&local_20,puVar1);
  }
  if (*DAT_78041aac == '@') {
    DAT_78041aac = DAT_78041aac + 1;
  }
  else if (*DAT_78041aac == '\0') {
    iVar3 = DName::isEmpty((DName *)&local_20);
    if (iVar3 == 0) {
      pDVar8 = (DName *)&local_20;
      puVar1 = local_8;
      puVar5 = local_10;
      pcVar6 = "::";
      this = FUN_78006450(local_18,2);
      pvVar2 = (void *)FUN_780066a0(this,puVar5,pcVar6);
      puVar1 = (undefined4 *)FUN_78006750(pvVar2,puVar1,pDVar8);
      FUN_78006b80(&local_20,puVar1);
    }
    else {
      FUN_78006be0(&local_20,2);
    }
  }
  else {
    FUN_78006be0(&local_20,1);
  }
  uVar4 = ((int)(local_1c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar4 = (local_1c ^ uVar4) & 0x10 ^ uVar4;
  uVar4 = (local_1c ^ uVar4) & 0x20 ^ uVar4;
  param_1[1] = (local_1c ^ uVar4) & 0x40 ^ uVar4;
  *param_1 = local_20;
  return;
}


