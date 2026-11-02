/* Module: 50comupd.exe
   Function: FUN_01005cb3
   Address: 01005cb3
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_01005cb3(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int local_28 [2];
  undefined4 local_20;
  ushort local_10;
  undefined2 local_e;
  undefined2 local_c;
  ushort local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  iVar1 = (*(code *)param_1[4])(param_2,local_28,0x24);
  if ((iVar1 == 0x24) && (local_28[0] == 0x4643534d)) {
    if (local_10 == 0x103) {
      *param_3 = local_20;
      *(undefined2 *)(param_3 + 1) = local_e;
      *(undefined2 *)((int)param_3 + 6) = local_c;
      *(undefined2 *)(param_3 + 2) = local_8;
      *(undefined2 *)((int)param_3 + 10) = local_6;
      param_3[3] = local_a >> 2 & 1;
      param_3[4] = local_a & 1;
      param_3[5] = local_a & 2;
      return 1;
    }
    FUN_01006dcb((undefined4 *)*param_1,3,(uint)local_10);
  }
  return 0;
}


