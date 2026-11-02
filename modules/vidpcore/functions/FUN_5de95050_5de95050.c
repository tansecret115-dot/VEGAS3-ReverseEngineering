/* Module: vidpcore.dll
   Function: FUN_5de95050
   Address: 5de95050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5de95050(int param_1,undefined4 param_2,float param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  param_2 = (undefined1 *)(_DAT_5df2daf0 - param_3 * _DAT_5df2daf4);
  iVar2 = ftol();
  iVar2 = iVar2 + 1;
  iVar3 = ftol();
  iVar4 = 0;
  param_2 = (undefined1 *)0x0;
  if (param_4 == 0) {
    if (0 < iVar2) {
      do {
        *(char *)(iVar4 + param_1) = (char)iVar4;
        iVar4 = iVar4 + 1;
        param_2 = (undefined1 *)iVar4;
      } while (iVar4 < iVar2);
    }
  }
  else {
    do {
      iVar4 = (int)param_2;
      uVar1 = ftol();
      *(undefined1 *)(iVar4 + param_1) = uVar1;
      param_2 = (undefined1 *)(iVar4 + 1);
      iVar4 = (int)param_2;
    } while ((int)param_2 < 0x10);
    for (; param_2 = (undefined1 *)iVar4, iVar4 < iVar2; iVar4 = iVar4 + 1) {
      uVar1 = ftol();
      *(undefined1 *)(iVar4 + param_1) = uVar1;
    }
  }
  for (; (int)param_2 < iVar3 + 1; param_2 = (undefined1 *)((int)param_2 + 1)) {
    *(char *)((int)param_2 + param_1) = (char)param_2;
  }
  if (param_5 == 0) {
    for (; (int)param_2 < 0x100; param_2 = (undefined1 *)((int)param_2 + 1)) {
      *(char *)((int)param_2 + param_1) = (char)param_2;
    }
  }
  else {
    if ((int)param_2 < 0xeb) {
      do {
        iVar2 = (int)param_2;
        param_2 = (undefined1 *)((int)param_2 - (iVar3 + 1));
        uVar1 = ftol();
        *(undefined1 *)(iVar2 + param_1) = uVar1;
        param_2 = (undefined1 *)(iVar2 + 1);
      } while ((int)param_2 < 0xeb);
    }
    if ((int)param_2 < 0x100) {
      puVar5 = (undefined1 *)((int)param_2 + param_1);
      do {
        iVar2 = (int)param_2;
        param_2 = puVar5 + (-0xeb - param_1);
        uVar1 = ftol();
        *puVar5 = uVar1;
        param_2 = (undefined1 *)(iVar2 + 1);
        puVar5 = puVar5 + 1;
      } while ((int)param_2 < 0x100);
      return;
    }
  }
  return;
}


