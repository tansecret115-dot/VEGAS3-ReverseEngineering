/* Module: InstMsi-x86a.exe
   Function: FUN_01005cb0
   Address: 01005cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01005cb0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int local_24 [2];
  undefined4 uStack_1c;
  undefined4 uStack_c;
  undefined2 uStack_8;
  ushort uStack_6;
  undefined2 uStack_4;
  undefined2 uStack_2;
  
  iVar1 = (*(code *)param_1[4])(param_2,local_24,0x24);
  if (iVar1 != 0x24) {
    return 0;
  }
  if (local_24[0] != 0x4643534d) {
    return 0;
  }
  if ((short)uStack_c != 0x103) {
    FUN_01007480((undefined4 *)*param_1,3,uStack_c & 0xffff);
    return 0;
  }
  *(undefined2 *)(param_3 + 1) = uStack_c._2_2_;
  *param_3 = uStack_1c;
  *(undefined2 *)((int)param_3 + 6) = uStack_8;
  *(undefined2 *)(param_3 + 2) = uStack_4;
  *(undefined2 *)((int)param_3 + 10) = uStack_2;
  param_3[3] = (uint)((uStack_6 & 4) != 0);
  param_3[4] = uStack_6 & 1;
  param_3[5] = uStack_6 & 2;
  return 1;
}


