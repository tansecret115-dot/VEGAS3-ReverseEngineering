/* Module: pncrt.dll
   Function: FUN_78003940
   Address: 78003940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_78003940(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  uint uVar4;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8 [2];
  
  pcVar2 = FUN_78006020(0);
  FUN_780062b0(&local_10,pcVar2);
  cVar1 = *DAT_78041aac;
  if (cVar1 == '\0') {
    FUN_78006a60(&local_10,2);
  }
  else {
    DAT_78041aac = DAT_78041aac + 1;
    if (cVar1 == '0') {
      FUN_78006950(&local_10,"void");
    }
    else if (cVar1 == '2') {
      pDVar3 = (DName *)FUN_78003a20(local_8);
      FUN_780069e0(&local_10,pDVar3);
    }
    else if (cVar1 == '5') {
      FUN_78006450(param_1,1);
      return param_1;
    }
  }
  FUN_78006950(&local_10,") ");
  uVar4 = ((int)(local_c << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
  uVar4 = (local_c ^ uVar4) & 0x10 ^ uVar4;
  uVar4 = (local_c ^ uVar4) & 0x20 ^ uVar4;
  param_1[1] = (local_c ^ uVar4) & 0x40 ^ uVar4;
  *param_1 = local_10;
  return param_1;
}


