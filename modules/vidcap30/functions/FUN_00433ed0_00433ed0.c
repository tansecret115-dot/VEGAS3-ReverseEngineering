/* Module: vidcap30.exe
   Function: FUN_00433ed0
   Address: 00433ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00433ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0x9cc9;
  local_c = 0x9cca;
  local_8 = 0x9ccb;
  local_4 = 0;
  iVar1 = FUN_00404200(399,0);
  if (iVar1 == 0) {
    return 0x8004e003;
  }
  _SfCullMenu_16(iVar1,&local_10,4,1);
  FUN_00433c70(*(undefined4 *)(param_1 + 0x184),iVar1);
  uVar2 = FUN_00404270(*(undefined4 *)(param_1 + 8),iVar1,&stack0x00000008,2);
  FUN_00432b60(param_1,uVar2,0x461,*(undefined4 *)(param_1 + 0x184));
  return 0;
}


