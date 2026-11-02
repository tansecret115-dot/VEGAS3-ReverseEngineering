/* Module: sftrans1.dll
   Function: FUN_00461a10
   Address: 00461a10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_00461a10(int param_1,int param_2,int param_3)

{
  int iVar1;
  HWND hWnd;
  float *pfVar2;
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
  
  iVar1 = *(int *)(param_1 + 8);
  pfVar2 = (float *)(iVar1 + 0x58);
  if (param_2 == 0x588) {
    hWnd = GetDlgItem(*(HWND *)(param_1 + 4),0x588);
    switch(*(undefined4 *)(param_3 + 8)) {
    case 0x836:
    case 0x838:
      goto switchD_00461a77_caseD_836;
    case 0x837:
      local_14c = 1;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_150 = 2;
      local_148 = 0xffffffff;
      local_144 = 0x3f800000;
      local_134 = 0;
      local_30 = 0;
      local_24 = 0x3f800000;
      local_14 = 0;
      local_10 = 1;
      local_c = 0;
      *pfVar2 = 0.5;
      *(undefined4 *)(iVar1 + 0x5c) = 0x3f000000;
      local_160 = 0;
      uStack_15c = 0x3fe00000;
      local_158 = 0;
      uStack_154 = 0x3fe00000;
      local_140 = 0x3f800000;
      local_13c = 0x3ecccccd;
      local_138 = 0x3ecccccd;
      local_2c = 0xff;
      local_28 = 0x80;
      SendMessageA(hWnd,0x804,0,(LPARAM)&local_160);
      local_14c = 1;
      local_10 = 1;
      *(undefined4 *)(iVar1 + 0x60) = 0x3f000000;
      *(undefined4 *)(iVar1 + 100) = 0x3f000000;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_150 = 2;
      local_148 = 0xffffffff;
      local_144 = 0x3f800000;
      local_134 = 0;
      local_30 = 0;
      local_24 = 0x3f800000;
      local_14 = 0;
      local_c = 0;
      local_160 = 0;
      uStack_15c = 0x3fe00000;
      local_158 = 0;
      uStack_154 = 0x3fe00000;
      local_140 = 0x3ecccccd;
      local_13c = 0x3ecccccd;
      local_138 = 0x3f800000;
      local_2c = 0xff0000;
      local_28 = 0x800000;
      SendMessageA(hWnd,0x803,0,(LPARAM)&local_160);
      FUN_0045fcb0();
      return 1;
    case 0x839:
      local_14c = 1;
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
      local_10 = 1;
      local_c = 0;
      SendMessageA(hWnd,0x805,0,(LPARAM)&local_160);
      *pfVar2 = (float)(double)CONCAT44(uStack_15c,local_160);
      *(float *)(iVar1 + 0x5c) = (float)(double)CONCAT44(uStack_154,local_158);
      FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x586,"%1.3f",
                   (double)(float)(double)CONCAT44(uStack_15c,local_160));
      FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x587,"%1.3f",(double)*(float *)(iVar1 + 0x5c));
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_160 = 0;
      uStack_15c = 0x3fe00000;
      local_158 = 0;
      uStack_154 = 0x3fe00000;
      local_150 = 2;
      local_14c = 1;
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
      local_10 = 1;
      local_c = 0;
      SendMessageA(hWnd,0x805,1,(LPARAM)&local_160);
      *(float *)(iVar1 + 0x60) = (float)(double)CONCAT44(uStack_15c,local_160);
      *(float *)(iVar1 + 100) = (float)(double)CONCAT44(uStack_154,local_158);
      FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x58a,"%1.3f",
                   (double)(float)(double)CONCAT44(uStack_15c,local_160));
      FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x58b,"%1.3f",(double)*(float *)(iVar1 + 100));
      FUN_0045fcb0();
      return 1;
    default:
      return 1;
    }
  }
  return 0;
switchD_00461a77_caseD_836:
  if (*(int *)(param_3 + 0xc) == 0) {
    *pfVar2 = (float)*(double *)(param_3 + 0x168);
    *(float *)(iVar1 + 0x5c) = (float)*(double *)(param_3 + 0x170);
    FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x586,"%1.3f",(double)*pfVar2);
    FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x586,"%1.3f",(double)*(float *)(iVar1 + 0x5c));
    FUN_0045fcb0();
    return 1;
  }
  *(float *)(iVar1 + 0x60) = (float)*(double *)(param_3 + 0x168);
  *(float *)(iVar1 + 100) = (float)*(double *)(param_3 + 0x170);
  FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x58a,"%1.3f",(double)*(float *)(iVar1 + 0x60));
  FUN_004c85d0(*(undefined4 *)(param_1 + 4),0x58b,"%1.3f",(double)*(float *)(iVar1 + 100));
  FUN_0045fcb0();
  return 1;
}


