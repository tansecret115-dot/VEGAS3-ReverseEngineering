/* Module: rmme3260.dll
   Function: FUN_66259310
   Address: 66259310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66259310(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_6627f238;
  if (DAT_6627f238 != (undefined4 *)0x0) {
    if ((DAT_6627f238[1] == 0) || (*(int *)((int)DAT_6627f238 + 0x85) == 0)) {
      assert(s_m_hLib_____raWSACleanup_6627c3c4,s___pub_win_sock_h_6627c3b0,0x109);
    }
    (**(code **)((int)puVar1 + 0x85))();
    puVar1 = DAT_6627f238;
    if (DAT_6627f238 != (undefined4 *)0x0) {
      FUN_6625e480(DAT_6627f238);
      operator_delete(puVar1);
    }
    DAT_6627f238 = (undefined4 *)0x0;
  }
  return 0;
}


