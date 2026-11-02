/* Module: sfxpfx2.dll
   Function: FUN_5c8a2240
   Address: 5c8a2240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5c8a2240(void *this,int param_1,int param_2,int param_3,uint param_4,uint *param_5)

{
  bool bVar1;
  double local_18;
  double local_10;
  double local_8;
  
  local_10 = (double)param_1 * _DAT_5c8dc908;
  bVar1 = _DAT_5c8dc8e8 != local_10;
  *param_5 = (uint)bVar1;
  if (bVar1 != 0) {
    local_8 = _DAT_5c8dc7d8 / (double)param_2;
    local_18 = (double)param_3 / (double)param_4;
    FUN_5c8a20f0(this,(int)(param_5 + 2),(undefined4 *)&local_18);
  }
  return *param_5;
}


