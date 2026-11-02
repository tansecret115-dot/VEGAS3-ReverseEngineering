/* Module: Setup.exe
   Function: DeleteEntryFromArchive
   Address: 0040d5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::DeleteEntryFromArchive(char const *,unsigned long) */

long CArchive2::DeleteEntryFromArchive(char *param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 in_stack_0000000c;
  int local_47c;
  int local_478;
  uint local_474 [4];
  int local_464 [21];
  CHAR local_410 [260];
  undefined1 local_30c;
  undefined1 local_208;
  uchar local_104 [260];
  
                    /* 0xd5d0  9  ?DeleteEntryFromArchive@CArchive2@@QAGJPBDK@Z */
  if (*(int *)(param_1 + 0x24) == 3) {
    iVar1 = FUN_0040d470(param_1,(uchar *)param_2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x888) = in_stack_0000000c;
      local_47c = 0;
      piVar5 = local_464;
      for (iVar1 = 0xd8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
      }
      local_410[0] = '\0';
      local_30c = 0;
      local_208 = 0;
      iVar1 = 0;
      uVar2 = FUN_0040a570(param_1,(uchar *)param_2,local_104,&local_47c);
      if (-1 < (int)uVar2) {
        uVar2 = FUN_00411200(param_1,local_464);
        while (uVar2 == 0) {
          _SfGetFileNamePtrA_4(local_410);
          iVar3 = FUN_0040a690(local_410,(LPCSTR)local_104,local_47c);
          piVar5 = *(int **)(param_1 + 0x10);
          local_474[0] = (uint)(iVar3 != 0);
          if (piVar5 == (int *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = *piVar5;
          }
          if ((iVar1 < 0) || (iVar3 + -1 < iVar1)) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = *(int **)(piVar5[2] + iVar1 * 4);
          }
          if (piVar4 == (int *)0x0) {
            _SfList_AllocAndInsertItem_20(piVar5,(int *)local_474,0x10,-1,&local_478);
          }
          else if (local_474[0] != 0) {
            if (*piVar4 == 0) {
              *piVar4 = 1;
              *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 8) + iVar1 * 4) = piVar4;
            }
            if (local_47c == 0) break;
          }
          iVar1 = iVar1 + 1;
          uVar2 = FUN_004112c0(param_1,local_464);
        }
      }
    }
    else {
      FUN_00410c30(param_1,0xaaaaaaa8,(uchar *)"DeleteEntryFromArchive",(uchar *)0x0);
      uVar2 = 0x8004e0c8;
    }
  }
  else {
    uVar2 = 0x80004005;
  }
  return (-1 < (int)uVar2) - 1 & uVar2;
}


