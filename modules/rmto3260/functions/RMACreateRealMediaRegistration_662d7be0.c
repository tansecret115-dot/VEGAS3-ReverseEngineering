/* Module: rmto3260.dll
   Function: RMACreateRealMediaRegistration
   Address: 662d7be0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 RMACreateRealMediaRegistration(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
                    /* 0x17be0  7  RMACreateRealMediaRegistration */
  puVar1 = operator_new(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)FUN_662d7d80(puVar1);
  }
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  uVar2 = (**(code **)*puVar1)(puVar1,&DAT_66306aa8,param_1);
  return uVar2;
}


