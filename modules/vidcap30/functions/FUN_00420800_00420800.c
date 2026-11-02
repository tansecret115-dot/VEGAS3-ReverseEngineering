/* Module: vidcap30.exe
   Function: FUN_00420800
   Address: 00420800
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00420800(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *unaff_EBP;
  int *unaff_ESI;
  int *unaff_EDI;
  int *in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined1 *puStack_40;
  int *piStack_34;
  undefined4 uStack_30;
  int **ppiStack_2c;
  int **ppiStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *local_10;
  int local_c;
  undefined4 local_8;
  undefined1 auStack_4 [4];
  
  *in_stack_0000001c = 0;
  piStack_1c = &local_c;
  local_c = 0;
  piStack_20 = in_stack_00000018;
  local_10 = (int *)0x0;
  local_8 = 0;
  piStack_24 = (int *)0x420828;
  iVar2 = (**(code **)(*in_stack_00000018 + 0x28))();
  if (-1 < iVar2) {
    ppiStack_28 = (int **)0x42083c;
    piStack_24 = unaff_ESI;
    (**(code **)(*unaff_ESI + 0x14))();
    ppiStack_28 = &local_10;
    ppiStack_2c = &piStack_1c;
    uStack_30 = 1;
    piStack_34 = unaff_EDI;
    iVar2 = (**(code **)(*unaff_EDI + 0xc))();
    uVar1 = local_8;
    while (iVar2 == 0) {
      puStack_40 = auStack_4;
      (*(code *)(*ppiStack_2c)[9])(ppiStack_2c);
      if (unaff_EDI == (int *)0x0) {
        unaff_EDI = &local_c;
      }
      (**(code **)(*piStack_34 + 0x18))(piStack_34,&ppiStack_2c);
      if (piStack_34 == (int *)0x0) {
        uVar3 = 1;
      }
      else {
        (**(code **)(*piStack_34 + 8))(piStack_34);
        piStack_34 = (int *)0x0;
        uVar3 = 2;
      }
      if ((((int *)*unaff_EDI == unaff_ESI) && (((uint)piStack_24 & uVar3) != 0)) &&
         (iVar2 = FUN_00420610(unaff_EBP,piStack_20,piStack_1c,uVar1), iVar2 == 0)) {
        *local_10 = *local_10 + 1;
      }
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      puStack_40 = (undefined1 *)0x0;
      iVar2 = (**(code **)(*unaff_EBP + 0xc))(unaff_EBP,1,&puStack_40,&piStack_34);
    }
    (*(code *)(*ppiStack_28)[2])();
  }
  return -(uint)(iVar2 != 1) & 0x80004002;
}


