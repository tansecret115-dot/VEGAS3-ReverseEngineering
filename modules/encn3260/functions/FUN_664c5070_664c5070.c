/* Module: encn3260.dll
   Function: FUN_664c5070
   Address: 664c5070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_664c5070(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_664f2974 != (undefined4 *)0x0) {
    if (DAT_664f2990 != (int *)0x0) {
      (**(code **)(*DAT_664f2990 + 4))();
    }
    FUN_664c3fe0(DAT_664f2974,param_1);
    if (DAT_664f2984 != (int *)0x0) {
      iVar2 = (**(code **)(*DAT_664f2984 + 0x18))(param_1,0);
      if (iVar2 != 0) {
        (**(code **)(*DAT_664f2984 + 0xc))(iVar2);
        param_1[1] = 0;
      }
    }
    puVar1 = DAT_664f2974;
    if (DAT_664f2974[3] == 0) {
      if (DAT_664f2974 != (undefined4 *)0x0) {
        FUN_664c3d50(DAT_664f2974);
        operator_delete(puVar1);
      }
      DAT_664f2974 = (undefined4 *)0x0;
    }
    if ((DAT_664f2984 != (int *)0x0) && (DAT_664f2984[4] == 0)) {
      if (DAT_664f2984 != (int *)0x0) {
        (**(code **)*DAT_664f2984)(1);
      }
      DAT_664f2984 = (int *)0x0;
    }
    if (DAT_664f2990 != (int *)0x0) {
      (**(code **)(*DAT_664f2990 + 8))();
    }
  }
  return;
}


