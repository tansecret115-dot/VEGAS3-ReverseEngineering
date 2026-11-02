/* Module: vidcap30.exe
   Function: _SfGetFileNamePtrW@4
   Address: 0049d710
   Source: Ghidra pseudocode (Stage 10 batch) */


short * _SfGetFileNamePtrW_4(short *param_1)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  
                    /* 0x9d710  400  _SfGetFileNamePtrW@4 */
  sVar2 = *param_1;
  psVar3 = param_1;
  while (sVar2 != 0) {
    if ((sVar2 == 0x3a) || (sVar2 == 0x5c)) {
      psVar3 = param_1 + 1;
    }
    psVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    sVar2 = *psVar1;
  }
  return psVar3;
}


