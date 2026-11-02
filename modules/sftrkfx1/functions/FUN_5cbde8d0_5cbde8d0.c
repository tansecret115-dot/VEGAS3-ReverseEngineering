/* Module: sftrkfx1.dll
   Function: FUN_5cbde8d0
   Address: 5cbde8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined * FUN_5cbde8d0(ushort *param_1)

{
  char cVar1;
  undefined3 extraout_var;
  
  cVar1 = FUN_5cbe55a0(param_1);
  switch(CONCAT31(extraout_var,cVar1)) {
  case 0x10:
    return &LAB_5cbde200;
  case 0x11:
    return FUN_5cbde3a0;
  case 0x12:
    return &LAB_5cbde470;
  case 0x13:
    return FUN_5cbde650;
  default:
    return (undefined *)0x0;
  case 0x20:
    return &LAB_5cbde720;
  case 0x21:
    return &LAB_5cbde7d0;
  case 0x30:
    return FUN_5cbde570;
  case 0x31:
    return &LAB_5cbde2d0;
  }
}


