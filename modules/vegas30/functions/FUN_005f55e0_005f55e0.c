/* Module: vegas30.exe
   Function: FUN_005f55e0
   Address: 005f55e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005f55e0(LPCSTR param_1,int param_2,LPSTR param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  undefined8 uVar2;
  
  lstrcpynA(param_3,param_1,param_2);
  param_3[param_2 + -1] = '\0';
  uVar2 = FUN_005f5580();
  *param_4 = uVar2;
  if (param_5 == 0) {
    bVar1 = DAT_00646e00 != 0;
    DAT_00646e00 = DAT_00646e00 + -1;
    DAT_00646e04 = DAT_00646e04 + -1 + (uint)bVar1;
  }
  return 1;
}


