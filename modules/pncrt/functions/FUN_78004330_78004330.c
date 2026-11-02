/* Module: pncrt.dll
   Function: FUN_78004330
   Address: 78004330
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_78004330(undefined4 *param_1)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  DName *pDVar4;
  uint uVar5;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  DName local_8 [8];
  
  local_14 = local_14 & 0xffffff80;
  bVar1 = true;
  local_18 = 0;
  while( true ) {
    if ((*DAT_78041aac == '@') || (*DAT_78041aac == 'Z')) goto LAB_78004430;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      FUN_780068d0(&local_18,',');
    }
    pcVar2 = DAT_78041aac;
    if (*DAT_78041aac == '\0') break;
    iVar3 = *DAT_78041aac + -0x30;
    if ((iVar3 < 0) || (9 < iVar3)) {
      local_10 = 0;
      local_c = local_c & 0xffffff80;
      FUN_78003de0((undefined4 *)local_8,(DName *)&local_10);
      if ((1 < (int)DAT_78041aac - (int)pcVar2) && (*DAT_78041a88 != 9)) {
        FUN_78006d40(DAT_78041a88,local_8);
      }
      pDVar4 = local_8;
    }
    else {
      DAT_78041aac = DAT_78041aac + 1;
      pDVar4 = (DName *)FUN_78006dd0(DAT_78041a88,iVar3);
    }
    FUN_780069e0(&local_18,pDVar4);
    if ((local_14 & 0xf) != 0) {
LAB_78004430:
      uVar5 = ((int)(local_14 << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
      uVar5 = (local_14 ^ uVar5) & 0x10 ^ uVar5;
      uVar5 = (local_14 ^ uVar5) & 0x20 ^ uVar5;
      param_1[1] = (local_14 ^ uVar5) & 0x40 ^ uVar5;
      *param_1 = local_18;
      return;
    }
  }
  FUN_78006a60(&local_18,2);
  goto LAB_78004430;
}


