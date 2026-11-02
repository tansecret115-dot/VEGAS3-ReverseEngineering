/* Module: pngu3266.dll
   Function: FUN_6061264e
   Address: 6061264e
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6061264e(int param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  BOOL BVar3;
  uint uVar4;
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  bVar1 = FUN_60612503();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((((param_1 == 0x12340042) && (param_2 != (uint *)0x0)) && (0x27 < *param_2)) &&
       (BVar3 = SystemParametersInfoA(0x30,0,&local_14,0), BVar3 != 0)) {
      param_2[1] = 0;
      param_2[2] = 0;
      uVar4 = GetSystemMetrics(0);
      param_2[3] = uVar4;
      uVar4 = GetSystemMetrics(1);
      param_2[5] = local_14;
      param_2[6] = uStack_10;
      param_2[7] = uStack_c;
      param_2[8] = uStack_8;
      uVar2 = 1;
      param_2[4] = uVar4;
      param_2[9] = 1;
      if (0x47 < *param_2) {
        lstrcpyA((LPSTR)(param_2 + 10),s_DISPLAY_60649188);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*DAT_6064b180)(param_1,param_2);
  }
  return uVar2;
}


