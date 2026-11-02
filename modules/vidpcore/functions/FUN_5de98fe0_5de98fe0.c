/* Module: vidpcore.dll
   Function: FUN_5de98fe0
   Address: 5de98fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5de98fe0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  HWND hWnd;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  hWnd = GetDlgItem((HWND)param_1[0xc],0x5b0);
  if (param_3 == 0x5b0) {
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0x836:
    case 0x838:
      param_1[0x13] = (int)(float)*(double *)(param_4 + 0x168);
      param_1[0x14] = (int)(float)*(double *)(param_4 + 0x170);
      FUN_5deb6b40(param_1[0xc],0x5a4,"%1.3f",(double)(float)param_1[0x13]);
      FUN_5deb6b40(param_1[0xc],0x5a5,"%1.3f",(double)(float)param_1[0x14]);
      (**(code **)(*param_1 + 0x2c))();
      return 0;
    case 0x837:
      param_1[0x13] = 0x3f000000;
      param_1[0x14] = 0x3f000000;
      (**(code **)(*param_1 + 0x2c))();
      break;
    case 0x839:
      local_14c = 1;
      local_10 = 1;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_160 = 0;
      uStack_15c = 0x3fe00000;
      local_158 = 0;
      uStack_154 = 0x3fe00000;
      local_150 = 2;
      local_148 = 0xffffffff;
      local_144 = 0x3f800000;
      local_140 = 0x3f000000;
      local_13c = 0x3f000000;
      local_138 = 0;
      local_134 = 0;
      local_30 = 0;
      local_2c = 0xffffff;
      local_28 = 0;
      local_24 = 0x3f800000;
      local_14 = 0;
      local_c = 0;
      SendMessageA(hWnd,0x805,0,(LPARAM)&local_160);
      param_1[0x13] = (int)(float)(double)CONCAT44(uStack_15c,local_160);
      param_1[0x14] = (int)(float)(double)CONCAT44(uStack_154,local_158);
      FUN_5deb6b40(param_1[0xc],0x5a4,"%1.3f",(double)(float)(double)CONCAT44(uStack_15c,local_160))
      ;
      FUN_5deb6b40(param_1[0xc],0x5a5,"%1.3f",(double)(float)param_1[0x14]);
      (**(code **)(*param_1 + 0x2c))();
      return 0;
    }
  }
  return 0;
}


