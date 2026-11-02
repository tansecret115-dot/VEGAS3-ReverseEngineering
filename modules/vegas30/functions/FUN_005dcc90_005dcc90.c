/* Module: vegas30.exe
   Function: FUN_005dcc90
   Address: 005dcc90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005dcc90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_7;
  *param_7 = 0;
  *param_8 = 0xffffffff;
  iVar2 = FUN_005db0d0(param_1,param_2,&param_5,DAT_0062a590,DAT_0062a594,DAT_0062a598,DAT_0062a59c,
                       param_3,param_4,&param_7,param_8);
  if (-1 < iVar2) {
    *puVar1 = param_7;
    iVar2 = 0;
  }
  return iVar2;
}


