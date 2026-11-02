/* Module: encn3260.dll
   Function: FUN_6648c430
   Address: 6648c430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6648c430(char *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  iVar3 = 0;
  ppuVar2 = &PTR_s_x_real_rdt_mcast_664e29b0;
  do {
    iVar1 = _stricmp(*ppuVar2,param_1);
    if (iVar1 == 0) {
      return (&DAT_664e29a8)[iVar3 * 3];
    }
    ppuVar2 = ppuVar2 + 3;
    iVar3 = iVar3 + 1;
  } while ((int)ppuVar2 < 0x664e2a40);
  return 0;
}


