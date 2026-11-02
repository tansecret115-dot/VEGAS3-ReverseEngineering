/* Module: vegas30.exe
   Function: FUN_00575ce0
   Address: 00575ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00575d1e) */

longlong FUN_00575ce0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  uVar2 = DAT_0064b138;
  iVar5 = 0;
  lVar1 = 0;
  piVar3 = (int *)FUN_005b87b0(DAT_0064b138);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar3;
    }
    if (iVar4 <= iVar5) break;
    lVar6 = FUN_005caf70(uVar2,*(undefined4 *)(piVar3[2] + iVar5 * 4));
    if (lVar1 < lVar6) {
      lVar1 = lVar6;
    }
    iVar5 = iVar5 + 1;
  }
  return lVar1;
}


