/* Module: vegas30.exe
   Function: FUN_00499f20
   Address: 00499f20
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_00499f20(int param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (param_2[0xe] == 0) {
    return false;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  piVar3 = (int *)FUN_005d9be0(uVar1,0,param_2);
  piVar2 = param_3;
  iVar9 = 0;
  if (((piVar3 != (int *)0x0) && (iVar9 = *(int *)*piVar3, 1 < iVar9)) && (param_1 = 0, 0 < iVar9))
  {
    do {
      iVar6 = *(int *)(*piVar3 + 8);
      iVar4 = *(int *)(*piVar3 + 4) * param_1;
      piVar5 = (int *)FUN_005d9aa0(uVar1,0,*(undefined4 *)(iVar4 + iVar6),
                                   *(undefined4 *)(iVar4 + 4 + iVar6));
      if (((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 4) & 8) == 0)) && (piVar5 != param_2)) {
        iVar6 = *piVar2;
        if (iVar6 == 0) {
          _SfList_CreateExZ_32(piVar2,4,0xffffffff,iVar9,0,0,0,0);
          iVar6 = *piVar2;
          if (iVar6 == 0) break;
        }
        iVar6 = _SfList_FindSpecificItemRange_16(iVar6,0,0xffffffff,piVar5);
        if (iVar6 < 0) {
          iVar6 = piVar5[0x86];
          *(int *)(iVar6 + 0x80) = piVar5[6];
          *(int *)(iVar6 + 0x84) = piVar5[7];
          *(int *)(iVar6 + 0x90) = piVar5[8];
          *(int *)(iVar6 + 0x94) = piVar5[9];
          *(int *)(iVar6 + 0x98) = piVar5[10];
          *(int *)(iVar6 + 0x9c) = piVar5[0xb];
          *(int *)(iVar6 + 0x70) = piVar5[0x1e];
          *(int *)(iVar6 + 0x74) = piVar5[0x1f];
          *(int *)(iVar6 + 0x78) = piVar5[0x20];
          *(int *)(iVar6 + 0x7c) = piVar5[0x21];
          *(int *)(iVar6 + 0xa4) = piVar5[0xf];
          iVar4 = piVar5[0x14];
          if (iVar4 == 0) {
            uVar8 = 0xffffffff;
            uVar7 = 0xffffffff;
          }
          else {
            uVar8 = *(undefined4 *)(iVar4 + 8);
            uVar7 = *(undefined4 *)(iVar4 + 0xc);
          }
          *(undefined4 *)(iVar6 + 0x88) = uVar8;
          *(undefined4 *)(iVar6 + 0x8c) = uVar7;
          if (param_4 != 0) {
            piVar5[4] = piVar5[4] | 0x1800000;
          }
          param_3 = piVar5;
          _SfList_InsertList_16(*piVar2,0xffffffff,&param_3,1);
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar9);
  }
  return 1 < iVar9;
}


