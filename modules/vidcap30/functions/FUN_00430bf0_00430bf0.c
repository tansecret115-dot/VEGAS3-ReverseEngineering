/* Module: vidcap30.exe
   Function: FUN_00430bf0
   Address: 00430bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 *
FUN_00430bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = calloc(1,param_4 * 0x20 + 0xd4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x2c] = param_4;
    puVar1[8] = param_2;
    puVar1[0x28] = param_5;
    puVar1[0x29] = param_6;
    FUN_00430860(puVar1,0,0,0,0,0,0,0,0,0);
    FUN_00430b20(puVar1,param_3,param_4);
  }
  return puVar1;
}


