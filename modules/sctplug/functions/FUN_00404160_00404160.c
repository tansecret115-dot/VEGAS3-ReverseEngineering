/* Module: sctplug.dll
   Function: FUN_00404160
   Address: 00404160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00404160(undefined4 param_1,HANDLE param_2,int *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0x8004e080;
  if ((((0xb < param_4) && (param_3 != (int *)0x0)) && (*param_3 == 0x46464952)) &&
     (param_3[2] == 0x45564157)) {
    if (((0x18 < param_4) && (param_3[3] == 0x20746d66)) && ((short)param_3[5] == 0x1971)) {
      return 0x8004e080;
    }
    uVar2 = FUN_00414590(param_2,0x746f6373,&param_4,(undefined4 *)0x0);
    if (uVar2 != 0) {
      return 0x8004e080;
    }
    uVar1 = 0;
  }
  return uVar1;
}


