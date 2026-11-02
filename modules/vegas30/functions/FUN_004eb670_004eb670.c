/* Module: vegas30.exe
   Function: FUN_004eb670
   Address: 004eb670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004eb670(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar5 = 0;
  if (0 < *param_1) {
    piVar3 = (int *)param_1[2];
    while( true ) {
      iVar1 = *piVar3;
      iVar2 = *(int *)(iVar1 + 0x208);
      if (iVar2 == 6) break;
      if (iVar2 == 0x10) {
        uVar4 = FUN_004eb720(iVar1);
        goto LAB_004eb703;
      }
      if (iVar2 == 0xf) {
        uVar4 = FUN_00443a30(iVar1);
        goto LAB_004eb703;
      }
      if ((((iVar2 == 10) || (iVar2 == 0xb)) || (iVar2 == 0xc)) ||
         ((iVar2 == 0xd || (iVar2 == 0xe)))) {
        uVar4 = FUN_00436510(iVar1,DAT_0064b138,*(undefined4 *)(iVar1 + 0x208));
        goto LAB_004eb703;
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 1;
      if (*param_1 <= iVar5) {
        return 0;
      }
    }
    uVar4 = FUN_00434740(iVar1,0);
LAB_004eb703:
    _SfList_DeleteList_16(param_1,iVar5,1,0);
    FUN_004e7610();
  }
  return uVar4;
}


