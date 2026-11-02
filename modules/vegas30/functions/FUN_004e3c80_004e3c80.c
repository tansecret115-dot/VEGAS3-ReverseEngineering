/* Module: vegas30.exe
   Function: FUN_004e3c80
   Address: 004e3c80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e3c80(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_4;
  
  piVar1 = param_1;
  uVar3 = 0;
  local_4 = 0;
  if (DAT_0064762c == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = DAT_0064762c[0x1c];
  if (iVar2 == 0) {
    FUN_004e46f0(DAT_00647624,0);
    iVar2 = DAT_0064762c[0x1c];
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (0 < *piVar1) {
    FUN_004ec4f0(piVar1,1,&param_1,1);
    if (0 < *piVar1) {
      FUN_004e3c20(iVar2);
      iVar2 = FUN_005ec620();
      if (iVar2 == 0) {
        return -0x7ff8fff2;
      }
      if (DAT_0064762c != (undefined4 *)0x0) {
        uVar3 = *DAT_0064762c;
      }
      local_4 = FUN_004eb670(piVar1,uVar3);
      uVar3 = DAT_0064b138;
      if (-1 < local_4) {
        iVar2 = *piVar1;
        iVar4 = 1;
        if (1 < iVar2) {
          do {
            FUN_004dafb0(uVar3,0,*(undefined4 *)(piVar1[2] + iVar4 * 4),0,0,0,0,0);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar2);
        }
        if (iVar2 != 0) {
          local_4 = FUN_004e39f0(*(undefined4 *)piVar1[2],param_2);
        }
      }
    }
  }
  return local_4;
}


