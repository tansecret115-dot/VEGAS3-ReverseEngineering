/* Module: vegas30.exe
   Function: FUN_005d29c0
   Address: 005d29c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005d29c0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  uint uVar4;
  uint uVar5;
  int *piStack_38c;
  int iStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  
  iVar2 = 0;
  piStack_38c = *(int **)(param_2 + 0x560);
  if (piStack_38c != (int *)0x0) {
    uStack_37c = 0;
    uStack_380 = 0;
    uStack_384 = 0;
    iStack_388 = 0;
    iVar2 = (**(code **)(*piStack_38c + 0x14))();
    if (-1 < iVar2) {
      uStack_384 = 0;
      uVar4 = 4;
      iVar2 = (**(code **)(**(int **)(param_2 + 0x560) + 0xc))
                        (*(int **)(param_2 + 0x560),&uStack_384,4,0);
      if (-1 < iVar2) {
        uVar5 = 0;
        if (uVar4 != 0) {
          do {
            ppiVar3 = &piStack_38c;
            for (iVar2 = 0xda; iVar2 != 0; iVar2 = iVar2 + -1) {
              *ppiVar3 = (int *)0x0;
              ppiVar3 = ppiVar3 + 1;
            }
            iVar2 = FUN_005e8be0(*(undefined4 *)(param_2 + 0x560),1,&piStack_38c);
            if (iVar2 < 0) break;
            iVar2 = FUN_005e8050();
            if (piStack_38c == (int *)0x4) {
              *(undefined4 *)(param_2 + 0x128 + iStack_388 * 4) = uStack_384;
            }
            else if (piStack_38c == (int *)&DAT_00000005) {
              *(undefined4 *)(param_2 + 0x328 + iStack_388 * 4) = uStack_384;
            }
            else if (piStack_38c == (int *)0x7) {
              *(undefined4 *)(param_2 + 0x528) = uStack_384;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar4);
        }
        piVar1 = *(int **)(param_2 + 0x560);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        *(undefined4 *)(param_2 + 0x560) = 0;
      }
    }
  }
  return iVar2;
}


