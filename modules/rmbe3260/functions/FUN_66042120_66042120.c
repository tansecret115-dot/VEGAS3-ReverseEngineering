/* Module: rmbe3260.dll
   Function: FUN_66042120
   Address: 66042120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66042120(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int local_20 [2];
  undefined2 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  if (*(int *)((int)param_1 + 0xce) != 0) {
    while( true ) {
      local_8 = 0;
      local_c = 0;
      puVar1 = (undefined4 *)(**(code **)(**(int **)((int)param_1 + 0x56) + 0xc))(&uStack_10);
      *(undefined4 **)((int)param_1 + 0xba) = puVar1;
      FUN_66043c40(*(void **)((int)param_1 + 0xaa),(short *)0x0,0,puVar1,&local_8,&local_c,
                   (int *)((int)param_1 + 0xc2));
      if (local_8 == 0) break;
      uVar3 = 0;
      if ((int)((ulonglong)*(ushort *)(param_1 + 0x35) %
               (ulonglong)(longlong)(int)(uint)*(ushort *)((int)param_1 + 0xd2)) == 0) {
        *(undefined2 *)(param_1 + 0x35) = 0;
        uVar3 = 2;
      }
      *(short *)(param_1 + 0x35) = (short)param_1[0x35] + 1;
      FUN_6602f240(local_20);
      local_20[0] = local_c;
      local_18 = uVar3;
      (**(code **)(*param_1 + 0x34))(*(undefined4 *)((int)param_1 + 0xba),local_8,local_20,0);
    }
    (**(code **)(**(int **)((int)param_1 + 0x56) + 0x1c))(*(undefined4 *)((int)param_1 + 0xba));
    FUN_66043cb0(*(void **)((int)param_1 + 0xaa),*(undefined4 **)((int)param_1 + 0x3a),0);
    local_14 = *(undefined4 *)((int)param_1 + 0x6a);
    uStack_10 = 0;
    iVar2 = ftol();
    param_1[10] = (*(int *)((int)param_1 + 0x72) - iVar2) - *(int *)((int)param_1 + 0x7a);
    FUN_6603ece0((int)param_1);
  }
  return 0;
}


