/* Module: oggplug.dll
   Function: FUN_004181d0
   Address: 004181d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_004181d0(ushort *param_1,ushort *param_2)

{
  char cVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar2;
  
  cVar1 = FUN_00424f30(param_2);
  uVar2 = CONCAT31(extraout_var,cVar1);
  cVar1 = FUN_00424f30(param_1);
  switch(CONCAT31(extraout_var_00,cVar1)) {
  case 0x10:
    switch(uVar2) {
    case 0x10:
      return &LAB_00416d00;
    case 0x11:
      return &LAB_00416d40;
    case 0x12:
      return &LAB_00416e00;
    case 0x13:
      return &LAB_00416e50;
    case 0x20:
      return &LAB_00416ea0;
    case 0x21:
      return &LAB_00416f10;
    case 0x30:
      return &LAB_00416d90;
    case 0x31:
      return &LAB_00416cc0;
    }
    break;
  case 0x11:
    switch(uVar2) {
    case 0x10:
      return &LAB_00416fd0;
    case 0x11:
      return &LAB_00417020;
    case 0x12:
      return &LAB_004170e0;
    case 0x13:
      return &LAB_00417130;
    case 0x20:
      return &LAB_00417180;
    case 0x21:
      return &LAB_00417200;
    case 0x30:
      return &LAB_00417070;
    case 0x31:
      return &LAB_00416f80;
    }
    break;
  case 0x12:
    switch(uVar2) {
    case 0x10:
      return &LAB_004175d0;
    case 0x11:
      return &LAB_00417630;
    case 0x12:
      return &LAB_00417720;
    case 0x13:
      return &LAB_00417790;
    case 0x20:
      return &LAB_00417800;
    case 0x21:
      return &LAB_00417890;
    case 0x30:
      return &LAB_004176a0;
    case 0x31:
      return &LAB_00417580;
    }
    break;
  case 0x13:
    switch(uVar2) {
    case 0x10:
      return &LAB_00417970;
    case 0x11:
      return &LAB_004179c0;
    case 0x12:
      return &LAB_00417a80;
    case 0x13:
      return &LAB_00417b00;
    case 0x20:
      return &LAB_00417b50;
    case 0x21:
      return &LAB_00417be0;
    case 0x30:
      return &LAB_00417a10;
    case 0x31:
      return &LAB_00417920;
    }
    break;
  case 0x20:
    switch(uVar2) {
    case 0x10:
      return &LAB_00417cc0;
    case 0x11:
      return &LAB_00417d20;
    case 0x12:
      return &LAB_00417dc0;
    case 0x13:
      return &LAB_00417e40;
    case 0x20:
      return &LAB_00417e90;
    case 0x21:
      return &LAB_00417ee0;
    case 0x30:
      return &LAB_00417d70;
    case 0x31:
      return &LAB_00417c70;
    }
    break;
  case 0x21:
    switch(uVar2) {
    case 0x10:
      return &LAB_00417f70;
    case 0x11:
      return &LAB_00417fd0;
    case 0x12:
      return &LAB_00418070;
    case 0x13:
      return &LAB_004180f0;
    case 0x20:
      return &LAB_00418140;
    case 0x21:
      return &LAB_00418180;
    case 0x30:
      return &LAB_00418020;
    case 0x31:
      return &LAB_00417f20;
    }
    break;
  case 0x30:
    switch(uVar2) {
    case 0x10:
      return &LAB_004172d0;
    case 0x11:
      return &LAB_00417320;
    case 0x12:
      return &LAB_004173c0;
    case 0x13:
      return &LAB_00417430;
    case 0x20:
      return &LAB_00417480;
    case 0x21:
      return &LAB_00417500;
    case 0x30:
      return &LAB_00417370;
    case 0x31:
      return &LAB_00417280;
    }
    break;
  case 0x31:
    switch(uVar2) {
    case 0x10:
      return &LAB_00416a70;
    case 0x11:
      return &LAB_00416ab0;
    case 0x12:
      return &LAB_00416b50;
    case 0x13:
      return &LAB_00416b90;
    case 0x20:
      return &LAB_00416be0;
    case 0x21:
      return &LAB_00416c50;
    case 0x30:
      return &LAB_00416af0;
    case 0x31:
      return &LAB_00416a30;
    }
  }
  return (undefined1 *)0x0;
}


