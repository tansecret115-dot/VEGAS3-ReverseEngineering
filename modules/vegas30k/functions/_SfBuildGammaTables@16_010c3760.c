/* Module: vegas30k.dll
   Function: _SfBuildGammaTables@16
   Address: 010c3760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _SfBuildGammaTables_16(int param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  
                    /* 0xc3760  780  _SfBuildGammaTables@16 */
  if ((param_1 != 0) && (param_2 != (undefined2 *)0x0)) {
    iVar3 = 0;
    do {
      _CIpow();
      uVar1 = ftol();
      *(undefined1 *)(iVar3 + param_1) = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    iVar3 = 0;
    do {
      _CIpow();
      uVar2 = ftol();
      *param_2 = uVar2;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
    } while (iVar3 < 0x10000);
    return 1;
  }
  return 0;
}


