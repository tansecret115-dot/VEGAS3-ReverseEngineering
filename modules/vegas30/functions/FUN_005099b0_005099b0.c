/* Module: vegas30.exe
   Function: FUN_005099b0
   Address: 005099b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005099b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar1 = _SfGetMetricBinary_16(DAT_0064b520,0x66,&local_4,4);
  iVar2 = 0x1000;
  if (-1 < iVar1) {
    iVar2 = local_4;
  }
  *param_1 = iVar2;
  local_4 = iVar2 + 1;
  _SfSetMetricBinary_16(DAT_0064b520,0x66,&local_4,4);
  return;
}


