/* Module: vidcap30.exe
   Function: FUN_00405c30
   Address: 00405c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405c30(undefined4 param_1)

{
  if (DAT_005bba30 == 4) {
    _SfCullMenu_16(param_1,&DAT_005b25bc,0xc,1);
    return;
  }
  _SfCullMenu_16(param_1,&DAT_005b259c,8,1);
  return;
}


