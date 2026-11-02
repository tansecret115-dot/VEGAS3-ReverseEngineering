/* Module: pncrt.dll
   Function: FUN_78001c40
   Address: 78001c40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_78001c40(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  DName *pDVar5;
  char *pcVar6;
  undefined4 *puVar7;
  void *this;
  int *piVar8;
  uint uVar9;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8 [2];
  undefined4 local_b0 [2];
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  undefined4 local_98 [2];
  undefined4 local_90 [2];
  int local_88 [2];
  int local_80 [2];
  undefined4 local_78 [2];
  undefined1 local_70 [8];
  undefined4 local_68 [2];
  undefined1 local_60 [8];
  uint local_58 [2];
  undefined4 local_50 [2];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined4 local_38 [2];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined4 local_20 [2];
  undefined1 local_18 [8];
  uint local_10 [2];
  undefined4 local_8 [2];
  
  local_c0 = 0;
  local_bc = local_bc & 0xffffff80;
  do {
    if ((*DAT_78041aac == '\0') || (*DAT_78041aac == '@')) break;
    iVar2 = DName::isEmpty((DName *)&local_c0);
    if (iVar2 == 0) {
      pDVar5 = (DName *)&local_c0;
      puVar7 = local_98;
      puVar3 = FUN_780062b0(local_60,"::");
      FUN_78006750(puVar3,puVar7,pDVar5);
      FUN_78006b80(&local_c0,local_98);
    }
    if (*DAT_78041aac == '?') {
      pcVar4 = DAT_78041aac + 1;
      cVar1 = *pcVar4;
      if (cVar1 == '$') {
        puVar7 = local_38;
        piVar8 = local_88;
        goto LAB_78001e54;
      }
      if (cVar1 == '%') {
        do {
          pcVar6 = pcVar4;
          pcVar4 = pcVar6 + 1;
        } while (*pcVar4 != '@');
        DAT_78041aac = pcVar6 + 2;
        puVar7 = local_a8;
        pDVar5 = (DName *)&local_c0;
        puVar3 = FUN_780062b0(local_48,"`anonymous namespace\'");
        FUN_78006750(puVar3,puVar7,pDVar5);
        puVar7 = local_a8;
        goto LAB_78001e65;
      }
      DAT_78041aac = pcVar4;
      if (cVar1 != '?') {
        if ((_DAT_78041abc & 0x1000) != 0) {
          pDVar5 = FUN_78001fb0(local_70);
          puVar7 = local_b8;
          puVar3 = FUN_780061c0(local_30,'`');
          FUN_78006750(puVar3,puVar7,pDVar5);
          FUN_780065f0(local_b8,local_50,'\'');
          goto LAB_78001e6e;
        }
        pDVar5 = FUN_78001fb0(local_28);
        puVar7 = local_90;
        puVar3 = FUN_780061c0(local_18,'`');
        FUN_78006750(puVar3,puVar7,pDVar5);
        FUN_780065f0(local_90,local_a0,'\'');
        pDVar5 = (DName *)&local_c0;
        puVar7 = local_8;
        puVar3 = local_a0;
        goto LAB_78001e5f;
      }
      if ((_DAT_78041abc & 0x1000) == 0) {
        pDVar5 = (DName *)FUN_78001320(local_10);
        puVar7 = local_b0;
        puVar3 = FUN_780061c0(local_40,'`');
        FUN_78006750(puVar3,puVar7,pDVar5);
        pDVar5 = (DName *)&local_c0;
        puVar7 = local_20;
        puVar3 = (undefined4 *)FUN_780065f0(local_b0,local_68,'\'');
        goto LAB_78001e5f;
      }
      FUN_78001320(local_58);
    }
    else {
      puVar7 = local_78;
      piVar8 = local_80;
LAB_78001e54:
      pDVar5 = (DName *)&local_c0;
      puVar3 = (undefined4 *)FUN_78001540(piVar8);
LAB_78001e5f:
      puVar7 = (undefined4 *)FUN_78006750(puVar3,puVar7,pDVar5);
LAB_78001e65:
      FUN_78006b80(&local_c0,puVar7);
    }
LAB_78001e6e:
  } while ((local_bc & 0xf) == 0);
  if (*DAT_78041aac == '\0') {
    iVar2 = DName::isEmpty((DName *)&local_c0);
    if (iVar2 == 0) {
      pDVar5 = (DName *)&local_c0;
      piVar8 = local_80;
      puVar7 = local_78;
      pcVar4 = "::";
      puVar3 = FUN_78006450(local_88,2);
      this = (void *)FUN_780066a0(puVar3,puVar7,pcVar4);
      puVar7 = (undefined4 *)FUN_78006750(this,piVar8,pDVar5);
      FUN_78006b80(&local_c0,puVar7);
    }
    else {
      FUN_78006be0(&local_c0,2);
    }
  }
  else if (*DAT_78041aac != '@') {
    FUN_78006be0(&local_c0,1);
  }
  uVar9 = ((int)(local_bc << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar9 = (local_bc ^ uVar9) & 0x10 ^ uVar9;
  uVar9 = (local_bc ^ uVar9) & 0x20 ^ uVar9;
  param_1[1] = (local_bc ^ uVar9) & 0x40 ^ uVar9;
  *param_1 = local_c0;
  return;
}


