/* Module: sfcdi.dll
   Function: FUN_5bf1f870
   Address: 5bf1f870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5bf1f870(void *this,_SFCDI_BURN_STATS *param_1)

{
  SfCDBurn_GetStatus(*(HSFBURN__ **)((int)this + 0x3d18),param_1);
  return 0;
}


