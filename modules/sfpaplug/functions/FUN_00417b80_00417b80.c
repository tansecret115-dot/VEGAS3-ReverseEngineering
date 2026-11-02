/* Module: sfpaplug.dll
   Function: FUN_00417b80
   Address: 00417b80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00417b80(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_0045c61c == 0) {
    uVar1 = FUN_004179e0();
    DAT_0045c374 = (uint)uVar1;
    DAT_0045c61c = 1;
  }
  if (param_1 == 0) {
    param_1 = 0xffffffff;
  }
  return DAT_0045c374 & param_1;
}


