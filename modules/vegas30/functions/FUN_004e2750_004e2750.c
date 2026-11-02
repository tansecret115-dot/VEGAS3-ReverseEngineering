/* Module: vegas30.exe
   Function: FUN_004e2750
   Address: 004e2750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e2750(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 local_260 [304];
  undefined1 local_130 [304];
  
  if ((DAT_0064761c & 0x800) == 0) {
    if (param_4 != 0 || param_5 != 0) {
      if (*(int *)(param_1 + 0xd50) != 0) {
        local_268 = 0;
        local_264 = 0;
        FUN_004dd620(param_1,param_2,param_3,param_4,param_5,local_130,local_260,&local_268,
                     &local_264);
        uVar1 = FUN_0046dd70(*(undefined4 *)(param_1 + 0xcd4),local_268,local_264);
        return uVar1;
      }
    }
  }
  return 0x80004005;
}


