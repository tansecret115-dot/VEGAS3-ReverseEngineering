/* Module: 50comupd.exe
   Function: FUN_01006f9d
   Address: 01006f9d
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_01006f9d(int *param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9)

{
  bool bVar1;
  undefined3 extraout_var;
  
  param_1[3000] = param_3;
  param_1[0xbb9] = param_4;
  param_1[0xbba] = param_5;
  param_1[0xbbb] = param_6;
  param_1[0xbbc] = param_7;
  param_1[0xbbd] = param_8;
  param_1[0xbbe] = param_9;
  param_1[1] = param_2;
  param_1[2] = param_2 - 1;
  if (((param_2 - 1 & param_2) == 0) &&
     (bVar1 = FUN_01007099(param_1), CONCAT31(extraout_var,bVar1) != 0)) {
    FUN_0100701b((int)param_1);
    return 1;
  }
  return 0;
}


