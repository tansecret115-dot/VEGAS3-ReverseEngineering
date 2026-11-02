/* Module: encn3260.dll
   Function: FUN_664db1e0
   Address: 664db1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl
FUN_664db1e0(int param_1,int param_2,double param_3,int param_4,double param_5,int param_6)

{
  double dVar1;
  int iVar2;
  int local_8;
  
  local_8 = param_1;
  dVar1 = _DAT_664e0118;
  if (param_6 != 0) {
    dVar1 = _DAT_664e0118 * _DAT_664e0138;
  }
  if ((0 < param_2) && ((double)param_2 < (double)param_1 * _DAT_664e0120)) {
    if (param_4 == 0) {
      param_3 = param_3 * _DAT_664f2b68;
      local_8 = param_1 - param_2;
    }
    else {
      param_3 = param_3 * _DAT_664e0120;
      local_8 = param_2;
    }
  }
  param_3 = ((double)local_8 * param_5) / param_3;
  if (param_3 < dVar1) {
    param_3 = dVar1;
  }
  iVar2 = rand();
  return (((float10)iVar2 * (float10)_DAT_664e0140 - (float10)_DAT_664e0148) * (float10)param_3) /
         (float10)_DAT_664e0128;
}


