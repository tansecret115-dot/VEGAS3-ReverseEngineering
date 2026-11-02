/* Module: vegas30.exe
   Function: FUN_005c24a0
   Address: 005c24a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c24a0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_retaddr;
  undefined4 *puStack_64;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30 [9];
  int aiStack_c [3];
  
  piVar1 = param_1;
  piVar4 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  puStack_64 = &param_1;
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_30,0x30);
  if (-1 < iVar2) {
    if (aiStack_c[0] == 0x30) {
      iVar3 = 1;
      iVar2 = FUN_0047c4b0(&puStack_64,0,0,0,uStack_38,1,&stack0xffffffa0);
      if (-1 < iVar2) {
        puStack_64[3] = uStack_3c;
        puStack_64[8] = uStack_34;
        puStack_64[9] = local_30[0];
        puStack_64[10] = local_30[1];
        if (1 < local_30[2]) {
          do {
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0;
            iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&uStack_50,0x10,aiStack_c);
            if (iVar2 < 0) goto LAB_005c25f2;
            if (aiStack_c[0] != 0x10) goto LAB_005c24e2;
            _SfList_InsertList_16(puStack_64[0xc],iVar3,&stack0xffffffa0,1);
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_30[2]);
        }
        iVar2 = FUN_0047c670(unaff_retaddr,puStack_64,0xffffffff);
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
    else {
LAB_005c24e2:
      iVar2 = -0x7ffb1ff8;
    }
  }
LAB_005c25f2:
  if (puStack_64 != (undefined4 *)0x0) {
    FUN_0047c480(puStack_64);
  }
  return iVar2;
}


