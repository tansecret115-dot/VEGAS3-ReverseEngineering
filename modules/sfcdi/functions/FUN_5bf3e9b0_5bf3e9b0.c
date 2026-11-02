/* Module: sfcdi.dll
   Function: FUN_5bf3e9b0
   Address: 5bf3e9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf3e9b0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1;
  FUN_5bf3ce50(param_1,(LPCSTR)0x0);
  iVar3 = param_3;
  iVar4 = FUN_5bf3dc10(iVar2,param_2,(uchar *)(param_3 + 0xc),(uchar *)(param_3 + 0x110),
                       (uchar *)(param_3 + 0x224),*(int *)(param_3 + 0x328),
                       *(int *)(param_3 + 0x32c),*(undefined4 *)(param_3 + 0x330),
                       *(undefined4 *)(param_3 + 0x334),*(uint *)(param_3 + 8),1,&param_1);
  if ((-1 < iVar4) && ((*(uint *)(iVar3 + 8) & 0x10) != 0)) {
    iVar4 = 0;
    while( true ) {
      piVar1 = *(int **)(iVar3 + 0x214);
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if (iVar5 <= iVar4) break;
      if (piVar1 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar1;
      }
      if ((iVar4 < 0) || (iVar5 + -1 < iVar4)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(piVar1[2] + iVar4 * 4);
      }
      iVar5 = FUN_5bf3e9b0(iVar2,param_1,iVar5);
      if (iVar5 < 0) {
        return;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return;
}


