/* Module: vegas30k.dll
   Function: FUN_0118b190
   Address: 0118b190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0118b190(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  undefined4 *puStack_2c;
  int ***pppiStack_28;
  int **ppiStack_24;
  int *piStack_20;
  undefined4 *puStack_1c;
  int **ppiStack_18;
  undefined4 local_c;
  undefined4 local_8;
  int *local_4;
  
  ppiStack_18 = &local_4;
  puStack_1c = (undefined4 *)param_1[0x2c];
  local_c = 0;
  local_4 = (int *)0x0;
  piStack_20 = (int *)0x118b1b2;
  FUN_011a31f0();
  if (local_4 != (int *)0x0) {
    puStack_1c = &local_c;
    ppiStack_18 = (int **)0x0;
    local_8 = 0;
    piStack_20 = (int *)0x1;
    ppiStack_24 = (int **)local_4;
    pppiStack_28 = (int ***)0x118b1cc;
    iVar1 = (**(code **)(*local_4 + 0xc))();
    while (iVar1 == 0) {
      pppiStack_28 = &ppiStack_18;
      puStack_2c = &DAT_011d9db0;
      (**(code **)*puStack_1c)(puStack_1c);
      if (ppiStack_24 != (int **)0x0) {
        iVar1 = (**(code **)((int)*ppiStack_24 + 0x14))(ppiStack_24);
        if (iVar1 == 0) {
          (*(code *)(*pppiStack_28)[2])(pppiStack_28);
          break;
        }
        (*(code *)(*pppiStack_28)[2])();
      }
      (*(code *)(*pppiStack_28)[2])(pppiStack_28);
      puStack_2c = (undefined4 *)0x0;
      iVar1 = (**(code **)((int)*ppiStack_24 + 0xc))(ppiStack_24,1,&puStack_2c,0);
    }
    puStack_2c = (undefined4 *)0x118b232;
    (**(code **)(*unaff_EDI + 8))();
  }
  ppiStack_18 = (int **)0x0;
  puStack_1c = (undefined4 *)local_c;
  ppiStack_24 = (int **)0x118b23e;
  piStack_20 = param_1;
  uVar2 = (**(code **)(*param_1 + 0x24))();
  if (ppiStack_18 != (int **)0x0) {
    ppiStack_24 = ppiStack_18;
    pppiStack_28 = (int ***)0x118b24e;
    (*(code *)(*ppiStack_18)[2])();
  }
  return uVar2;
}


