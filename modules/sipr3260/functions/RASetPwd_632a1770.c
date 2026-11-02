/* Module: sipr3260.dll
   Function: RASetPwd
   Address: 632a1770
   Source: Ghidra pseudocode (Stage 10 batch) */


void RASetPwd(void *param_1,char *param_2)

{
                    /* 0x1770  14  RASetPwd */
  if (param_1 != (void *)0x0) {
    FUN_632a1610(param_1,param_2);
  }
  return;
}


