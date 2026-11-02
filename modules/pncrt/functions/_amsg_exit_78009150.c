/* Module: pncrt.dll
   Function: _amsg_exit
   Address: 78009150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl _amsg_exit(int param_1)

{
                    /* 0x9150  170  _amsg_exit */
  if ((DAT_78041e34 == 1) || ((DAT_78041e34 == 0 && (DAT_78041e38 == 1)))) {
    FUN_78008d40();
  }
  FUN_78008d80((undefined *)param_1);
  (*(code *)_aexit_rtn)(0xff);
  return;
}


