/* Module: 50comupd.exe
   Function: FUN_01006a37
   Address: 01006a37
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006a37(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)((int)param_1 + 0xb2) & 0xf;
  if ((*(byte *)((int)param_1 + 0xb2) & 0xf) != 0) {
    if (bVar1 == 1) {
      iVar2 = FUN_010059d6();
    }
    else if (bVar1 == 2) {
      iVar2 = FUN_010059d6();
    }
    else {
      if (bVar1 != 3) {
        if (bVar1 == 0xf) {
          return 1;
        }
        uVar3 = 6;
        goto LAB_01006a83;
      }
      iVar2 = FUN_01006f70((int *)param_1[0xd]);
    }
    if (iVar2 != 0) {
      uVar3 = 7;
LAB_01006a83:
      FUN_01006dcb((undefined4 *)*param_1,uVar3,0);
      return 0;
    }
  }
  (*(code *)param_1[1])(param_1[0xf]);
  (*(code *)param_1[1])(param_1[0x10]);
  return 1;
}


