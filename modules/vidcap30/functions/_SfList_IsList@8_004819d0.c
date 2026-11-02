/* Module: vidcap30.exe
   Function: _SfList_IsList@8
   Address: 004819d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool _SfList_IsList_8(void *param_1,int param_2)

{
  BOOL BVar1;
  
                    /* 0x819d0  510  _SfList_IsList@8 */
  if (param_2 != 0x54) {
    return false;
  }
  BVar1 = IsBadReadPtr(param_1,0x54);
  if (BVar1 != 0) {
    return false;
  }
  return *(int *)((int)param_1 + 0x24) == 0x54525543;
}


