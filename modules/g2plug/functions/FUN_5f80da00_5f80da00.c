/* Module: g2plug.dll
   Function: FUN_5f80da00
   Address: 5f80da00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f80da00(HWND param_1,int param_2,int param_3)

{
  int iVar1;
  CHAR local_80 [128];
  
  FUN_5f80db80(param_1,(uint)(param_3 == 0x853));
  iVar1 = FUN_5f80d9d0(&DAT_5f876350,param_3);
  if (iVar1 == 0) {
    DAT_5f876378 = *(int *)(param_2 + 0x3ef);
    DAT_5f87637c = *(int *)(param_2 + 0x3f3);
  }
  else if (iVar1 == 7) {
    _DAT_5f8763b0 = *(undefined4 *)(param_2 + 999);
    _DAT_5f8763b4 = *(undefined4 *)(param_2 + 0x3eb);
  }
  else {
    if (iVar1 < 8) {
      *(int *)(param_2 + 999) = (&DAT_5f876378)[iVar1 * 2];
      *(int *)(param_2 + 0x3eb) = (&DAT_5f87637c)[iVar1 * 2];
    }
    if (iVar1 < 0) {
      return;
    }
    if (7 < iVar1) {
      return;
    }
  }
  if (((param_3 == 0x84c) && (DAT_5f876378 == 0)) && (DAT_5f87637c == 0)) {
    FUN_5f8172d0(DAT_5f87746c,0x100,local_80,0x80);
    SetDlgItemTextA(param_1,0x7eb,local_80);
    SetDlgItemTextA(param_1,0x7ec,local_80);
    return;
  }
  wsprintfA(local_80,"%d",(&DAT_5f876378)[iVar1 * 2]);
  SetDlgItemTextA(param_1,0x7eb,local_80);
  wsprintfA(local_80,"%d",(&DAT_5f87637c)[iVar1 * 2]);
  SetDlgItemTextA(param_1,0x7ec,local_80);
  return;
}


