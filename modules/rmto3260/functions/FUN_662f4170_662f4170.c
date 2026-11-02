/* Module: rmto3260.dll
   Function: FUN_662f4170
   Address: 662f4170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662f4170(GUID *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int local_70 [22];
  ulong local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 uStack_e;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined4 local_8;
  
  if (((param_1 != (GUID *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_3 != 0)) {
    iVar1 = FUN_662f4240(param_1);
    if (-1 < iVar1) {
      FUN_662f4850(local_70);
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      uStack_e = 0;
      local_c = 0;
      uStack_a = 0;
      local_8 = 0;
      FUN_662f4880(local_70,&param_1->Data1,0x10);
      FUN_662f4880(local_70,param_2,param_3);
      FUN_662f4940((int)&local_18,local_70);
      param_1->Data3 = local_14._2_2_;
      param_1->Data1 = local_18;
      param_1->Data2 = (ushort)local_14;
      param_1->Data4[0] = (uchar)local_10;
      param_1->Data4[1] = (uchar)((ushort)local_10 >> 8);
      *(uint *)(param_1->Data4 + 2) = CONCAT22(local_c,uStack_e);
      *(undefined2 *)(param_1->Data4 + 6) = uStack_a;
    }
    return iVar1;
  }
  return -0x7ff8ffa9;
}


