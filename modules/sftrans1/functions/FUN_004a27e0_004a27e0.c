/* Module: sftrans1.dll
   Function: FUN_004a27e0
   Address: 004a27e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004a27e0(int *param_1,int param_2,int param_3,int param_4,float *param_5,float param_6,
            int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11,int param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  HWND hWnd;
  HWND hWnd_00;
  HWND hWnd_01;
  int iVar5;
  LPARAM lParam;
  int iVar6;
  LRESULT LVar7;
  LRESULT LVar8;
  float10 fVar9;
  CHAR local_20 [16];
  undefined1 local_10 [16];
  
  fVar2 = (float)(int)param_6;
  fVar3 = (float)param_7;
  hWnd = GetDlgItem((HWND)param_1[0xc],param_3);
  GetDlgItem((HWND)param_1[0xc],param_2);
  if (param_4 == 9) {
    param_6 = 0.0;
    hWnd_00 = GetDlgItem((HWND)param_1[0xc],param_2);
    hWnd_01 = GetDlgItem((HWND)param_1[0xc],param_3);
    fVar1 = *param_5;
    iVar5 = GetWindowTextA(hWnd_00,local_20,0xf);
    if (iVar5 != 0) {
      fVar9 = (float10)FUN_004d6ed0(local_20,0);
      param_6 = (float)fVar9;
    }
    fVar4 = fVar2;
    if (((fVar2 <= param_6) && (fVar4 = fVar3, param_6 <= fVar3)) || (param_6 == fVar4)) {
      FUN_004c6ae0(local_10,&DAT_0055e6e4,(double)fVar1);
      fVar9 = (float10)FUN_004d6ed0(local_10,0);
      if (fVar9 != (float10)param_6) {
        *param_5 = param_6;
        lParam = ftol();
        SendMessageA(hWnd_01,0x610,0,lParam);
        (**(code **)(*param_1 + 0x2c))();
      }
      FUN_004a19e0();
    }
    else {
      FUN_004a19e0();
    }
  }
  else if (((param_4 != 5) && (param_4 != 8)) && (param_4 != 4)) {
    iVar5 = SendMessageA(hWnd,0x60a,0,0);
    goto LAB_004a299e;
  }
  iVar5 = ftol();
LAB_004a299e:
  iVar6 = FUN_004bfba0(0x115,param_8,param_9,param_10,param_11,iVar5);
  LVar7 = SendMessageA(hWnd,0x60b,0,0);
  LVar8 = SendMessageA(hWnd,0x60c,0,0);
  if (iVar6 - iVar5 != 0) {
    if (iVar6 == LVar8) {
      *param_5 = fVar3;
    }
    else if (iVar6 == LVar7) {
      *param_5 = fVar2;
    }
    else {
      *param_5 = (float)(iVar6 - iVar5) / (float)param_12 + *param_5;
    }
    (**(code **)(*param_1 + 0x2c))();
    FUN_004a19e0(fVar2);
  }
  return;
}


