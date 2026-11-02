/* Module: rmme3260.dll
   Function: FUN_6623c9b0
   Address: 6623c9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623c9b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80004005;
  puVar1 = *(undefined4 **)(param_1 + 0x70);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,&DAT_6626ad58,param_2);
  }
  return uVar2;
}


