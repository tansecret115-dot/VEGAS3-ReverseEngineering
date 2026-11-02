/* Module: pncrt.dll
   Function: FUN_780020d0
   Address: 780020d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_780020d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  DName *pDVar5;
  undefined4 *this;
  uint uVar6;
  undefined4 *puVar7;
  int local_dc;
  uint local_d8;
  undefined4 local_d4 [2];
  undefined1 local_cc [8];
  undefined4 local_c4 [2];
  undefined4 local_bc [2];
  undefined4 local_b4 [11];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined4 local_78 [11];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined4 local_3c [11];
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  uVar3 = DAT_78041aa8;
  uVar2 = DAT_78041aa4;
  uVar1 = DAT_78041a88;
  if ((*DAT_78041aac == '?') && (DAT_78041aac[1] == '$')) {
    DAT_78041aac = DAT_78041aac + 2;
    FUN_78006450(local_88,3);
    FUN_78006450(local_80,1);
    local_b4[0] = 0xffffffff;
    FUN_78006450(local_4c,3);
    FUN_78006450(local_44,1);
    local_78[0] = 0xffffffff;
    FUN_78006450(local_10,3);
    FUN_78006450(local_8,1);
    DAT_78041a88 = local_b4;
    DAT_78041aa4 = local_78;
    DAT_78041aa8 = local_3c;
    local_3c[0] = 0xffffffff;
    FUN_78001540(&local_dc);
    iVar4 = DName::isEmpty((DName *)&local_dc);
    if (iVar4 == 0) {
      pDVar5 = (DName *)FUN_78002270(local_c4);
      puVar7 = local_d4;
      this = FUN_780061c0(local_cc,'<');
      FUN_78006750(this,puVar7,pDVar5);
      pDVar5 = (DName *)FUN_780065f0(local_d4,local_bc,'>');
      FUN_780069e0(&local_dc,pDVar5);
    }
    uVar6 = ((int)(local_d8 << 0x1c) >> 0x1c ^ param_1[1]) & 0xfU ^ param_1[1];
    uVar6 = (local_d8 ^ uVar6) & 0x10 ^ uVar6;
    uVar6 = (local_d8 ^ uVar6) & 0x20 ^ uVar6;
    DAT_78041a88 = (undefined4 *)uVar1;
    DAT_78041aa4 = (undefined4 *)uVar2;
    DAT_78041aa8 = (undefined4 *)uVar3;
    param_1[1] = (local_d8 ^ uVar6) & 0x40 ^ uVar6;
    *param_1 = local_dc;
    return param_1;
  }
  FUN_78006450(param_1,1);
  return param_1;
}


