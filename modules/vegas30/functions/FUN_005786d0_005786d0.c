/* Module: vegas30.exe
   Function: FUN_005786d0
   Address: 005786d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005786d0(short *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  bool bVar6;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  short local_10 [8];
  
  local_24 = (int *)0x0;
  uVar1 = FUN_005791b0(0,&local_24);
  if (local_24 == (int *)0x0) {
    return uVar1;
  }
  do {
    FUN_005799d0(local_24,&local_20);
    if (param_2 == 0) {
      iVar2 = FUN_00578620(&local_20,local_10);
    }
    else {
      iVar2 = FUN_005766d0(&local_20,local_10);
    }
    if (-1 < iVar2) {
      iVar3 = 5;
      bVar6 = true;
      psVar4 = local_10;
      psVar5 = param_1;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *psVar4 == *psVar5;
        psVar4 = psVar4 + 1;
        psVar5 = psVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        *param_3 = local_20;
        param_3[1] = local_1c;
        param_3[2] = local_18;
        param_3[3] = local_14;
        uVar1 = FUN_00579b80(local_24);
        param_3[4] = uVar1;
        uVar1 = FUN_00579ba0(local_24);
        param_3[5] = uVar1;
        if (local_24 != (int *)0x0) {
          (**(code **)(*local_24 + 8))(local_24);
        }
        if (iVar2 != -0x7fffbffc) {
          return 1;
        }
        return 0x80004004;
      }
    }
    FUN_00579990(&local_24);
    if (local_24 == (int *)0x0) {
      return 0x80004004;
    }
  } while( true );
}


