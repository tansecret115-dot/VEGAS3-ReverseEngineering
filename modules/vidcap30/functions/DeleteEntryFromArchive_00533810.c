/* Module: vidcap30.exe
   Function: DeleteEntryFromArchive
   Address: 00533810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CArchive2::DeleteEntryFromArchive(char const *,unsigned long) */

long CArchive2::DeleteEntryFromArchive(char *param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 in_stack_0000000c;
  int local_47c;
  undefined1 local_478 [4];
  uint local_474 [4];
  undefined4 local_464 [21];
  undefined1 local_410 [260];
  undefined1 local_30c;
  undefined1 local_208;
  undefined1 local_104 [260];
  
                    /* 0x133810  10  ?DeleteEntryFromArchive@CArchive2@@QAGJPBDK@Z */
  if (*(int *)(param_1 + 0x24) == 3) {
    iVar2 = FUN_005336b0(param_2,in_stack_0000000c);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x888) = in_stack_0000000c;
      local_47c = 0;
      puVar6 = local_464;
      for (iVar2 = 0xd8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_410[0] = 0;
      local_30c = 0;
      local_208 = 0;
      iVar2 = 0;
      uVar3 = FUN_005307b0(param_2,local_104,&local_47c);
      if (-1 < (int)uVar3) {
        uVar3 = FUN_00537440(local_464);
        while (uVar3 == 0) {
          _SfGetFileNamePtrA_4(local_410);
          iVar4 = FUN_005308d0(local_410,local_104,local_47c);
          piVar1 = *(int **)(param_1 + 0x10);
          local_474[0] = (uint)(iVar4 != 0);
          if (piVar1 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *piVar1;
          }
          if ((iVar2 < 0) || (iVar4 + -1 < iVar2)) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = *(int **)(piVar1[2] + iVar2 * 4);
          }
          if (piVar5 == (int *)0x0) {
            _SfList_AllocAndInsertItem_20(piVar1,local_474,0x10,0xffffffff,local_478);
          }
          else if (local_474[0] != 0) {
            if (*piVar5 == 0) {
              *piVar5 = 1;
              *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 8) + iVar2 * 4) = piVar5;
            }
            if (local_47c == 0) break;
          }
          iVar2 = iVar2 + 1;
          uVar3 = FUN_00537500(local_464);
        }
      }
    }
    else {
      FUN_00536e70(0xaaaaaaa8,"DeleteEntryFromArchive",0);
      uVar3 = 0x8004e0c8;
    }
  }
  else {
    uVar3 = 0x80004005;
  }
  return (-1 < (int)uVar3) - 1 & uVar3;
}


