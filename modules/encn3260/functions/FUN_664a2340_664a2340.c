/* Module: encn3260.dll
   Function: FUN_664a2340
   Address: 664a2340
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_664a2340(int param_1,undefined4 param_2)

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
                        (*(undefined4 **)(param_1 + 0xac),&DAT_664dd1a0,param_2);
      return uVar1;
    }
  }
  uVar1 = (**(code **)*puVar2)(puVar2,&DAT_664dd1a0,param_2);
  return uVar1;
}


