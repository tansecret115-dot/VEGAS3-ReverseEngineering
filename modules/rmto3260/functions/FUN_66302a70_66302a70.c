/* Module: rmto3260.dll
   Function: FUN_66302a70
   Address: 66302a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_66302a70(int param_1,char *param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
  }
  uVar1 = FUN_66304850(param_2,param_3,param_4,param_5);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return 0;
}


