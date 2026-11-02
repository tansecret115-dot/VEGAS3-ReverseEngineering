/* Module: vegas30.exe
   Function: FUN_005766d0
   Address: 005766d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005766d0(void)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  undefined4 *puVar3;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
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
        *puStack_c = uStack_25c;
        puStack_c[1] = uStack_258;
        puStack_c[2] = uStack_254;
        puStack_c[3] = uStack_250;
      }
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return iVar2;
}


