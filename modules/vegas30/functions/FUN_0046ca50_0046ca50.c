/* Module: vegas30.exe
   Function: FUN_0046ca50
   Address: 0046ca50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0046ca50(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar1 = *(undefined4 *)(param_1 + 0xbc8);
  iVar2 = *param_4;
  if ((iVar2 != 0) && (param_2 != 0 || param_3 != 0)) {
    FUN_005b83b0(uVar1,1);
    _SfList_Sort_12(param_4,0,&LAB_0046cae0);
    iVar5 = -1;
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = *(int *)(param_4[2] + iVar7 * 4);
        iVar4 = *(int *)(iVar3 + 8);
        if (iVar4 != iVar5) {
          uVar6 = FUN_005c9450(uVar1,iVar3);
          FUN_005c9930(uVar1,*(undefined4 *)(iVar3 + 8),uVar6,param_2,param_3);
          iVar5 = iVar4;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
    FUN_005b84d0(uVar1,1);
  }
  return;
}


