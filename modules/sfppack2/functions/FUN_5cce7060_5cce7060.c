/* Module: sfppack2.dll
   Function: FUN_5cce7060
   Address: 5cce7060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5cce7060(void *this,int param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  bool bVar1;
  double local_18;
  double local_10;
  double local_8;
  
  local_10 = (double)param_1 * _DAT_5cd514c8;
  bVar1 = _DAT_5cd51520 != local_10;
  *param_5 = (uint)bVar1;
  if (bVar1 != 0) {
    local_8 = _DAT_5cd514f8 / (double)param_2;
    local_18 = (double)param_3 / (double)param_4;
    FUN_5cce6f10(this,(int)(param_5 + 2),(undefined4 *)&local_18);
  }
  return *param_5;
}


