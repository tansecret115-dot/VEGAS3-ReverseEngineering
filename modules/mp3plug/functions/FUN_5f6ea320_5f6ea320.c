/* Module: mp3plug.dll
   Function: FUN_5f6ea320
   Address: 5f6ea320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6ea320(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_2 + 4);
  if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 3)) || ((iVar2 == 4 || (iVar2 == 6)))) {
    if (0x15 < param_1) {
      param_1 = 0x15;
    }
    iVar2 = 0;
    if (0 < param_1) {
      do {
        if (*(int *)(param_2 + 0x160) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (&DAT_5f741470)[iVar2];
        }
        *(int *)(param_2 + 0x168 + iVar2 * 4) =
             iVar5 + *(int *)(param_2 + 0xc + iVar2 * 4) <<
             ((char)*(undefined4 *)(param_2 + 8) + 1U & 0x1f);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1);
    }
    for (; iVar2 < 0x16; iVar2 = iVar2 + 1) {
      *(undefined4 *)(param_2 + 0x168 + iVar2 * 4) = 0;
    }
  }
  else if (iVar2 == 2) {
    if (0x24 < param_1) {
      param_1 = 0x24;
    }
    iVar2 = 0;
    if (0 < param_1) {
      do {
        *(int *)(param_2 + 0x168 + iVar2 * 4) =
             (*(int *)(param_2 + 0xc + iVar2 * 4) <<
             ((char)*(undefined4 *)(param_2 + 8) + 1U & 0x1f)) +
             *(int *)(param_2 + 0x144 + (iVar2 % 3) * 4) * 8;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1);
    }
    for (; iVar2 < 0x27; iVar2 = iVar2 + 1) {
      *(undefined4 *)(param_2 + 0x168 + iVar2 * 4) = 0;
    }
  }
  else if (iVar2 == 5) {
    iVar2 = 0;
    while( true ) {
      iVar5 = *(int *)(param_2 + 0x2f0);
      iVar6 = param_1;
      if (iVar5 < param_1) {
        iVar6 = iVar5;
      }
      if (iVar6 <= iVar2) break;
      *(int *)(param_2 + 0x168 + iVar2 * 4) =
           *(int *)(param_2 + 0xc + iVar2 * 4) << ((char)*(undefined4 *)(param_2 + 8) + 1U & 0x1f);
      iVar2 = iVar2 + 1;
    }
    if (iVar5 < param_1) {
      iVar2 = param_2 + iVar5 * 4;
      iVar5 = param_2 + param_1 * 4;
      iVar6 = 0;
      iVar3 = (iVar5 - iVar2 & 0xfffffff8U) + iVar2;
      for (; iVar2 < iVar3; iVar2 = iVar2 + 8) {
        iVar1 = iVar6 * 4;
        iVar4 = (iVar6 + 1) % 3 + 1;
        iVar6 = iVar4 % 3;
        *(int *)(iVar2 + 0x168) =
             (*(int *)(iVar2 + 0xc) << ((char)*(undefined4 *)(param_2 + 8) + 1U & 0x1f)) +
             *(int *)(param_2 + 0x144 + iVar1) * 8;
        *(int *)(iVar2 + 0x16c) =
             (*(int *)(iVar2 + 0x10) << ((char)*(undefined4 *)(param_2 + 8) + 1U & 0x1f)) +
             *(int *)(param_2 + 0x140 + iVar4 * 4) * 8;
      }
      for (; iVar2 < iVar5; iVar2 = iVar2 + 4) {
        iVar3 = iVar6 * 4;
        iVar6 = (iVar6 + 1) % 3;
        *(int *)(iVar2 + 0x168) =
             (*(int *)(iVar2 + 0xc) << ((char)*(undefined4 *)(param_2 + 8) + 1U & 0x1f)) +
             *(int *)(param_2 + 0x144 + iVar3) * 8;
      }
    }
  }
  return;
}


