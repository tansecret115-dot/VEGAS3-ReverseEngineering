/* Module: 50comupd.exe
   Function: FUN_01006c75
   Address: 01006c75
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01006c75(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)((int)param_1 + 0xb2) & 0xf;
  if ((*(byte *)((int)param_1 + 0xb2) & 0xf) == 0) {
LAB_01006ccc:
    uVar3 = 1;
  }
  else {
    if (bVar1 == 1) {
      iVar2 = FUN_010059d6();
LAB_01006cb9:
      if (iVar2 == 0) goto LAB_01006ccc;
      uVar3 = 7;
    }
    else {
      if (bVar1 == 2) {
        iVar2 = FUN_010059d6();
        goto LAB_01006cb9;
      }
      if (bVar1 == 3) {
        iVar2 = FUN_01006f55((int *)param_1[0xd]);
        goto LAB_01006cb9;
      }
      if (bVar1 == 0xf) goto LAB_01006ccc;
      uVar3 = 6;
    }
    FUN_01006dcb((undefined4 *)*param_1,uVar3,0);
    uVar3 = 0;
  }
  return uVar3;
}


