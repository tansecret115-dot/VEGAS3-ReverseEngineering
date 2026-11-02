/* Module: sftrans1.dll
   Function: FUN_004586b0
   Address: 004586b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004586b0(int *param_1,undefined4 param_2,int param_3,int param_4)

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
  
  if (param_3 == 0x4bd) {
    hWnd = GetDlgItem((HWND)param_1[0xc],0x4bd);
    switch(*(undefined4 *)(param_4 + 8)) {
    case 0x836:
    case 0x838:
      param_1[0x1a] = (int)(float)*(double *)(param_4 + 0x168);
      param_1[0x1b] = (int)(float)*(double *)(param_4 + 0x170);
      FUN_004c85d0(param_1[0xc],0x4bb,"%1.3f",(double)(float)param_1[0x1a]);
      FUN_004c85d0(param_1[0xc],0x4bc,"%1.3f",(double)(float)param_1[0x1b]);
      (**(code **)(*param_1 + 0x2c))();
      return 0;
    case 0x837:
      param_1[0x1a] = 0x3f000000;
      param_1[0x1b] = 0x3f000000;
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
      param_1[0x1a] = (int)(float)(double)CONCAT44(uStack_15c,local_160);
      param_1[0x1b] = (int)(float)(double)CONCAT44(uStack_154,local_158);
      FUN_004c85d0(param_1[0xc],0x4bb,"%1.3f",(double)(float)(double)CONCAT44(uStack_15c,local_160))
      ;
      FUN_004c85d0(param_1[0xc],0x4bc,"%1.3f",(double)(float)param_1[0x1b]);
      (**(code **)(*param_1 + 0x2c))();
      return 0;
    }
  }
  return 0;
}


