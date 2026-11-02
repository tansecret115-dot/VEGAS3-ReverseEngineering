/* Module: vegas30.exe
   Function: FUN_005ebe40
   Address: 005ebe40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005ebe40(char *param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *_Memory;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_14;
  int local_10;
  
  iVar5 = 0;
  if ((*param_1 != '\0') && (iVar5 = *(int *)(param_1 + 8), (*(byte *)(iVar5 + 0x18) & 2) != 2)) {
    bVar1 = *(byte *)(*(int *)(iVar5 + 0x10) + 0x18);
    iVar6 = *(int *)(iVar5 + 0x10);
    while ((bVar1 & 2) != 2) {
      bVar1 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
      iVar5 = iVar6;
      iVar6 = *(int *)(iVar6 + 0x10);
    }
  }
  do {
    while( true ) {
      do {
        if (*param_1 == '\0') {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_1 + 0xc);
        }
        if (iVar5 == iVar6) {
          return;
        }
        piVar2 = *(int **)(*(int *)(iVar5 + 4) + 0x130);
        if (piVar2 == (int *)0x0) {
          local_14 = 0;
        }
        else {
          local_14 = *piVar2;
        }
        local_10 = 0;
        if (0 < local_14) {
          do {
            iVar6 = *(int *)(piVar2[2] + local_10 * 4);
            piVar3 = *(int **)(iVar6 + 0x94);
            piVar9 = (int *)(iVar6 + 0x94);
            if (piVar3 != (int *)0x0) {
              iVar6 = *piVar3;
              iVar7 = 0;
              if (0 < iVar6) {
                do {
                  iVar4 = *(int *)(*piVar9 + 8);
                  iVar8 = *(int *)(*piVar9 + 4) * iVar7;
                  _Memory = *(void **)(iVar8 + 0x14 + iVar4);
                  if (_Memory != (void *)0x0) {
                    free(_Memory);
                    *(undefined4 *)(iVar8 + iVar4 + 0x14) = 0;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar6);
              }
              _SfList_Destroy_4(*piVar9);
              *piVar9 = 0;
            }
            local_10 = local_10 + 1;
          } while (local_10 < local_14);
        }
      } while ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x18) & 2) == 2));
      iVar6 = *(int *)(iVar5 + 0x14);
      iVar7 = iVar5;
      if ((*(byte *)(iVar6 + 0x18) & 2) == 2) break;
      bVar1 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
      iVar5 = iVar6;
      iVar6 = *(int *)(iVar6 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
        iVar5 = iVar6;
        iVar6 = *(int *)(iVar6 + 0x10);
      }
    }
    do {
      iVar5 = *(int *)(iVar7 + 0xc);
      if (*(int *)(iVar5 + 0x10) == iVar7) break;
      iVar7 = iVar5;
    } while ((*(byte *)(iVar5 + 0x18) & 2) != 2);
  } while( true );
}


