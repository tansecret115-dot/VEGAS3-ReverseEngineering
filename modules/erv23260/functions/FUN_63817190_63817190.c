/* Module: erv23260.dll
   Function: FUN_63817190
   Address: 63817190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_63817190(byte param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1;
  _param_1 = (uint)param_1;
  if ((param_4 != 0) && (param_3 != 0)) {
    _param_1 = (uint)(byte)(&DAT_638302b0)[bVar1];
  }
  iVar2 = 0x40;
  do {
    *param_2 = *param_2 * _param_1 * 2;
    iVar2 = iVar2 + -1;
    param_2 = param_2 + 1;
  } while (iVar2 != 0);
  return;
}


