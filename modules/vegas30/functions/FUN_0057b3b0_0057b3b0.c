/* Module: vegas30.exe
   Function: FUN_0057b3b0
   Address: 0057b3b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0057b3b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  tagRECT local_14;
  undefined4 local_4;
  
  iVar1 = _SfList_IsListFast_4(param_1);
  if (iVar1 != 0) {
    local_20 = param_2;
    local_1c = *(undefined4 *)(param_2 + 0x164);
    local_18 = 0;
    local_4 = 0;
    SetRectEmpty(&local_14);
    iVar2 = _SfList_FindSortedItemRange_20(param_1,&local_20,0,0xffffffff,&LAB_0057b430);
    iVar1 = 0;
    if (param_1 != (int *)0x0) {
      iVar1 = *param_1;
    }
    if ((-1 < iVar2) && (iVar2 <= iVar1 + -1)) {
      return 1;
    }
  }
  return 0;
}


