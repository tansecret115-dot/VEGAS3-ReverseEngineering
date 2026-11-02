/* Module: erv23260.dll
   Function: FUN_637f6ab0
   Address: 637f6ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_637f6ab0(void *this,undefined4 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  
  switch(param_1) {
  case 0:
    puVar2 = &DAT_638291b8;
    break;
  case 1:
    puVar2 = &DAT_638291d8;
    break;
  case 2:
    puVar2 = &DAT_638291f8;
    break;
  case 3:
    puVar2 = &DAT_63829218;
    break;
  case 4:
    puVar2 = &DAT_63829238;
    break;
  case 5:
    puVar2 = &DAT_63829258;
    break;
  case 6:
    puVar2 = &DAT_63829278;
    break;
  default:
    return 10;
  }
  iVar3 = 0x20;
  puVar1 = this;
  do {
    *puVar1 = puVar1[(int)puVar2 - (int)this];
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x1b04) = param_1;
  return 0;
}


