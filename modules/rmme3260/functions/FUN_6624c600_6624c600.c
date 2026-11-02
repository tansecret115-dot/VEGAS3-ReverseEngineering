/* Module: rmme3260.dll
   Function: FUN_6624c600
   Address: 6624c600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624c600(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004005;
  }
  iVar1 = param_2[4];
  if (((((iVar1 != 0) && (iVar1 != 3)) && (iVar1 != 0x52474233)) &&
      ((iVar1 != 0x52474235 && (iVar1 != 0x52474236)))) &&
     ((iVar1 != 0x20524742 && ((iVar1 != 0x38424954 && (iVar1 != 0x59555632)))))) {
    return 0x80004005;
  }
  FUN_66235300(*(void **)(param_1 + 0x40),param_2);
  return 0;
}


