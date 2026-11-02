/* Module: vegas30.exe
   Function: FUN_005de1a0
   Address: 005de1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005de1a0(HANDLE param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 local_14;
  int local_10 [4];
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  SetFilePointer(param_1,0,(PLONG)0x0,0);
  iVar1 = riff64_ReadFileID(param_1,&local_18,local_10);
  if (iVar1 < 0) {
    return 0;
  }
  iVar1 = 4;
  bVar5 = true;
  piVar3 = &DAT_0062a4e0;
  piVar4 = local_10;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar1 = 4;
    bVar5 = true;
    piVar3 = &DAT_0062a4f0;
    piVar4 = local_10;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar1 = 4;
      bVar5 = true;
      piVar3 = &DAT_0062a500;
      piVar4 = local_10;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar5 = *piVar3 == *piVar4;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (bVar5);
      if (!bVar5) {
        return 0;
      }
    }
  }
  if (param_3 == (undefined4 *)0x0) goto LAB_005de267;
  iVar1 = 4;
  bVar5 = true;
  piVar3 = &DAT_0062a4f0;
  piVar4 = local_10;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (bVar5) {
LAB_005de260:
    uVar2 = 1;
  }
  else {
    iVar1 = 4;
    uVar2 = 0;
    bVar5 = true;
    piVar3 = &DAT_0062a500;
    piVar4 = local_10;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (bVar5) goto LAB_005de260;
  }
  *param_3 = uVar2;
LAB_005de267:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_18;
    param_2[1] = local_14;
  }
  return 1;
}


