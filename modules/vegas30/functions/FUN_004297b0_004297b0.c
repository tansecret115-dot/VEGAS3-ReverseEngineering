/* Module: vegas30.exe
   Function: FUN_004297b0
   Address: 004297b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004297b0(int param_1,uchar *param_2)

{
  uchar *_Source;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0xffff) {
    _Source = (uchar *)_SfGetString_8(DAT_00647204,0x126);
    _mbscpy(param_2,_Source);
    return;
  }
  iVar1 = FUN_00429760(param_1,0);
  uVar3 = (&DAT_0063dad8)[iVar1];
  uVar2 = _SfGetString_8(DAT_00647204,0x127);
  SfPrintF(param_2,uVar2,uVar3);
  return;
}


