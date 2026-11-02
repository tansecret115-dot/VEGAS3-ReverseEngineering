/* Module: pncrt.dll
   Function: FUN_78002270
   Address: 78002270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78002270(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  DName *pDVar5;
  undefined4 *puVar6;
  undefined4 *this;
  uint uVar7;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30 [2];
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  undefined1 local_18 [8];
  undefined4 local_10 [2];
  undefined4 local_8 [2];
  
  local_3c = local_3c & 0xffffff80;
  bVar2 = true;
  local_40 = 0;
  do {
    if ((*DAT_78041aac == '\0') || (*DAT_78041aac == '@')) break;
    if (bVar2) {
      bVar2 = false;
    }
    else {
      FUN_780068d0(&local_40,',');
    }
    pcVar3 = DAT_78041aac;
    iVar4 = *DAT_78041aac + -0x30;
    if ((iVar4 < 0) || (9 < iVar4)) {
      local_48 = 0;
      local_44 = local_44 & 0xffffff80;
      cVar1 = *DAT_78041aac;
      if (cVar1 == 'X') {
        DAT_78041aac = DAT_78041aac + 1;
        FUN_78006b50(&local_48,"void");
      }
      else {
        if ((cVar1 == '$') && (DAT_78041aac[1] != '$')) {
          DAT_78041aac = DAT_78041aac + 1;
          puVar6 = FUN_78002440(local_28);
        }
        else if (cVar1 == '?') {
          pDVar5 = (DName *)FUN_78001f30(local_20);
          puVar6 = local_30;
          this = FUN_780062b0(local_18,"`template-parameter");
          FUN_78006750(this,puVar6,pDVar5);
          puVar6 = (undefined4 *)FUN_780066a0(local_30,local_10,"\'");
        }
        else {
          local_34 = local_34 & 0xffffff80;
          local_38 = 0;
          puVar6 = FUN_78003de0(local_8,(DName *)&local_38);
        }
        FUN_78006b80(&local_48,puVar6);
      }
      if ((1 < (int)DAT_78041aac - (int)pcVar3) && (*DAT_78041aa8 != 9)) {
        FUN_78006d40(DAT_78041aa8,(DName *)&local_48);
      }
      pDVar5 = (DName *)&local_48;
    }
    else {
      DAT_78041aac = DAT_78041aac + 1;
      pDVar5 = (DName *)FUN_78006dd0(DAT_78041aa8,iVar4);
    }
    FUN_780069e0(&local_40,pDVar5);
  } while ((local_3c & 0xf) == 0);
  uVar7 = ((int)(local_3c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar7 = (local_3c ^ uVar7) & 0x10 ^ uVar7;
  uVar7 = (local_3c ^ uVar7) & 0x20 ^ uVar7;
  param_1[1] = (local_3c ^ uVar7) & 0x40 ^ uVar7;
  *param_1 = local_40;
  return;
}


