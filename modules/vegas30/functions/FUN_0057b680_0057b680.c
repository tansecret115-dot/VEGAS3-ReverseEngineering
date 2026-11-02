/* Module: vegas30.exe
   Function: FUN_0057b680
   Address: 0057b680
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0057b680(int *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  
  iVar1 = _SfList_IsListFast_4(param_1);
  if (iVar1 != 0) {
    pcVar2 = (char *)FUN_005bad20(DAT_0064b138);
    piVar3 = (int *)FUN_00436fa0(local_24);
    iVar1 = *piVar3;
    while( true ) {
      if (*pcVar2 == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(pcVar2 + 0xc);
      }
      if (iVar1 == iVar4) break;
      iVar4 = *(int *)(iVar1 + 4);
      if ((*(byte *)(iVar4 + 0x134) & 0x80) != 0) {
        local_1c = *(undefined4 *)(iVar4 + 0x164);
        local_20 = iVar4;
        iVar4 = _SfList_FindSortedItemRange_20(param_1,&local_20,0,0xffffffff,&LAB_0057b430);
        if (param_1 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *param_1;
        }
        if ((-1 < iVar4) && (iVar4 <= iVar5 + -1)) {
          _SfDibFree_8(*(undefined4 *)(param_1[1] * iVar4 + 0x1c + param_1[2]),0);
          _SfList_DeleteList_16(param_1,iVar4,1,0);
        }
      }
      FUN_00436e20();
    }
  }
  return;
}


