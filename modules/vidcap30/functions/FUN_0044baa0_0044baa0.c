/* Module: vidcap30.exe
   Function: FUN_0044baa0
   Address: 0044baa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044baa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0x9cc6;
  local_8 = 0x9d5a;
  local_4 = 0x9d58;
  iVar1 = FUN_00404200(399,0);
  if (iVar1 == 0) {
    return 0x8004e003;
  }
  _SfCullMenu_16(iVar1,&local_c,3,1);
  FUN_0044b400(*(undefined4 *)(param_1 + 0x88),iVar1);
  uVar2 = FUN_00404270(*(undefined4 *)(param_1 + 8),iVar1,&stack0x00000008,2);
  FUN_00447580(param_1,uVar2,0x1fd,*(undefined4 *)(param_1 + 0x88));
  return 0;
}


