/* Module: rmbe3260.dll
   Function: FUN_66040a90
   Address: 66040a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66040a90(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_16;
  undefined4 local_10 [2];
  undefined2 local_8;
  
  FUN_66042f00((void *)((int)param_1 + 0xc2),(uint *)0x0);
  bVar1 = false;
  FUN_6602f240(local_10);
  do {
    iVar2 = FUN_66042d70((void *)((int)param_1 + 0xc2),&local_24);
    if (iVar2 == 0) {
      local_10[0] = local_1c;
      local_8 = local_16;
      (**(code **)(*param_1 + 0x34))(local_20,local_24,local_10,1);
    }
    else {
      bVar1 = true;
    }
  } while (!bVar1);
  FUN_660412b0((int)param_1);
  param_1[9] = param_1[0xa0] + 1000;
  param_1[10] = *(int *)((int)param_1 + 0x72) - *(int *)((int)param_1 + 0x7a);
  FUN_6603ece0((int)param_1);
  return;
}


