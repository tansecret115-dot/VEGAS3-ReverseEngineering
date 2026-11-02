/* Module: rmbe3260.dll
   Function: FUN_66001520
   Address: 66001520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66001520(int *param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = FUN_660015a0(param_1,&local_14,&local_10,&local_c,&local_8);
  (**(code **)(*(int *)param_1[0x41] + 0x14))((int *)param_1[0x41],param_1[0x46]);
  if (-1 < iVar1) {
    FUN_66001670(param_1,local_14,local_10,local_c,local_8);
  }
  if (param_1[0x45] != 0) {
    (**(code **)(*param_1 + 0x184))(DAT_66075000);
  }
  return 1;
}


