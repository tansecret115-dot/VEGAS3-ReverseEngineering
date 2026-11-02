/* Module: vegas30.exe
   Function: FUN_00578620
   Address: 00578620
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00578620(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 *puVar3;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = DAT_0064b510;
  iVar2 = (**(code **)*DAT_0064b510)();
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,uStack_8);
    if (-1 < iVar2) {
      puVar3 = (undefined4 *)&stack0xfffffd7c;
      for (iVar2 = 0x9c; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      iVar2 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,uStack_8,&stack0xfffffd7c);
      if (-1 < iVar2) {
        *puStack_c = uStack_26c;
        puStack_c[1] = uStack_268;
        puStack_c[2] = uStack_264;
        puStack_c[3] = uStack_260;
      }
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return iVar2;
}


