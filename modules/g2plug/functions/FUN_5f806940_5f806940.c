/* Module: g2plug.dll
   Function: FUN_5f806940
   Address: 5f806940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f806940(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  undefined1 **ppuVar2;
  int **ppiStack_ec;
  undefined4 **ppuVar3;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 *puStack_d0;
  int *piStack_cc;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_8;
  
  puStack_d0 = *(undefined4 **)(param_1 + 8);
  puStack_c8 = (undefined1 *)&stack0xffffff40;
  if (puStack_d0 != (undefined4 *)0x0) {
    piStack_cc = (int *)&DAT_5f869b80;
    iVar1 = (**(code **)*puStack_d0)();
    if (-1 < iVar1) {
      ppuVar2 = &puStack_c8;
      for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
        *ppuVar2 = (undefined1 *)0x0;
        ppuVar2 = ppuVar2 + 1;
      }
      if (iStack_8 == 0) {
        puStack_c8 = (undefined1 *)0x0;
        local_c0 = 100;
        uStack_b8 = 100;
        uStack_bc = 0;
        uStack_b4 = 0;
        uStack_b0 = 3;
        uStack_d8 = 1;
        piStack_dc = piStack_cc;
        (**(code **)(*piStack_cc + 0xc))();
        ppiStack_ec = (int **)0x5f806a3c;
        (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,0,&puStack_d0);
      }
      else {
        uStack_d8 = 2;
        piStack_dc = piStack_cc;
        (**(code **)(*piStack_cc + 0xc))();
        ppuVar3 = &puStack_d0;
        puStack_d0 = (undefined4 *)0x0;
        piStack_cc = (int *)0x0;
        puStack_c8 = (undefined1 *)0x32;
        local_c0 = 0x32;
        uStack_bc = 0;
        uStack_b8 = 2;
        (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,0);
        ppiStack_ec = &piStack_dc;
        piStack_cc = (int *)0x64;
        piStack_dc = (int *)0x32;
        uStack_d8 = 0;
        puStack_d0 = (undefined4 *)0x0;
        puStack_c8 = (undefined1 *)0x0;
        (*(code *)(*ppuVar3)[4])(ppuVar3,1);
      }
      if (ppiStack_ec != (int **)0x0) {
        (*(code *)(*ppiStack_ec)[2])(ppiStack_ec);
      }
    }
  }
  return;
}


