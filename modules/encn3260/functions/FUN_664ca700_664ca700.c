/* Module: encn3260.dll
   Function: FUN_664ca700
   Address: 664ca700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664ca700(int param_1)

{
  int iVar1;
  undefined1 local_194 [2];
  undefined1 local_192;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x81) == 0)) {
    assert(s_m_hLib_____raWSAStartup_664efe94,s___pub_win_sock_h_664efa08,0xfb);
  }
  iVar1 = (**(code **)(param_1 + 0x81))(0x101,local_194);
  if (iVar1 == 0) {
    if ((local_194[0] == '\x01') && (local_194[1] == '\x01')) {
      *(undefined1 *)(param_1 + 8) = local_192;
      return 1;
    }
    if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x85) == 0)) {
      assert(s_m_hLib_____raWSACleanup_664efa1c,s___pub_win_sock_h_664efa08,0x109);
    }
    (**(code **)(param_1 + 0x85))();
  }
  *(undefined1 *)(param_1 + 8) = local_192;
  return 0;
}


