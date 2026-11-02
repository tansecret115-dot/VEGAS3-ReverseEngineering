/* Module: pncrt.dll
   Function: _ismbbkana
   Address: 7801fb10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbbkana(uint _C)

{
  int iVar1;
  
                    /* 0x1fb10  292  _ismbbkana */
  if (DAT_78042400 == 0x3a4) {
    iVar1 = FUN_7801fb40(_C,0,3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


