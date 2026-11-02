/* Module: sfnetmedia.dll
   Function: FUN_0041f9b0
   Address: 0041f9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f9b0(undefined4 param_1,HWND__ param_2)

{
  HWND__ HVar1;
  int iVar2;
  BYTE *pBVar3;
  
  HVar1.unused = param_2.unused;
  if (param_2.unused != 0) {
                    /* WARNING: Load size is inaccurate */
    iVar2 = *param_2.unused;
    param_2.unused = 0;
    iVar2 = (**(code **)(iVar2 + 0x3c))(HVar1.unused);
    if (-1 < iVar2) {
      pBVar3 = FUN_00419120(DAT_00441d60,0x113a);
      FUN_00417320(&param_2,pBVar3);
    }
  }
  return;
}


