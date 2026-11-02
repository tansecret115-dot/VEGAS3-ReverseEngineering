/* Module: mp3plug.dll
   Function: FUN_5f6d9620
   Address: 5f6d9620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6d9620(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  fprintf((FILE *)&strncat_exref,&DAT_5f75ca20,param_1,param_2,param_3);
  fputs(s_This_is_a_program_design_failure_5f75ca50,(FILE *)&strncat_exref);
                    /* WARNING: Subroutine does not return */
  exit(0x14);
}


