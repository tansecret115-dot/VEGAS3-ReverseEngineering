/* Module: rmbe3260.dll
   Function: FUN_66028ec0
   Address: 66028ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66028ec0(int param_1,int *param_2,int param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  iVar3 = param_3;
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  if (param_5 < 9) {
    bVar2 = false;
    if (param_3 == 5) {
      bVar2 = true;
    }
    else if ((param_3 == 0) || (param_3 == 4)) {
      bVar2 = true;
      param_3 = 9;
      piVar7 = (int *)(param_1 + 0x30);
      do {
        iVar6 = *piVar7;
        if (0 < iVar6) {
          piVar5 = (int *)piVar7[-1];
          do {
            if ((*(int *)(*piVar5 + 4) != iVar3) && (*(int *)(*piVar5 + 4) != 5)) {
              bVar2 = false;
            }
            piVar5 = piVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        piVar7 = piVar7 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (bVar2) {
      *(int *)(param_1 + 0x15c) = iVar3;
      puVar4 = operator_new(0x14);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x15c);
        *puVar4 = param_2;
        puVar4[1] = uVar1;
        puVar4[3] = param_5;
        puVar4[2] = param_4 & 0xffff;
        puVar4[4] = 0xffffff;
      }
      if (puVar4 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
      (**(code **)(*param_2 + 4))(param_2);
      FUN_6605cf30((void *)(param_5 * 0x10 + 0x2c + param_1),
                   *(int *)(param_5 * 0x10 + 0x30 + param_1),puVar4);
      return 0;
    }
  }
  return 0x80070057;
}


