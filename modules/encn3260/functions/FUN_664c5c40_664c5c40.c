/* Module: encn3260.dll
   Function: FUN_664c5c40
   Address: 664c5c40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664c5c40(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_664f2a28;
  if (DAT_664f2a28 != (undefined4 *)0x0) {
    if ((DAT_664f2a28[1] == 0) || (*(int *)((int)DAT_664f2a28 + 0x85) == 0)) {
      assert(s_m_hLib_____raWSACleanup_664efa1c,s___pub_win_sock_h_664efa08,0x109);
    }
    (**(code **)((int)puVar1 + 0x85))();
    puVar1 = DAT_664f2a28;
    if (DAT_664f2a28 != (undefined4 *)0x0) {
      FUN_664ca0a0(DAT_664f2a28);
      operator_delete(puVar1);
    }
    DAT_664f2a28 = (undefined4 *)0x0;
  }
  return 0;
}


