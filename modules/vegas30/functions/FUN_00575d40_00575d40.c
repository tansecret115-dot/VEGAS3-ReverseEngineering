/* Module: vegas30.exe
   Function: FUN_00575d40
   Address: 00575d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00575d75) */

undefined4 FUN_00575d40(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  uVar1 = DAT_0064b138;
  piVar2 = (int *)FUN_005b87b0(DAT_0064b138);
  iVar4 = 0;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar2;
    }
    if (iVar3 <= iVar4) break;
    iVar3 = *(int *)(piVar2[2] + iVar4 * 4);
    lVar5 = FUN_005caf70(uVar1,iVar3);
    if ((0 < lVar5) && (*(int *)(iVar3 + 4) == 3)) {
      return 1;
    }
    iVar4 = iVar4 + 1;
  }
  return 0;
}


