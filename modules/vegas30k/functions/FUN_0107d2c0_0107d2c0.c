/* Module: vegas30k.dll
   Function: FUN_0107d2c0
   Address: 0107d2c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107d2c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    do {
      sVar4 = (short)*(char *)(iVar6 + param_1);
      if ((*(int *)(param_5 + iVar5 * 8) == 0) && (*(int *)(param_5 + 4 + iVar5 * 8) == 0x3ff00000))
      {
        sVar4 = sVar4 + *(char *)(param_2 + 2);
      }
      else {
        iVar2 = ftol();
        if (iVar2 < -0x80) {
          sVar4 = sVar4 + -0x80;
        }
        else if (iVar2 < 0x80) {
          cVar1 = ftol();
          sVar4 = sVar4 + cVar1;
        }
        else {
          sVar4 = sVar4 + 0x7f;
        }
      }
      if (sVar4 < -0x80) {
        uVar3 = 0x80;
      }
      else {
        uVar3 = 0x7f;
        if (sVar4 < 0x80) {
          uVar3 = (undefined1)sVar4;
        }
      }
      iVar5 = iVar5 + 1;
      *(undefined1 *)(iVar6 + param_1) = uVar3;
      if (param_4 == iVar5) {
        iVar5 = 0;
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 + 3;
    } while (iVar6 < param_3);
  }
  return;
}


