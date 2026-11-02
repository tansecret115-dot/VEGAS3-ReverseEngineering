/* Module: rmbe3260.dll
   Function: FUN_6601ba90
   Address: 6601ba90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601ba90(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0x80004003;
  }
  uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x1ca))
                    (*(undefined4 **)(param_1 + 0x1ca),&DAT_660658d8,param_2);
  return uVar1;
}


