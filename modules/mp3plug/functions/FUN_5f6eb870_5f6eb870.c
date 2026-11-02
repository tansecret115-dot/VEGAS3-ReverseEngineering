/* Module: mp3plug.dll
   Function: FUN_5f6eb870
   Address: 5f6eb870
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_5f6eb870(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = param_2[1];
  if ((((iVar6 == 0) || (iVar6 == 1)) || (iVar6 == 3)) || ((iVar6 == 4 || (iVar6 == 6)))) {
    unaff_EBX = 0;
  }
  else if (iVar6 == 2) {
    unaff_EBX = 1;
  }
  else if (iVar6 == 5) {
    unaff_EBX = 2;
  }
  if (*param_2 == 0) {
    iVar6 = 0;
  }
  else if (param_2[0x8b] == 0) {
    if (param_2[0x58] == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = 3;
    }
  }
  else {
    iVar6 = 4;
  }
  iVar5 = 0;
  iVar2 = iVar6 * 0x30 + unaff_EBX * 0x10;
  iVar4 = 0;
  iVar3 = 0;
  do {
    if (0 < *(int *)(&DAT_5f741598 + iVar3 * 4 + iVar2)) {
      iVar8 = 0;
      do {
        if (param_1 <= iVar5) break;
        iVar1 = iVar6 * 0x10 + iVar3 * 4;
        iVar7 = *(int *)(iVar1 + 0x5f7417e4);
        if (param_2[iVar5 + 3] <= iVar7) {
          iVar7 = param_2[iVar5 + 3];
        }
        param_2[iVar5 + 3] = iVar7;
        iVar7 = iVar7 - *(int *)(iVar1 + 0x5f7417e4);
        if (iVar7 < iVar4) {
          iVar7 = iVar4;
        }
        iVar4 = iVar7;
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar8 < *(int *)(&DAT_5f741598 + iVar3 * 4 + iVar2));
    }
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return iVar4;
    }
  } while( true );
}


