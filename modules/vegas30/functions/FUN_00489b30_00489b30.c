/* Module: vegas30.exe
   Function: FUN_00489b30
   Address: 00489b30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00489b30(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)(param_2 + 0x130);
  switch(*(undefined4 *)(param_2 + 0x94)) {
  case 1:
    FUN_004e9f70(uVar1,(param_1 == 0x303) + '\x15',0);
    uVar5 = *(uint *)(param_3 + 8);
    if (uVar5 + *(int *)(param_3 + 0x10) <= uVar5) {
      return;
    }
    do {
      piVar2 = *(int **)(param_2 + 0x134);
      if (piVar2 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar2;
      }
      if (((int)uVar5 < 0) || (iVar3 + -1 < (int)uVar5)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(piVar2[2] + uVar5 * 4);
      }
      if (iVar3 != 0) {
        FUN_004ea250(uVar1,*(undefined4 *)(iVar3 + 8),1,0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(param_3 + 8) + *(int *)(param_3 + 0x10)));
    return;
  default:
    goto switchD_00489b4e_caseD_2;
  case 3:
    cVar4 = (-(param_1 != 0x303) & 6U) + 5;
    break;
  case 4:
    cVar4 = (-(param_1 != 0x303) & 6U) + 6;
    break;
  case 5:
    FUN_004e9f70(uVar1,(-(param_1 != 0x303) & 3U) + 0x3f,0);
    FUN_004ead60(uVar1,0,5);
    return;
  case 6:
    FUN_004e9f70(uVar1,(-(param_1 != 0x303) & 3U) + 0x45,0);
    FUN_004ead60(uVar1,0,7);
    return;
  case 7:
    FUN_004e9f70(uVar1,(-(uint)(param_1 != 0x303) & 3) + 0x24d,0);
    FUN_004ead60(uVar1,0,9);
    return;
  }
  FUN_004e9f70(uVar1,cVar4,0);
  FUN_004ead60(uVar1,0,3);
switchD_00489b4e_caseD_2:
  return;
}


