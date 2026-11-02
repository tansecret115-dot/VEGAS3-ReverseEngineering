/* Module: rmme3260.dll
   Function: FUN_66238020
   Address: 66238020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66238020(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0xa8);
    if (puVar2 == (undefined4 *)0x0) {
      return 0x80004005;
    }
    if ((*(byte *)(param_1 + 0x4c) & 0x20) != 0) {
      uVar1 = (**(code **)**(undefined4 **)(param_1 + 0xac))
                        (*(undefined4 **)(param_1 + 0xac),&DAT_6626ad58,param_2);
      return uVar1;
    }
  }
  uVar1 = (**(code **)*puVar2)(puVar2,&DAT_6626ad58,param_2);
  return uVar1;
}


