/* Module: mcplug.dll
   Function: FUN_004058a0
   Address: 004058a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004058a0(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  this = DAT_00487a70;
  if (param_2 == 2) {
    if (DAT_00487a78 == 0) {
      DAT_00487a78 = 1;
      if ((DAT_00487a74 == (void *)0x0) ||
         ((DAT_00487a7c == 0 &&
          (iVar1 = FUN_0046a5f0(DAT_00487a74,&local_4,(int *)&param_2,1), iVar1 < 0)))) {
        iVar1 = 0;
        do {
          puVar2 = &DAT_00487acc;
          if (iVar1 == 0) {
            puVar2 = &DAT_00487a94;
          }
          iVar1 = iVar1 + 1;
          puVar2[2] = 0;
          puVar2[0xc] = 0;
          puVar2[3] = 0xffffff3c;
          puVar2[6] = 0;
          puVar2[0xd] = 0;
          puVar2[7] = 0xffffff3c;
          puVar2[8] = 0;
          puVar2[9] = 0xfffffed8;
        } while (iVar1 < 2);
        DAT_00487b04 = 0;
      }
      else {
        if (this == (void *)0x0) {
LAB_0040597c:
          param_2 = 0;
          iVar1 = -0x7fffbffb;
        }
        else {
          FUN_0046a350(this,(HKEY)0x2,(HKEY)0x0);
          iVar1 = FUN_0046a5f0(this,&local_4,(int *)&param_2,1);
          if ((param_2 != 4) && (param_2 != 0x10)) goto LAB_0040597c;
        }
        if ((DAT_00487a90 == 0) && (iVar1 != 0x4e12e)) {
          if (iVar1 == 0x4e130) goto LAB_00405a07;
          if (iVar1 == 0x4e137) goto LAB_004059a8;
          param_2 = 0;
        }
        else {
LAB_004059a8:
          if (-1 < iVar1) {
            iVar4 = 0;
            iVar1 = 2 - (uint)(param_2 < 0x10);
            if (0 < iVar1) {
              do {
                piVar3 = &DAT_00487acc;
                if (iVar4 == 0) {
                  piVar3 = &DAT_00487a94;
                }
                piVar3[8] = 0;
                piVar3[9] = -0x127;
                if (*piVar3 != 0) {
                  piVar3[0xc] = -1;
                  piVar3[2] = 1;
                  piVar3[3] = 200;
                }
                if (piVar3[4] != 0) {
                  piVar3[0xd] = -1;
                  piVar3[6] = 1;
                  piVar3[7] = 200;
                }
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar1);
            }
          }
LAB_00405a07:
          DAT_00487b04 = param_2;
          if (0xf < param_2) goto LAB_00405aa2;
        }
        iVar4 = 0;
        iVar1 = 2 - (uint)(param_2 != 0);
        DAT_00487b04 = param_2;
        if (0 < iVar1) {
          do {
            piVar3 = &DAT_00487a94;
            if (iVar4 == 0) {
              piVar3 = &DAT_00487acc;
            }
            piVar3[2] = 0;
            piVar3[0xc] = 0;
            if ((*piVar3 == 0) || (piVar3[8] == 0)) {
              piVar3[3] = -0xc6;
            }
            else {
              piVar3[3] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
            }
            piVar3[6] = 0;
            piVar3[0xd] = 0;
            if ((piVar3[4] == 0) || (piVar3[8] == 0)) {
              piVar3[7] = -0xc6;
            }
            else {
              piVar3[7] = (-(uint)(DAT_00487a88 != 0) & 3) - 0xc5;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar1);
        }
      }
    }
  }
  else {
    FUN_00404d60(0);
  }
LAB_00405aa2:
  if (*(int *)(param_1 + 0x3c) == 1) {
    puVar2 = &DAT_00487a94;
  }
  else {
    if (*(int *)(param_1 + 0x3c) != 2) goto LAB_00405add;
    puVar2 = &DAT_00487acc;
  }
  if (puVar2 != (undefined4 *)0x0) {
    *param_3 = puVar2[4];
    *param_4 = puVar2[5];
    return 0;
  }
LAB_00405add:
  *param_3 = 0;
  *param_4 = 0xffffff9c;
  return 0;
}


