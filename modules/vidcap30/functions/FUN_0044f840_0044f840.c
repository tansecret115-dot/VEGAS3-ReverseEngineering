/* Module: vidcap30.exe
   Function: FUN_0044f840
   Address: 0044f840
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0044f840(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [4];
  CHAR local_104 [259];
  undefined1 local_1;
  
  local_10c = DAT_005bb838;
  iVar4 = 0;
  lstrcpynA(local_104,*(LPCSTR *)(param_1 + 0xc),0x104);
  local_1 = 0;
  do {
    iVar2 = FUN_0045efd0(local_10c,&local_110,param_2,local_104,0);
    iVar4 = iVar4 + 1;
    if (iVar4 < 2) {
      SfPrintF(local_104,"Copy of %s",*(undefined4 *)(param_1 + 0xc));
    }
    else {
      SfPrintF(local_104,"Copy of %s (%d)",*(undefined4 *)(param_1 + 0xc),iVar4);
    }
  } while (iVar2 == -0x7ffb1fce);
  if (iVar2 < 0) {
    uVar6 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = _SfGetString_8(DAT_005ba2a0,0xc510);
    SfErrorHandler_DetailsAddString(0,uVar3,uVar6);
  }
  else {
    iVar5 = 0;
    iVar4 = **(int **)(param_1 + 0x10);
    if (0 < iVar4) {
      while (-1 < iVar2) {
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 8) + iVar5 * 4);
        if (*piVar1 == 4) {
          iVar2 = FUN_0044f840(piVar1,local_110);
        }
        else if (*piVar1 == 5) {
          iVar2 = FUN_0045f670(local_10c,local_108,local_110,0xffffffff,piVar1);
        }
        iVar5 = iVar5 + 1;
        if (iVar4 <= iVar5) {
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}


