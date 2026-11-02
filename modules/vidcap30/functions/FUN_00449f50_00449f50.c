/* Module: vidcap30.exe
   Function: FUN_00449f50
   Address: 00449f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00449f50(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = DAT_005bb838;
  if (param_2 == 0) {
    param_2 = FUN_004487a0(*(undefined4 *)(param_1 + 0x88),&param_1);
  }
  else {
    param_2 = FUN_004487f0(*(undefined4 *)(param_1 + 0x88),&param_1);
  }
  if (param_1 != 0) {
    iVar6 = 0;
    if (0 < param_2) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 8) + iVar6 * 4);
        if (iVar1 != 0) {
          uVar5 = *(undefined4 *)(iVar1 + 0x20c);
          uVar3 = FUN_0044cae0(uVar5);
          switch(uVar3) {
          case 1:
          case 2:
            piVar4 = (int *)FUN_0042e4f0(uVar2);
            if (piVar4 != (int *)0x0) {
              iVar1 = *piVar4;
              iVar7 = 0;
              if (0 < iVar1) {
                do {
                  FUN_004435b0(*(undefined4 *)(piVar4[2] + iVar7 * 4));
                  iVar7 = iVar7 + 1;
                } while (iVar7 < iVar1);
              }
            }
            break;
          case 3:
            uVar3 = 1;
            uVar5 = FUN_0044c6a0(uVar5);
            FUN_0045f330(DAT_005bb838,uVar5,uVar3);
            break;
          case 4:
            uVar5 = FUN_0044c6c0(uVar5);
            FUN_004435b0(uVar5);
            break;
          case 5:
            uVar5 = FUN_0044c6e0(uVar5);
            FUN_00444320(uVar5);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_2);
    }
    FUN_00417990(param_1);
  }
  return;
}


