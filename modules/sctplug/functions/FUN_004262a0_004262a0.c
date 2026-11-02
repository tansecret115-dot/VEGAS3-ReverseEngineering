/* Module: sctplug.dll
   Function: FUN_004262a0
   Address: 004262a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004262a0(undefined4 *param_1,undefined4 *param_2,int param_3,float param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_4 == (float)_DAT_00437eb8) {
    if (param_1 == param_2) {
      if (0 < param_3) {
        puVar1 = (undefined1 *)((int)param_2 + 2);
        iVar4 = param_3;
        do {
          param_3 = CONCAT31(CONCAT21(CONCAT11(puVar1[-2],puVar1[-1]),*puVar1),puVar1[1]);
          *param_1 = param_3;
          param_1 = param_1 + 1;
          iVar4 = iVar4 + -1;
          puVar1 = puVar1 + 4;
        } while (iVar4 != 0);
        return;
      }
    }
    else if (0 < param_3) {
      puVar1 = (undefined1 *)((int)param_2 + 2);
      puVar3 = param_1;
      do {
        puVar1[((int)param_1 - (int)param_2) + 1] = puVar1[-2];
        puVar1[(int)param_1 - (int)param_2] = puVar1[-1];
        *(undefined1 *)((int)puVar3 + 1) = *puVar1;
        *(undefined1 *)puVar3 = puVar1[1];
        puVar1 = puVar1 + 4;
        param_3 = param_3 + -1;
        puVar3 = puVar3 + 1;
      } while (param_3 != 0);
      return;
    }
  }
  else if (0 < param_3) {
    puVar1 = (undefined1 *)((int)param_2 + 2);
    iVar4 = param_3;
    do {
      param_3 = CONCAT31(CONCAT21(CONCAT11(puVar1[-2],puVar1[-1]),*puVar1),puVar1[1]);
      if ((float)_DAT_00437ee8 <= (float)param_3 * param_4) {
        if ((float)param_3 * param_4 <= (float)_DAT_00437ee0) {
          uVar2 = ftol();
        }
        else {
          uVar2 = 0x7fffffff;
        }
      }
      else {
        uVar2 = 0x80000000;
      }
      *param_1 = uVar2;
      puVar1 = puVar1 + 4;
      param_1 = param_1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


