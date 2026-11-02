/* Module: rmbe3260.dll
   Function: FUN_66012ef0
   Address: 66012ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66012ef0(int param_1,char *param_2)

{
  int *this;
  int *piVar1;
  int local_10 [3];
  
  this = (int *)(param_1 + 0x74);
  FUN_6605b970(this,param_2);
  if (0xff < *(uint *)(*this + -8)) {
    piVar1 = FUN_6605bf20(this,local_10,0xff);
    FUN_6605b900(this,piVar1);
    FUN_6605b770(local_10);
  }
  return 0;
}


