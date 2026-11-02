/* Module: sftrans1.dll
   Function: FUN_004a2a50
   Address: 004a2a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004a2a50(int *param_1,int param_2,int param_3,float *param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  HWND hWnd;
  HWND hWnd_00;
  int iVar3;
  LPARAM lParam;
  float10 fVar4;
  float local_24;
  CHAR local_20 [16];
  undefined1 local_10 [16];
  
  fVar2 = (float)param_5;
  local_24 = 0.0;
  hWnd = GetDlgItem((HWND)param_1[0xc],param_2);
  hWnd_00 = GetDlgItem((HWND)param_1[0xc],param_3);
  fVar1 = *param_4;
  iVar3 = GetWindowTextA(hWnd,local_20,0xf);
  if (iVar3 != 0) {
    fVar4 = (float10)FUN_004d6ed0(local_20,0);
    local_24 = (float)fVar4;
  }
  if (((fVar2 <= local_24) && (fVar2 = (float)param_6, local_24 <= (float)param_6)) ||
     (local_24 == fVar2)) {
    FUN_004c6ae0(local_10,&DAT_0055e6e4,(double)fVar1);
    fVar4 = (float10)FUN_004d6ed0(local_10,0);
    if (fVar4 != (float10)local_24) {
      *param_4 = local_24;
      lParam = ftol();
      SendMessageA(hWnd_00,0x610,0,lParam);
      (**(code **)(*param_1 + 0x2c))();
    }
  }
  FUN_004a19e0();
  return;
}


