/* Module: vegas30.exe
   Function: FUN_004df350
   Address: 004df350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004df350(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_18 = 0;
  local_14 = 0;
  if (*(int *)(param_1 + 0xd50) != 0) {
    piVar1 = (int *)(param_1 + 0xcd8);
    if (*(int *)(param_1 + 0xcd8) != 0) {
      _SfList_DeleteList_16(*(int *)(param_1 + 0xcd8),0,0xffffffff,0);
      _SfList_Destroy_4(*piVar1);
      *piVar1 = 0;
    }
    iVar2 = FUN_004dd330(param_1,&local_18,&local_14);
    if (iVar2 != 0) {
      FUN_004582a0(param_1,&local_8,&local_10);
      if ((local_10 == 0) && (local_c == 0)) {
        local_8 = 0;
        local_4 = 0;
        local_10 = -1;
        local_c = -1;
      }
      iVar2 = FUN_004ec280(piVar1,*(int *)(param_1 + 0xd50) + 0x170,local_18,local_8,local_4,
                           local_10,local_c,0,0xffffffff,0,0,0);
      if ((-1 < iVar2) && (*piVar1 != 0)) {
        uVar3 = FUN_0040c3e0(DAT_0064762c,*piVar1,2);
        return uVar3;
      }
    }
  }
  return 0;
}


