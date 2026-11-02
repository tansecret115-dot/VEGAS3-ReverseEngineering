/* Module: vidcap30.exe
   Function: FUN_0048ab40
   Address: 0048ab40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048ab40(undefined4 param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  uVar2 = param_3;
  piVar6 = param_2;
  if (param_3 < 0xc) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 0;
  }
  iVar3 = *param_2;
  iVar1 = param_2[2];
  if (iVar3 == 0x46464952) {
    if ((((iVar1 != 0x58584653) && (iVar1 != 0x44494341)) && (iVar1 != 0x53534653)) &&
       (iVar1 != 0x4c504653)) {
      if (param_2[1] != 0) {
        return 0;
      }
      return 1;
    }
  }
  else if (iVar3 != 0x4b504653) {
    param_2._3_1_ = (undefined1)((uint)iVar3 >> 0x18);
    param_2._2_1_ = (undefined1)((uint)iVar3 >> 0x10);
    param_3._0_2_ = CONCAT11(param_2._2_1_,param_2._3_1_);
    if (CONCAT13((char)iVar3,(int3)CONCAT22((short)((uint)iVar3 >> 8),(undefined2)param_3)) !=
        0x4d546864) {
      if (uVar2 < 0x29) {
        return 0;
      }
      iVar3 = 4;
      bVar7 = true;
      piVar4 = &DAT_00594bc8;
      piVar5 = piVar6;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar7);
      if (!bVar7) {
        return 0;
      }
      piVar6 = piVar6 + 6;
      iVar3 = 4;
      bVar7 = true;
      piVar4 = &DAT_00594bd8;
      piVar5 = piVar6;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar7 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar7);
      if (!bVar7) {
        iVar3 = 4;
        bVar7 = true;
        piVar4 = &DAT_00594be8;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *piVar4 == *piVar6;
          piVar4 = piVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (bVar7);
        if (!bVar7) {
          return 0;
        }
      }
    }
  }
  return 1;
}


