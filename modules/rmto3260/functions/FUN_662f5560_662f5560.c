/* Module: rmto3260.dll
   Function: FUN_662f5560
   Address: 662f5560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662f5560(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_66311d58 != (int *)0x0) {
    if (DAT_66311d54 != 0) {
      (**(code **)(*DAT_66311d58 + 0x14))(DAT_66311d58,DAT_66311d54);
      DAT_66311d54 = 0;
    }
    iVar2 = (**(code **)(*DAT_66311d58 + 8))(DAT_66311d58);
    if ((iVar2 == 0) && (DAT_66311d50 != (undefined4 *)0x0)) {
      FUN_662f2e40(DAT_66311d50);
    }
    puVar1 = DAT_66311d50;
    DAT_66311d58 = (int *)0x0;
    if (DAT_66311d50 != (undefined4 *)0x0) {
      FUN_662f2c80(DAT_66311d50);
      operator_delete(puVar1);
      DAT_66311d50 = (undefined4 *)0x0;
    }
  }
  return;
}


