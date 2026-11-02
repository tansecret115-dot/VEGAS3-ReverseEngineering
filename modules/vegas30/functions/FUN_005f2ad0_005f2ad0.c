/* Module: vegas30.exe
   Function: FUN_005f2ad0
   Address: 005f2ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005f2ad0(int *param_1,undefined1 *param_2)

{
  int *piVar1;
  int cbMultiByte;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int *lpMultiByteStr;
  undefined1 *puStack_464;
  int iVar4;
  int *piStack_45c;
  int *piStack_458;
  int *piStack_44c;
  uint uStack_448;
  int local_444;
  undefined1 auStack_440 [8];
  int iStack_438;
  WCHAR aWStack_434 [524];
  undefined1 *puStack_1c;
  int iStack_18;
  
  iVar2 = -0x7ff8ffa9;
  if (param_2 != (undefined1 *)0x0) {
    piStack_458 = (int *)0x1;
    piStack_45c = (int *)0xffffffff;
    puStack_464 = param_2;
    _SfList_DeleteList_16();
    piStack_458 = &local_444;
    local_444 = 0;
    piStack_45c = param_1;
    iVar2 = (**(code **)(*param_1 + 0x58))();
    if ((-1 < iVar2) && (piStack_44c != (int *)0x0)) {
      puStack_464 = &stack0xfffffbac;
      iVar2 = (**(code **)(*piStack_44c + 0xc))();
      if ((-1 < iVar2) && (piStack_45c != (int *)0x0)) {
        iVar2 = (**(code **)(*piStack_45c + 0x14))(piStack_45c,0,0,0);
        if ((-1 < iVar2) &&
           (iVar2 = (**(code **)(_DAT_00000000 + 0xc))(0,auStack_440,0xc,&stack0xfffffb94),
           -1 < iVar2)) {
          iVar3 = 1;
          iVar4 = 0;
          if (0 < iStack_438) {
            do {
              iVar2 = (**(code **)(_DAT_00000000 + 0xc))(0,&piStack_45c,0x1c,&stack0xfffffb94);
              cbMultiByte = local_444;
              if (-1 < iVar2) {
                if ((uStack_448 == 0) && (iStack_18 == 0)) {
                  iVar2 = (**(code **)(_DAT_00000000 + 0xc))
                                    (0,aWStack_434,local_444,&stack0xfffffb94);
                  if (iVar3 < 0xb) {
                    iVar3 = iVar3 + 1;
                  }
                }
                else {
                  puStack_464 = (undefined1 *)0x0;
                  iVar2 = _SfList_AllocAndInsertItem_20
                                    (param_2,0,local_444 + 0x38,0xffffffff,&puStack_464);
                  if (-1 < iVar2) {
                    piVar1 = *(int **)(*(int *)(param_2 + 8) + (int)puStack_464 * 4);
                    *piVar1 = (int)piStack_458;
                    piVar1[1] = 0;
                    piVar1[2] = unaff_EBP;
                    piVar1[3] = (int)piStack_44c;
                    piVar1[8] = (piVar1[8] ^ uStack_448) & 1 ^ piVar1[8];
                    if (iVar3 < 0xb) {
                      piVar1[4] = iVar3;
                      iVar3 = iVar3 + 1;
                    }
                    iVar2 = (**(code **)(_DAT_00000000 + 0xc))
                                      (0,aWStack_434,local_444,&stack0xfffffb94);
                    param_2 = puStack_1c;
                    if (-1 < iVar2) {
                      lpMultiByteStr = piVar1 + 0xc;
                      if ((&stack0x00000000 == &DAT_00000434) || (aWStack_434[0] != L'\0')) {
                        WideCharToMultiByte(0,0,aWStack_434,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                            (LPCSTR)0x0,(LPBOOL)0x0);
                      }
                      else if (lpMultiByteStr != (int *)0x0) {
                        *(undefined1 *)lpMultiByteStr = 0;
                      }
                      *(undefined1 *)((int)piVar1 + cbMultiByte + 0x2f) = 0;
                      param_2 = puStack_1c;
                    }
                  }
                }
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iStack_438);
          }
        }
        (**(code **)(_DAT_00000000 + 8))(0);
        piStack_45c = (int *)0x0;
      }
      (**(code **)(_DAT_00000000 + 8))();
    }
  }
  return iVar2;
}


