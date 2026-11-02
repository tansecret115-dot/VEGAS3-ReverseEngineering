/* Module: encn3260.dll
   Function: FUN_6648c400
   Address: 6648c400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * __cdecl FUN_6648c400(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = &DAT_664e29a8;
  do {
    if (*piVar1 == param_1) {
      return (&PTR_s_x_real_rdt_mcast_664e29b0)[iVar2 * 3];
    }
    piVar1 = piVar1 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)piVar1 < 0x664e2a38);
  return &DAT_664f05c4;
}


